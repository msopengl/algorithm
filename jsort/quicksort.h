// quicksort.h: 快速排序
//
#pragma once
int i_quick_pos = 0;
int partition(int* arr, int beg, int end)
{
	++i_quick_pos;
	int sentinel = arr[end];
	int i = beg-1;
	for(int j = beg; j <= end-1; ++j)
	{
		if(arr[j] <= sentinel)
		{
			i++;
			swap(arr[i], arr[j]);
		}
	}
	swap(arr[i+1], arr[end]);

	cout<<"快速排序->排序过程:step=>"<<i_quick_pos<<"=> ";
	print_array(arr);
	cout<<std::endl;
	return i+1;
}

void quicksort(int *arr, int beg, int end)
{
	if(beg <= end)
	{
		int pivot = partition(arr, beg, end);
		quicksort(arr, beg, pivot-1);
		quicksort(arr, pivot+1, end);
	}
}
