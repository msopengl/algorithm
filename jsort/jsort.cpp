// jsort.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"

void rand_data(TArray& t_arry)
{
	cout<<"随机:";
/*	for ( int idx = 0; idx < NUM_MAX_LEN; ++idx )
	{
		int inum;
		inum = rand()%( NUM_MAX_LEN - 1 ) + 1;
		t_arry.add(inum);
		cout<<inum<<' ';
	}*/	
	for (int idx = 0; idx < NUM_MAX_LEN; ++idx)
	{
		int inum;
		inum = NUM_MAX_LEN-idx;
		t_arry.add(inum);
		cout<<inum<<' ';
	}	
	cout<<std::endl;
}

int main()
{
	srand((unsigned)time(NULL)); /*随机种子*/

	cout<<"input the num of the elements:\n";
	TArray t_arry;

	// 快速排序
	rand_data(t_arry);
	quicksort(t_arry.arr, 0, NUM_MAX_LEN - 1);  //排序第几到第几个元素
	cout<<"快速排序->结果:";
	print_array(t_arry.arr);
	cout<<endl<<std::endl;

	// 冒泡排序
	t_arry.clear();
	rand_data(t_arry);
	bubblesort(t_arry.arr);
	cout<<"冒泡排序->结果:";
	print_array(t_arry.arr);
	cout<<endl<<std::endl;

	int p;
	cin>>p;
	return 0;
}

