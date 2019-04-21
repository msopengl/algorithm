#include "jcommon.h"

void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

void print_array(int *arr)
{
	for( int i = 0; i < NUM_MAX_LEN; i++ )
		cout<<arr[i]<<" ";
}