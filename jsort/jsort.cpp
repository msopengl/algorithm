// jsort.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"

void rand_data(TArray& t_arry)
{
	cout<<"���:";
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
	srand((unsigned)time(NULL)); /*�������*/

	cout<<"input the num of the elements:\n";
	TArray t_arry;

	// ��������
	rand_data(t_arry);
	quicksort(t_arry.arr, 0, NUM_MAX_LEN - 1);  //����ڼ����ڼ���Ԫ��
	cout<<"��������->���:";
	print_array(t_arry.arr);
	cout<<endl<<std::endl;

	// ð������
	t_arry.clear();
	rand_data(t_arry);
	bubblesort(t_arry.arr);
	cout<<"ð������->���:";
	print_array(t_arry.arr);
	cout<<endl<<std::endl;

	int p;
	cin>>p;
	return 0;
}

