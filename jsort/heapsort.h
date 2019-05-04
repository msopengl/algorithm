// heapsort.h: 堆排序
// other: https://www.cnblogs.com/daimingming/p/3219744.html https://www.cnblogs.com/leoin2012/p/3908311.html
// https://www.jianshu.com/p/2ef78a7c79fa
// 思路：
#pragma once

void heapbuild(int arr[], int i, int n)
{
    int j = 2*i + 1; //找到当前结点的左孩子
    int temp = arr[i]; //把当前结点的数赋给temp变量，后面会发现这个变量很有用
    while(j < n) //判断必须条件，大于或等于该结点都属于数组越界
    {
        if(j+1 < n && arr[j] < arr[j+1])//判断条件，第一个条件是判断是不是最后一个结点, 第二个判断条件是找出孩子结点最大的数方便与结点交换
		{
            ++j; //如果后面的大，那么交换的变成后面的孩子
		}
        if(temp > arr[j]) //因为我们是MaxSort所以如果父结点本身就大不用判断直接跳出循环
		{
            break;
		}
        else
        {
            arr[i] = arr[j]; //判断过程，把最大的孩子结点的数赋给父结点。并利用递归思想找出子节点的子节点
            i = j;
            j = 2*i+1;
         }
    }
    arr[i] = temp; //i已经成为了孩子结点的下标，赋值temp，也就是原本父结点的值，达成交换
}
 
//堆排序
void heapsort(int arr[], int n)
{
	int step = 1;
    for(int i = n/2-1; i >= 0; i--) //最后一个结点的父结点开始“向前遍历”
	{
        heapbuild(arr, i, n);
		cout<<"堆排序->排序过程:step=>"<<step<<"=> ";
		print_array(arr);
		cout<<std::endl;
		++step;
	}


	for(int i = n-1; i >= 1; i--)
    {
        swap(arr[i], arr[0]);
        heapbuild(arr, 0, i);
		cout<<"堆排序->排序过程:step=>"<<step<<"=> ";
		++step;
		print_array(arr);
		cout<<std::endl;
	}
}