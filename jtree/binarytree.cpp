// binarytree.h: Ã°ÅİÅÅĞò
//
#include "stdafx.h"
PTTree createtree(int *arr, int idx, int n)
{
	if(idx >= n)
	{
		return NULL;
	}

	PTTree root = new TTree;
	root->data = arr[idx];
	root->ltree = createtree(arr, idx*2+ 1, n);
	root->rtree = createtree(arr, idx*2+ 2, n);
	return root;
}

void pre_print(PTTree root, int idx, int n)
{
	++idx;
	if(idx > n || NULL == root)
	{
		return;
	}
	std::cout<<root->data<<' ';
	pre_print(root->ltree, idx, n);
	pre_print(root->rtree, idx, n);
}

void mid_print(PTTree root, int idx, int n)
{
	++idx;
	if(idx > n || NULL == root)
	{
		return;
	}

	pre_print(root->ltree, idx, n);
	std::cout<<root->data<<' ';
	pre_print(root->rtree, idx, n);
}

void back_print(PTTree root, int idx, int n)
{
	++idx;
	if(idx > n || NULL == root)
	{
		return;
	}

	pre_print(root->ltree, idx, n);
	pre_print(root->rtree, idx, n);
	std::cout<<root->data<<' ';
}

void pre_print_ex(PTTree root, int idx, int n)
{

}

void mid_print_ex(PTTree root, int idx, int n)
{

}

void back_print_ex(PTTree root, int idx, int n)
{

}