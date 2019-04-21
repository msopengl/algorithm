#include "stdafx.h"

void rand_data(TArray& t_arry)
{
	cout<<"随机: ";
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
	//srand((unsigned)time(NULL)); /*随机种子*/

	cout<<"input the num of the elements:\n";
	TArray t_arry;

	// 树
	rand_data(t_arry);
	PTTree root = createtree(t_arry.arr, 0, NUM_MAX_LEN);
	cout<<"前序排序->结果: ";
	pre_print(root, 0, NUM_MAX_LEN);
	cout<<endl;
	cout<<"中序排序->结果: ";
	mid_print(root, 0, NUM_MAX_LEN);
	cout<<endl;
	cout<<"后序排序->结果: ";
	back_print(root, 0, NUM_MAX_LEN);

	cout<<endl<<std::endl;

	int p;
	cin>>p;
	return 0;
}