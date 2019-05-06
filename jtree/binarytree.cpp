// binarytree.h: 二叉树
//
#include "stdafx.h"
#include <queue>
#include <stack>
PTTree createtree(ElementData* arr, int idx, int n)
{
	if(idx >= n)
	{
		return NULL;
	}

	PTTree root = new TTree;
	root->data = arr[idx];
	root->lchild = createtree(arr, idx*2+ 1, n);
	root->rchild = createtree(arr, idx*2+ 2, n);
	return root;
}

PTTree bst_createtree(PTTree root, ElementData key)
{
	if(root == NULL)
	{
		root = new TTree;
		root->data = key;
		root->lchild = NULL;
		root->rchild = NULL;
		return root;
	}

	if(key < root->data)
		root->lchild = bst_createtree(root->lchild, key);
	else
		root->rchild = bst_createtree(root->rchild, key);
	return root;
}

void pre_print(PTTree root)
{
	if(NULL == root)
	{
		return;
	}
	std::cout<<root->data<<' ';
	pre_print(root->lchild);
	pre_print(root->rchild);
}

void mid_print(PTTree root)
{
	if(NULL == root)
	{
		return;
	}

	mid_print(root->lchild);
	std::cout<<root->data<<' ';
	mid_print(root->rchild);
}

void back_print(PTTree root)
{
	if(NULL == root)
	{
		return;
	}

	back_print(root->lchild);
	back_print(root->rchild);
	std::cout<<root->data<<' ';
}

void pre_print_ex(PTTree root)
{
	if(root == NULL)
		return;

	stack<PTTree> sc;
	sc.push(root);
	while(!sc.empty())
	{
		PTTree tr = sc.top();
		sc.pop();
		std::cout<<tr->data<<' ';
		if(tr->rchild != NULL)
		{
			sc.push(tr->rchild);
		}
		if(tr->lchild != NULL)
		{
			sc.push(tr->lchild);
		}
	}
}

void mid_print_ex(PTTree root)
{
	if(root == NULL)
		return;

	PTTree p = root;
	stack<PTTree>s;
	while (p != NULL || !s.empty())
	{
		while (p!=NULL)
		{
			s.push(p);
			p = p->lchild;
		}
		if (!s.empty())
		{
			p = s.top();
			cout << p->data << " ";		//第二次遇见的时候输出
			s.pop();
			p = p->rchild;
		}
	}
}

void back_print_ex(PTTree root)
{
	if(root == NULL)
		return;

	stack<PTTree>s;
	PTTree cur = root, pre = NULL;
	s.push(root);
	while (!s.empty())
	{
		cur = s.top();
		if ((cur->lchild == NULL&&cur->rchild == NULL) ||
			((pre == cur->lchild || pre == cur->rchild) && pre != NULL))
		{
			cout << cur->data << " ";
			s.pop();
			pre = cur;
		}
		else
		{
			if (cur->rchild != NULL)
				s.push(cur->rchild);
			if (cur->lchild != NULL)
				s.push(cur->lchild);
		}
	}
}

int tree_height(PTTree root)
{
    if(root == NULL)
        return 0;
	std::cout<<root->data<<' ';
    int left = tree_height(root->lchild);
    int right = tree_height(root->rchild);
    return (left>right) ? (left+1) : (right+1);
}

int tree_width(PTTree root)
{
	if(root == NULL)
		return 0;

	int width = 0;
	int max_width = 0;
	queue<PTTree> qe;
	qe.push(root);
	while(!qe.empty())
	{
		width = qe.size();
		if(max_width < width){
			max_width = width;
		}
		PTTree tr = qe.front();
		qe.pop();
		if(tr->lchild != NULL)
			qe.push(tr->lchild);
		if(tr->rchild != NULL)
			qe.push(tr->rchild);
		//std::cout<<tr->data<<' ';
	}
	return max_width;
}

