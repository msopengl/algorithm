// shellsort.h: ϣ������
// other: https://www.cnblogs.com/daimingming/p/3219744.html https://www.cnblogs.com/yonghao/p/5151641.html
// ˼·��
#pragma once
void shellsort(int *arr, int n)
{
	int count = 1;
    int index = n/2;
    while(index>=1)
	{
        for(int i = index; i < n;i++)
		{
            for(int j = i-index;j >= 0;j -= index)
			{
                if(arr[j] > arr[j+index])
				{
					swap(arr[j], arr[j+index]);
                }
            }
        }
        index = index/2;
		cout<<"ϣ������->�������:step=>"<<count<<"=> ";
		print_array(arr);
		cout<<std::endl;
		++count;
    }
}