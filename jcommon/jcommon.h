// jcommon.h: 公共对象和方法
//
#pragma once
#include <stdio.h>

#include <time.h>
#include <iostream>
using namespace std;

typedef int ElementData;

/*
	公共函数
*/
void swap(ElementData &a, ElementData &b);

/*
	ADT 数组
*/
#define NUM_MAX_LEN 10
typedef struct tagTArray
{
	int ilen;
	ElementData arr[NUM_MAX_LEN];

	tagTArray()
	{
		clear();
	}

	bool clear()
	{
		ilen = 0;
		memset(arr, 0, NUM_MAX_LEN);
		return true;
	}

	bool add(ElementData ival)
	{
		if (ilen > NUM_MAX_LEN)
		{
			return false;
		}

		arr[ilen] = ival;
		++ilen;

		return true;
	}

	void remove(ElementData ival)
	{
		arr[ilen] = ival;
		--ilen;
	}
	
}TArray,*PTArray;

void print_array(ElementData *arr);	


/*
	ADT 链表
*/
typedef struct tagTList
{
	ElementData data;
	struct tagTList* next;

	tagTList()
	{
		clear();
	}

	bool clear()
	{
		data = -1;
		next = NULL;

		return true;
	}


}TList, *PTList;


/*
	ADT 树节点
*/
typedef struct tagTTree
{
	ElementData data;
	struct tagTTree* ltree;
	struct tagTTree* rtree;

	tagTTree()
	{
		clear();
	}

	bool clear()
	{
		ltree = NULL;
		rtree = NULL;
		data = -1;
		return true;
	}

}TTree, *PTTree;
