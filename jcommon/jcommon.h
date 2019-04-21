// jcommon.h: 公共对象和方法
//
#pragma once
#include <stdio.h>

#include <time.h>
#include <iostream>
using namespace std;

/*
	ADT 数组
*/
#define NUM_MAX_LEN 10
typedef struct tagTArray
{
	int ilen;
	int arr[NUM_MAX_LEN];

	tagTArray()
	{
		clear();
	}

	void clear()
	{
		ilen = 0;
		memset(arr, 0, NUM_MAX_LEN);
	}

	bool add(int ival)
	{
		if (ilen > NUM_MAX_LEN)
		{
			return false;
		}

		arr[ilen] = ival;
		++ilen;

		return true;
	}

	void remove(int ival)
	{
		arr[ilen] = ival;
		--ilen;
	}
	
}TArray,*PTArray;

typedef struct tagTTree
{
	int data;
	struct tagTTree* ltree;
	struct tagTTree* rtree;

	tagTTree()
	{
		clear();
	}

	void clear()
	{
		ltree = NULL;
		rtree = NULL;
		data = -1;
	}

}TTree, *PTTree;

void swap(int &a, int &b);
void print_array(int *arr);

/*
	ADT 树节点
*/