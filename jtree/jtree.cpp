#include "stdafx.h"

void rand_data(TArray& t_arry)
{
	cout<<"���: ";
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
		//inum = NUM_MAX_LEN-idx;
		inum = idx+1;
		t_arry.add(inum);
		cout<<inum<<' ';
	}	
	cout<<std::endl;
}

int main()
{
	//srand((unsigned)time(NULL)); /*�������*/

	cout<<"input the num of the elements:\n";
	TArray t_arry;

	// ��
	rand_data(t_arry);
	PTTree root = createtree(t_arry.arr, 0, NUM_MAX_LEN);
	cout<<"ǰ������->���: ";
	pre_print(root, 0, NUM_MAX_LEN);
	cout<<endl;
	cout<<"��������->���: ";
	mid_print(root, 0, NUM_MAX_LEN);
	cout<<endl;
	cout<<"��������->���: ";
	back_print(root, 0, NUM_MAX_LEN);

	cout<<endl<<std::endl;

	int p;
	cin>>p;
	return 0;
}