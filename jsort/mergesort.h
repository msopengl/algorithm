// mergesort.h: 堆排序
// ing https://www.cnblogs.com/daimingming/p/3219744.html
// 思路：
#pragma once
void mergesort(int *arr, int n)
{
	for(int i = 0; i < n; i++)
	{
		int min = i;
		int val = arr[i];
		for(int j = i+1; j < n; j++)
		{
			if(val > arr[j])
			{
				min = j;
				val = arr[j];
			}
		}
		swap(arr[i], arr[min]);
		cout<<"归并排序->排序过程:step=>"<<i+1<<"=> ";
		print_array(arr);
		cout<<std::endl;
	}
}