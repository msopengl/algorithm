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
	cout<<"���: ";
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
	srand((unsigned)time(NULL)); /*�������*/

	cout<<"input the num of the elements:\n";
	TArray t_array;

	//// ��������
	//rand_data(t_array);
	//quicksort(t_array.arr, 0, NUM_MAX_LEN-1);  //����ڼ����ڼ���Ԫ��
	//cout<<"��������->���: ";
	//print_array(t_array.arr);
	//cout<<endl<<std::endl;

	//// ð������
	//t_array.clear();
	//rand_data(t_array);
	//bubblesort(t_array.arr);
	//cout<<"ð������->���: ";
	//print_array(t_array.arr);
	//cout<<endl<<std::endl;

	//// ֱ�Ӳ�������
	//t_array.clear();
	//rand_data(t_array);
	//insertsort(t_array.arr, NUM_MAX_LEN);
	//cout<<"ֱ�Ӳ�������->���: ";
	//print_array(t_array.arr);
	//cout<<endl<<std::endl;

	//// ֱ��ѡ������
	//t_array.clear();
	//rand_data(t_array);
	//selectsort(t_array.arr, NUM_MAX_LEN);
	//cout<<"ֱ��ѡ������->���: ";
	//print_array(t_array.arr);
	//cout<<endl<<std::endl;

	// ϣ������ ing
	//t_array.clear();
	rand_data(t_array);
	shellsort(t_array.arr, NUM_MAX_LEN);
	//cout<<"ϣ������->���: ";
	print_array(t_array.arr);
	cout<<endl<<std::endl;

	// ������ ing
	//t_array.clear();
	//rand_data(t_array);
	//heapsort(t_array.arr, NUM_MAX_LEN);
	//heapsort(t_array.arr, NUM_MAX_LEN);
	heapsort(t_array.arr, NUM_MAX_LEN);
	cout<<"������->���: ";
	print_array(t_array.arr);
	cout<<endl<<std::endl;

	//// �鲢���� ing
	//t_array.clear();
	//rand_data(t_array);
	//mergesort(t_array.arr, NUM_MAX_LEN);
	//cout<<"�鲢����->���: ";
	//print_array(t_array.arr);
	//cout<<endl<<std::endl;

	int p;
	cin>>p;
	return 0;
}

