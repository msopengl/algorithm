#include "jcommon.h"

void swap(ElementData &a, ElementData &b)
{
	ElementData temp = a;
	a = b;
	b = temp;
}

void print_array(ElementData *arr)
{
	for(int i = 0; i < NUM_MAX_LEN; i++)
	{
		cout<<arr[i]<<" ";
	}
}