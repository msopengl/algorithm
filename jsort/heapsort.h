// heapsort.h: ������
// other: https://www.cnblogs.com/daimingming/p/3219744.html https://www.cnblogs.com/leoin2012/p/3908311.html
// https://www.jianshu.com/p/2ef78a7c79fa
// ˼·��
#pragma once

void heapbuild(int arr[], int i, int n)
{
    int j = 2*i + 1; //�ҵ���ǰ��������
    int temp = arr[i]; //�ѵ�ǰ����������temp����������ᷢ���������������
    while(j < n) //�жϱ������������ڻ���ڸý�㶼��������Խ��
    {
        if(j+1 < n && arr[j] < arr[j+1])//�ж���������һ���������ж��ǲ������һ�����, �ڶ����ж��������ҳ����ӽ���������������㽻��
		{
            ++j; //�������Ĵ���ô�����ı�ɺ���ĺ���
		}
        if(temp > arr[j]) //��Ϊ������MaxSort�����������㱾��ʹ����ж�ֱ������ѭ��
		{
            break;
		}
        else
        {
            arr[i] = arr[j]; //�жϹ��̣������ĺ��ӽ�������������㡣�����õݹ�˼���ҳ��ӽڵ���ӽڵ�
            i = j;
            j = 2*i+1;
         }
    }
    arr[i] = temp; //i�Ѿ���Ϊ�˺��ӽ����±꣬��ֵtemp��Ҳ����ԭ��������ֵ����ɽ���
}
 
//������
void heapsort(int arr[], int n)
{
	int step = 1;
    for(int i = n/2-1; i >= 0; i--) //���һ�����ĸ���㿪ʼ����ǰ������
	{
        heapbuild(arr, i, n);
		cout<<"������->�������:step=>"<<step<<"=> ";
		print_array(arr);
		cout<<std::endl;
		++step;
	}


	for(int i = n-1; i >= 1; i--)
    {
        swap(arr[i], arr[0]);
        heapbuild(arr, 0, i);
		cout<<"������->�������:step=>"<<step<<"=> ";
		++step;
		print_array(arr);
		cout<<std::endl;
	}
}