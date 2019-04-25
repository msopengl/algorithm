// insertsort.h: 直接插入排序
// other: http://www.cnblogs.com/XavierJian/p/5775321.html
#pragma once
void insertsort(int *arr, int n)
{
	for(int i = 1; i < n; i++)
	{
		int key = arr[i];
		for(int j = i-1; j >= 0; j--)
		{
			if(arr[j] > key)
			{
				swap(arr[j+1], arr[j]);
			}
		}
		cout<<"直接插入排序->排序过程:step=>"<<i<<"=> ";
		print_array(arr);
		cout<<std::endl;
	}
}