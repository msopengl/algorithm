#include "stdafx.h"

void rand_data(TArray& t_array)
{
	cout<<"随机: ";
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
	//srand((unsigned)time(NULL)); /*随机种子*/

	std::cout<<"input the num of the elements:\n";
	TArray t_array;

	// 普通二叉树
	rand_data(t_array);
	PTTree root = createtree(t_array.arr, 0, NUM_MAX_LEN);

	// 二叉搜索树
	//PTTree root = NULL;
	//for(int idx = 0; idx < NUM_MAX_LEN; idx++)
	//{
	//	root = bst_createtree(root, t_array.arr[idx]);
	//}

	std::cout<<"前序遍历->结果: ";
	pre_print(root);
	std::cout<<endl;
	std::cout<<"中序遍历->结果: ";
	mid_print(root);
	std::cout<<endl;
	std::cout<<"后序遍历->结果: ";
	back_print(root);

	// 非递归遍历(用栈)
	std::cout<<endl;
	root = createtree(t_array.arr, 0, NUM_MAX_LEN);

	// 二叉搜索树
	//root = NULL;
	//for(int idx = 0; idx < NUM_MAX_LEN; idx++)
	//{
	//	root = bst_createtree(root, t_array.arr[idx]);
	//}

	std::cout<<"非递归前序遍历->结果: ";
	pre_print_ex(root);
	std::cout<<endl;
	std::cout<<"非递归中序遍历->结果: ";
	mid_print_ex(root);
	std::cout<<endl;
	std::cout<<"非递归后序遍历->结果: ";
	back_print_ex(root);

	std::cout<<std::endl<<std::endl;
	std::cout<<"递归顺序: ";
	int height = tree_height(root);
	std::cout<<"\n树的高度: "<<height;
	std::cout<<std::endl;
	int width = tree_width(root);
	std::cout<<"\n树的宽度: "<<width;
	std::cout<<std::endl;

	int imaxdistance = 0;
	tree_max_range(root, imaxdistance);
	std::cout<<"\n树的节点最大距离: "<<imaxdistance;
	std::cout<<std::endl<<std::endl;

	// 层次遍历(用队列)
	std::cout<<"层次遍历->结果: ";
	tree_level_print(root);
	std::cout<<std::endl<<std::endl;

	int p;
	std::cin>>p;
	return 0;
}