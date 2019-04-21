// jcommon.h: 公共对象和方法
//
#pragma once
#include <stdio.h>

#include <time.h>
#include <iostream>
using namespace std;

#define NUM_MAX_LEN 10
typedef struct tagTArray
{
	int inum;
	int arr[NUM_MAX_LEN];

	tagTArray()
	{
		clear();
	}

	void clear()
	{
		inum = 0;
		memset( arr, 0, NUM_MAX_LEN);
	}

	bool add(int ival)
	{
		if ( inum > NUM_MAX_LEN )
		{
			return false;
		}

		arr[inum] = ival;
		++inum;

		return true;
	}

	void remove(int ival)
	{
		arr[inum] = ival;
		--inum;
	}
	
}TArray,*PTArray;

void swap(int &a, int &b);
void print_array(int *arr);