int tree_max_range(PTTree root, int& imaxdistance)
{
	if (root == NULL)
		return -1;   //空节点的高度为-1

	//递归
	int iheightlefttree = tree_max_range(root->lchild, imaxdistance) + 1;   //左子树的的高度加1
	int iheightrighttree = tree_max_range(root->rchild, imaxdistance) + 1;   //右子树的高度加1
	int idistance = iheightlefttree + iheightrighttree;    //距离等于左子树的高度加上右子树的高度+2
	imaxdistance = imaxdistance > idistance ? imaxdistance : idistance;            //得到距离的最大值
	return iheightlefttree > iheightrighttree ? iheightlefttree : iheightrighttree;
}

void tree_max_range_ex(PTTree root, int* maxnodelength) 
{
    // 遍历到叶子结点，返回。
    if (root == NULL) {
        return;
    }
 
    // 如果左子树为空，那么该结点左子树最长距离为0。
    if (root->lchild == NULL) {
        root->leftsubtreemaxlength = 0;
    }
 
    // 如果右子树为空，那么该结点右子树最长距离为0。
    if (root->rchild == NULL) {
        root->rightsubtreemaxlength = 0;
    }
 
    // 如果左子树不为空，递归查找左子树最长距离。
    if (root->lchild != NULL) {
        tree_max_range_ex(root->lchild, maxnodelength);
    }
 
    // 如果右子树不为空，递归查找右子树最长距离。
    if (root->rchild != NULL) {
        tree_max_range_ex(root->rchild, maxnodelength);
    }
 
    // 计算左子树中距离根结点的最长距离。
    if (root->lchild != NULL) {
        if (root->lchild->leftsubtreemaxlength > root->lchild->rightsubtreemaxlength) {
            root->leftsubtreemaxlength = root->lchild->leftsubtreemaxlength + 1;
        } else {
            root->leftsubtreemaxlength = root->lchild->rightsubtreemaxlength + 1;
        }
    }
 
    // 计算右子树中距离根结点的最长距离。
    if (root->rchild != NULL) {
        if (root->rchild->leftsubtreemaxlength > root->rchild->rightsubtreemaxlength) {
            root->rightsubtreemaxlength = root->rchild->leftsubtreemaxlength + 1;
        } else {
            root->rightsubtreemaxlength = root->rchild->rightsubtreemaxlength + 1;
        }
    }
 
    // 更新最长距离。
    if (root->leftsubtreemaxlength + root->rightsubtreemaxlength > *maxnodelength) {
        *maxnodelength = root->leftsubtreemaxlength + root->rightsubtreemaxlength;
    }
}

void tree_level_print(PTTree root)
{
	if(root == NULL)
		return;

	queue<PTTree> qe;
	qe.push(root);
	while(!qe.empty())
	{
		PTTree tr = qe.front();
		qe.pop();
		if(tr->lchild != NULL)
			qe.push(tr->lchild);
		if(tr->rchild != NULL)
			qe.push(tr->rchild);
		std::cout<<tr->data<<' ';
	}
}

PTTree make_tree(vector<int> pre,vector<int> in)
{
    if(pre.size()==0||in.size()==0||pre.size()!=in.size()) // 递归基和错误条件 
        return NULL;

    PTTree root = new TTree; // 创建根节点 
    int index = 0;
    vector<int> left_pre,right_pre,left_in,right_in; // 下面的递归需要的参数 

    for(int i = 0;i<in.size();i++) // 在中序遍历里面找到根节点 
        if(root->data == in[i])
            index = i;

    for(int i = 0;i<index;i++)
    {
        left_pre.push_back(pre[i+1]); // 根节点左子树前序遍历序列 
        left_in.push_back(in[i]); // 根节点右左子树中序遍历序列       
    }

    for(int j = index+1;j<pre.size();j++)
    {
        right_pre.push_back(pre[j]); // 根节点右子树前序遍历序列 
        right_in.push_back(in[j]); // 根节点右子树中序遍历序列 
    }

    root->lchild = make_tree(left_pre,left_in); // 递归构建左子树 
    root->rchild = make_tree(right_pre,right_in); // 递归构建右子树 
    return root;

}