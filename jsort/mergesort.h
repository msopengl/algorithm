// mergesort.h: �鲢����
// other: https://blog.csdn.net/u010551600/article/details/80904697 
// ˼·��
#pragma once

/*
	�ϲ�[left,mid),[mid,right)������������
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
	�鲢����
	�㷨����
	����arry����������
	����left��������ʼ����
	����right������ĩ������
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