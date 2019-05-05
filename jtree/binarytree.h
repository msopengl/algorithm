// binarytree.h: 二叉树、平衡二叉树、B树
// other: https://www.cnblogs.com/llguanli/p/7363657.html
// 求宽度 https://blog.csdn.net/liuyi1207164339/article/details/50898902
// 已经先序、中序创建二叉树，或其他序列 https://blog.csdn.net/DZT2727/article/details/78926690

#pragma once
#include <vector>

/*
	ADT 树节点
*/
typedef struct tagTTree
{
	ElementData data;
	struct tagTTree* lchild;
	struct tagTTree* rchild;

	tagTTree()
	{
		clear();
	};

	bool clear()
	{
		lchild = NULL;
		rchild = NULL;
		data = -1;
		return true;
	};

}TTree, *PTTree;

// 创建二叉树
PTTree createtree(ElementData* arr, int idx, int n);

// 创建二叉搜索树
PTTree bst_createtree(PTTree root, ElementData n);

// ing 删除

// ing 已经先序、中序创建二叉树，或其他序列
PTTree planttree(vector<int> pre,vector<int> in);

// ing 已经先序、中序, 求后续，或其他序列

// 递归遍历二叉树
void pre_print(PTTree root);
void mid_print(PTTree root);
void back_print(PTTree root);

// 非递归遍历二叉树
void pre_print_ex(PTTree root);
void mid_print_ex(PTTree root);
void back_print_ex(PTTree root);

// 求树高
int tree_height(PTTree root);

// 求树宽
int tree_width(PTTree root);

// ing 求树最远距离
int tree_max_range(PTTree root, int& imaxdistance);

// 层次遍历
void tree_level_print(PTTree root);

// ing 平衡二叉树

// ing 红黑树B B+ B-