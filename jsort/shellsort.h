// shellsort.h: Ï£¶ûÅÅĞò
// other: https://www.cnblogs.com/daimingming/p/3219744.html https://www.cnblogs.com/yonghao/p/5151641.html
// Ë¼Â·£º
#pragma once
// +2
void shellsort(int *arr, int n)
{
	int part = n/2;
	while(part>=1)
	{
		for(int idx=part; idx < n; idx++)
		{
			for(int jdx=idx-part; jdx >=0; jdx-=part)
			{
				if(arr[jdx] > arr[jdx+part])
				{
					swap(arr[jdx], arr[jdx+part]);
				}
			}
		}
		part = part/2;
	}
}