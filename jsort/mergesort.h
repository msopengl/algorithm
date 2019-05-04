// mergesort.h: 归并排序
// other: https://blog.csdn.net/u010551600/article/details/80904697 
// 思路：
#pragma once

/*
	合并[left,mid),[mid,right)两个有序数组
*/
void merge(int* arr, int left, int mid, int right)
{
    int* tmp = new int[right - left];
    int t = 0;
    int i = left;
    int j = mid;
    while (i < mid || j < right)
    {
        if (i>= mid)
        {
            tmp[t++] = arr[j++];
        }
        else if (j>= right)
        {
            tmp[t++] = arr[i++];
        }
        else
        {
            if (arr[i] < arr[j])
            {
                tmp[t++] = arr[i++];
            }
            else
            {
                tmp[t++] = arr[j++];
            }
        }
    }
    t = 0;
    for (int i = left; i < right; i++)
    {
        arr[i] = tmp[t++];
    }
    delete[] tmp;
}

/*
	归并排序
	算法主体
	参数arry，数据数组
	参数left，数组起始索引
	参数right，数组末端索引
*/
void mergesort(int* arr, int left, int right)
{
    if (left + 1 < right)
    {
        int mid = (left + right)/2;
        mergesort(arr, left, mid);
        mergesort(arr, mid, right);
        merge(arr, left, mid, right);
    }
}