// selectsort.h: 直接选择排序
// https://www.jb51.net/article/129888.htm
// 思路：找到无序中最小的元素, 和第一个交换, 依次遍历
#pragma once
void selectsort(int* arr, int n)
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
		cout<<"直接选择排序->排序过程:step=>"<<i+1<<"=> ";
		print_array(arr);
		cout<<std::endl;
	}
}