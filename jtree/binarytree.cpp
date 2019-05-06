// binarytree.h: ������
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
			cout << p->data << " ";		//�ڶ���������ʱ�����
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
		return -1;   //�սڵ�ĸ߶�Ϊ-1

	//�ݹ�
	int iheightlefttree = tree_max_range(root->lchild, imaxdistance) + 1;   //�������ĵĸ߶ȼ�1
	int iheightrighttree = tree_max_range(root->rchild, imaxdistance) + 1;   //�������ĸ߶ȼ�1
	int idistance = iheightlefttree + iheightrighttree;    //��������������ĸ߶ȼ����������ĸ߶�+2
	imaxdistance = imaxdistance > idistance ? imaxdistance : idistance;            //�õ���������ֵ
	return iheightlefttree > iheightrighttree ? iheightlefttree : iheightrighttree;
}

void tree_max_range_ex(PTTree root, int* maxnodelength) 
{
    // ������Ҷ�ӽ�㣬���ء�
    if (root == NULL) {
        return;
    }
 
    // ���������Ϊ�գ���ô�ý�������������Ϊ0��
    if (root->lchild == NULL) {
        root->leftsubtreemaxlength = 0;
    }
 
    // ���������Ϊ�գ���ô�ý�������������Ϊ0��
    if (root->rchild == NULL) {
        root->rightsubtreemaxlength = 0;
    }
 
    // �����������Ϊ�գ��ݹ��������������롣
    if (root->lchild != NULL) {
        tree_max_range_ex(root->lchild, maxnodelength);
    }
 
    // �����������Ϊ�գ��ݹ��������������롣
    if (root->rchild != NULL) {
        tree_max_range_ex(root->rchild, maxnodelength);
    }
 
    // �����������о������������롣
    if (root->lchild != NULL) {
        if (root->lchild->leftsubtreemaxlength > root->lchild->rightsubtreemaxlength) {
            root->leftsubtreemaxlength = root->lchild->leftsubtreemaxlength + 1;
        } else {
            root->leftsubtreemaxlength = root->lchild->rightsubtreemaxlength + 1;
        }
    }
 
    // �����������о������������롣
    if (root->rchild != NULL) {
        if (root->rchild->leftsubtreemaxlength > root->rchild->rightsubtreemaxlength) {
            root->rightsubtreemaxlength = root->rchild->leftsubtreemaxlength + 1;
        } else {
            root->rightsubtreemaxlength = root->rchild->rightsubtreemaxlength + 1;
        }
    }
 
    // ��������롣
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
    if(pre.size()==0||in.size()==0||pre.size()!=in.size()) // �ݹ���ʹ������� 
        return NULL;

    PTTree root = new TTree; // �������ڵ� 
    int index = 0;
    vector<int> left_pre,right_pre,left_in,right_in; // ����ĵݹ���Ҫ�Ĳ��� 

    for(int i = 0;i<in.size();i++) // ��������������ҵ����ڵ� 
        if(root->data == in[i])
            index = i;

    for(int i = 0;i<index;i++)
    {
        left_pre.push_back(pre[i+1]); // ���ڵ�������ǰ��������� 
        left_in.push_back(in[i]); // ���ڵ��������������������       
    }

    for(int j = index+1;j<pre.size();j++)
    {
        right_pre.push_back(pre[j]); // ���ڵ�������ǰ��������� 
        right_in.push_back(in[j]); // ���ڵ������������������ 
    }

    root->lchild = make_tree(left_pre,left_in); // �ݹ鹹�������� 
    root->rchild = make_tree(right_pre,right_in); // �ݹ鹹�������� 
    return root;

}