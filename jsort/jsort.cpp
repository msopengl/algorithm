// jsort.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include "bubblesort.h"
#include "insertsort.h"
#include "selectsort.h"
#include "shellsort.h"
#include "heapsort.h"
#include "mergesort.h"

void rand_data(TArray& t_arry)
{
	cout<<"随机: ";
	int i = 1;
	if(i==0)
	{
		for ( int idx = 0; idx < NUM_MAX_LEN; ++idx )
		{
			int inum;
			inum = rand()%( NUM_MAX_LEN - 1 ) + 1;
			t_arry.add(inum);
			cout<<inum<<' ';
		}
	}
	else
	{
		for (int idx = 0; idx < NUM_MAX_LEN; ++idx)
		{
			int inum;
			inum = NUM_MAX_LEN-idx;
			t_arry.add(inum);
			cout<<inum<<' ';
		}	
	}
	cout<<std::endl;
}

int main()
{
	srand((unsigned)time(NULL)); /*随机种子*/

	cout<<"input the num of the elements:\n";
	TArray t_array;

	//// 快速排序
	//rand_data(t_array);
	//quicksort(t_array.arr, 0, NUM_MAX_LEN-1);  //排序第几到第几个元素
	//cout<<"快速排序->结果: ";
	//print_array(t_array.arr);
	//cout<<endl<<std::endl;

	//// 冒泡排序
	//t_array.clear();
	//rand_data(t_array);
	//bubblesort(t_array.arr);
	//cout<<"冒泡排序->结果: ";
	//print_array(t_array.arr);
	//cout<<endl<<std::endl;

	//// 直接插入排序
	//t_array.clear();
	//rand_data(t_array);
	//insertsort(t_array.arr, NUM_MAX_LEN);
	//cout<<"直接插入排序->结果: ";
	//print_array(t_array.arr);
	//cout<<endl<<std::endl;

	//// 直接选择排序
	//t_array.clear();
	//rand_data(t_array);
	//selectsort(t_array.arr, NUM_MAX_LEN);
	//cout<<"直接选择排序->结果: ";
	//print_array(t_array.arr);
	//cout<<endl<<std::endl;

	// 希尔排序 ing
	//t_array.clear();
	rand_data(t_array);
	shellsort(t_array.arr, NUM_MAX_LEN);
	//cout<<"希尔排序->结果: ";
	print_array(t_array.arr);
	cout<<endl<<std::endl;

	// 堆排序 ing
	//t_array.clear();
	//rand_data(t_array);
	//heapsort(t_array.arr, NUM_MAX_LEN);
	//heapsort(t_array.arr, NUM_MAX_LEN);
	heapsort(t_array.arr, NUM_MAX_LEN);
	cout<<"堆排序->结果: ";
	print_array(t_array.arr);
	cout<<endl<<std::endl;

	//// 归并排序 ing
	//t_array.clear();
	//rand_data(t_array);
	//mergesort(t_array.arr, NUM_MAX_LEN);
	//cout<<"归并排序->结果: ";
	//print_array(t_array.arr);
	//cout<<endl<<std::endl;

	int p;
	cin>>p;
	return 0;
}

