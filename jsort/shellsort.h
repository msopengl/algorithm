// shellsort.h: ¶ÑÅÅÐò
// ing https://www.cnblogs.com/daimingming/p/3219744.html
// Ë¼Â·£º
#pragma once
void shellsort(int *arr, int n)
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
		cout<<"Ï£¶ûÅÅÐò->ÅÅÐò¹ý³Ì:step=>"<<i+1<<"=> ";
		print_array(arr);
		cout<<std::endl;
	}
}