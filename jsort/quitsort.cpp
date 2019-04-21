// QSort.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include <time.h>
#include <iostream>
using namespace std;

#define NUM_MAX_LEN 10
typedef struct tagTQuitArray
{
	int nNum;
	int arr[NUM_MAX_LEN];

	tagTQuitArray()
	{
		Clear();
	}

	void Clear()
	{
		nNum = 0;
		memset( arr, 0, NUM_MAX_LEN);
	}

	bool Add(int nValue)
	{
		if ( nNum > NUM_MAX_LEN )
		{
			return false;
		}

		arr[nNum] = nValue;
		++nNum;

		return true;
	}

	//void Remove(int nValue)
	//{
	//	arr[nNum] = nValue;
	//	--nNum;
	//}

	
}TQuitArray,*PTQuitArray;

TQuitArray tQuitArry;

void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

void PrintArray(int *arr)
{
	for( int i=0; i < NUM_MAX_LEN; i++ )
		cout << arr[i] << " ";
	cout << endl;
}

int Partition(int *arr, int beg, int end)
{
	int sentinel = arr[end];
	int i = beg-1;
	for(int j=beg; j<=end-1; ++j)
	{
		if(arr[j] <= sentinel)
		{
			i++;
			swap(arr[i], arr[j]);
		}
	}
	swap(arr[i+1], arr[end]);

	cout << "排序过程:";
	PrintArray(arr);
	cout <<std::endl;
	return i+1;
}

void QuickSort(int *arr, int beg, int end)
{
	if(beg < end)
	{
		int pivot = Partition(arr, beg, end);
		QuickSort(arr, beg, pivot-1);
		QuickSort(arr, pivot+1, end);
	}
}

int main()
{
	srand((unsigned)time(NULL)); /*随机种子*/

	cout << "Input the num of the elements:\n";
	for ( int nIndex = 0; nIndex < NUM_MAX_LEN; ++nIndex )
	{
		int nNum;
		nNum = rand()%( NUM_MAX_LEN - 1 ) + 1;
		tQuitArry.Add(nNum);
		cout<<nNum<<' ';
	}	
	cout <<std::endl;

	QuickSort( tQuitArry.arr, 0, NUM_MAX_LEN - 1 );  //排序第几到第几个元素

	cout << "最后结果:";
	PrintArray(tQuitArry.arr);

	int nSize = tQuitArry.nNum;

	tQuitArry.Clear();

	nSize = tQuitArry.nNum;
	system("pause");
	return 0;
}