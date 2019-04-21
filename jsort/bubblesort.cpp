// bubblesort.h: √∞≈›≈≈–Ú
//
#include "stdafx.h"
int i_bubble_pos = 0;
void bubblesort(int *arr)
{
	for(int i = 0; i < NUM_MAX_LEN-1; i++)
	{
		++i_bubble_pos;
		for(int j = 0; j < NUM_MAX_LEN-1-i; j++)
		{
			if(arr[j] > arr[j+1])
			{
				swap(arr[j+1], arr[j]);
			}
		}
		cout<<"√∞≈›≈≈–Ú->≈≈–Úπ˝≥Ã:step=>"<<i_bubble_pos<<"=> ";
		print_array(arr);
		cout<<std::endl;
	}
}
