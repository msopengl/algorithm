// selectsort.h: ֱ��ѡ������
// https://www.jb51.net/article/129888.htm
// ˼·���ҵ���������С��Ԫ��, �͵�һ������, ���α���
#pragma once
void selectsort(int* arr, int n)
{
	for(int i = 0; i < n; i++)
	{
		int min = i;
		int val = arr[i];
		for(int j = i+1; j < n; j++)
		{
			if(val > arr[j])
			{
				min = j;
				val = arr[j];
			}
		}
		swap(arr[i], arr[min]);
		cout<<"ֱ��ѡ������->�������:step=>"<<i+1<<"=> ";
		print_array(arr);
		cout<<std::endl;
	}
}