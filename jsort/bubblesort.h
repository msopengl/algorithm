// bubblesort.h: √∞≈›≈≈–Ú
//
#pragma once

void bubblesort(int* arr)
{
	for(int i = 0; i < NUM_MAX_LEN-1; i++)
	{
		for(int j = 0; j < NUM_MAX_LEN-1-i; j++)
		{
			if(arr[j] > arr[j+1])
			{
				swap(arr[j+1], arr[j]);
			}
		}
		cout<<"√∞≈›≈≈–Ú->≈≈–Úπ˝≥Ã:step=>"<<i+1<<"=> ";
		print_array(arr);
		cout<<std::endl;
	}
}