// radixsort.h: ��������
// other: https://www.jianshu.com/p/2432b431098d
// https://www.jianshu.com/p/a1bfc6114022
// ˼·��
#pragma once

void radixsort(int arr[], int n)
{   
    int pos;  
    for(int i = 1;i <= 100; i = i*10)
    {
        int tmp[20][10] = {0}; //����һ��20�У�10�е����飬ÿһ�зֱ����0~9λ����20�д����ܴ�ŵ��ܸ���
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