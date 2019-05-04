// radixsort.h: 基数排序
// other: https://www.jianshu.com/p/2432b431098d
// https://www.jianshu.com/p/a1bfc6114022
// 思路：
#pragma once

void radixsort(int arr[], int n)
{   
    int pos;  
    for(int i = 1;i <= 100; i = i*10)
    {
        int tmp[20][10] = {0}; //建立一个20行，10列的数组，每一列分别代表0~9位数，20行代表能存放的总个数
        for(int j = 0;j < n; j++)
        {
            pos = (arr[j]/i)%10;
            tmp[j][pos] = arr[j];
        }
        int k = 0;
        for(int p = 0; p < 10; p++)
		{
            for(int q = 0;q < n; q++)
            {
                if(tmp[q][p] != 0)
				{
                    arr[k++] = tmp[q][p];
				}
            }
		}
    }
}