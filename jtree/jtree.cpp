#include "stdafx.h"

void rand_data(TArray& t_array)
{
	cout<<"���: ";
/*	for ( int idx = 0; idx < NUM_MAX_LEN; ++idx )
	{
		int inum;
		inum = rand()%( NUM_MAX_LEN - 1 ) + 1;
		t_array.add(inum);
		cout<<inum<<' ';
	}*/	
	for (int idx = 0; idx < NUM_MAX_LEN; ++idx)
	{
		int inum;
		//inum = NUM_MAX_LEN-idx;
		inum = idx+1;
		t_array.add(inum);
		cout<<inum<<' ';
	}	
	cout<<std::endl;
}

int main()
{
	//srand((unsigned)time(NULL)); /*�������*/

	std::cout<<"input the num of the elements:\n";
	TArray t_array;

	// ��ͨ������
	rand_data(t_array);
	PTTree root = createtree(t_array.arr, 0, NUM_MAX_LEN);

	// ����������
	//PTTree root = NULL;
	//for(int idx = 0; idx < NUM_MAX_LEN; idx++)
	//{
	//	root = bst_createtree(root, t_array.arr[idx]);
	//}

	std::cout<<"ǰ�����->���: ";
	pre_print(root);
	std::cout<<endl;
	std::cout<<"�������->���: ";
	mid_print(root);
	std::cout<<endl;
	std::cout<<"�������->���: ";
	back_print(root);

	// �ǵݹ����(��ջ)
	std::cout<<endl;
	root = createtree(t_array.arr, 0, NUM_MAX_LEN);

	// ����������
	//root = NULL;
	//for(int idx = 0; idx < NUM_MAX_LEN; idx++)
	//{
	//	root = bst_createtree(root, t_array.arr[idx]);
	//}

	std::cout<<"�ǵݹ�ǰ�����->���: ";
	pre_print_ex(root);
	std::cout<<endl;
	std::cout<<"�ǵݹ��������->���: ";
	mid_print_ex(root);
	std::cout<<endl;
	std::cout<<"�ǵݹ�������->���: ";
	back_print_ex(root);

	std::cout<<std::endl<<std::endl;
	std::cout<<"�ݹ�˳��: ";
	int height = tree_height(root);
	std::cout<<"\n���ĸ߶�: "<<height;
	std::cout<<std::endl;
	int width = tree_width(root);
	std::cout<<"\n���Ŀ��: "<<width;
	std::cout<<std::endl;

	int imaxdistance = 0;
	tree_max_range(root, imaxdistance);
	std::cout<<"\n���Ľڵ�������: "<<imaxdistance;
	std::cout<<std::endl<<std::endl;

	// ��α���(�ö���)
	std::cout<<"��α���->���: ";
	tree_level_print(root);
	std::cout<<std::endl<<std::endl;

	int p;
	std::cin>>p;
	return 0;
}