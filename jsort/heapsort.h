// heapsort.h: 堆排序
// ing https://www.cnblogs.com/daimingming/p/3219744.html https://www.cnblogs.com/leoin2012/p/3908311.html
// https://www.jianshu.com/p/2ef78a7c79fa
// 思路：
#pragma once

//void heapbuild(int *arr, int root, int n)
//{
//	for(int idx = 0; idx < n; idx*2)
//	{
//
//
//	}
//}
//
//void heapsort(int *arr, int n)
//{
//	for(int idx = n/2-1; idx >= 0; idx--)
//	{
//		heapbuild(arr, idx, n);
//	}
//	//swap(arr[i], arr[min]);
//	//cout<<"堆排序->排序过程:step=>"<<i+1<<"=> ";
//	//print_array(arr);
//	//cout<<std::endl;
//}

// 堆排序的核心是建堆,传入参数为数组，根节点位置，数组长度
//void heapbuild(int a[], int root, int length)
//{
//    int lchild = root * 2 + 1; // 根节点的左子结点下标
//    if (lchild < length) // 左子结点下标不能超出数组的长度
//    {
//        int flag = lchild; // flag保存左右节点中最大值的下标
//        int rchild = lchild + 1; // 根节点的右子结点下标
//        if (rchild < length) // 右子结点下标不能超出数组的长度(如果有的话)
//        {
//            if (a[rchild] > a[flag]) // 找出左右子结点中的最大值
//            {
//                flag = rchild;
//            }
//        }
//        if (a[root] < a[flag])
//        {
//            // 交换父结点和比父结点大的最大子节点
//            swap(a[root], a[flag]);
//            // 从此次最大子节点的那个位置开始递归建堆
//            heapbuild(a, flag, length);
//        }
//    }
//}
//
//void heapsort(int a[], int len)
//{
//    for (int i = len/2-1; i >= 0; --i)//从最后一个非叶子节点的父结点开始建堆
//    {
//        heapbuild(a, i, len);
//    }
//
//    for (int j = len - 1; j > 0; --j)//j表示数组此时的长度，因为len长度已经建过了，从len-1开始
//    {
//        swap(a[0], a[j]);//交换首尾元素,将最大值交换到数组的最后位置保存
//        heapbuild(a, 0, j);//去除最后位置的元素重新建堆，此处j表示数组的长度，最后一个位置下标变为len-2
//    }
//}

//void PrintArray(int data[], int size) // 输出当前堆的排序状况
//{for (int i=1; i<=size; ++i)  cout <<data[i]<<"  ";  cout<<endl;}
//
//void MaxHeapify(int *a, int i, int size)
//{
//	int lt = 2*i, rt = 2*i+1;
//	int largest;
//	if(lt <= size && a[lt] > a[i])
//		largest = lt;
//	else
//		largest = i;
//	if(rt <= size && a[rt] > a[largest])
//		largest = rt;
//	if(largest != i)
//	{
//		int temp = a[i];
//		a[i] = a[largest];
//		a[largest] = temp;
//		MaxHeapify(a, largest, size);
//	}
//}
//// 建堆:自底而上地调用MaxHeapify来将一个数组a[1..size]变成一个最大堆
//void BuildMaxHeap(int *a, int size)
//{
//	for(int i=size/2; i>=0; --i)
//		MaxHeapify(a, i, size);
//}
//// 堆排序：初始调用BuildMaxHeap将a[1..size]变成最大堆
//// 因为数组最大元素在a[1]，则可以通过将a[1]与a[size]互换达到正确位置
//// 现在新的根元素破坏了最大堆的性质，所以调用MaxHeapify调整，
//// 使a[1..size-1]成为最大堆，a[1]又是a[1..size-1]中的最大元素，
//// 将a[1]与a[size-1]互换达到正确位置。
//// 反复调用Heapify，使整个数组成从小到大排序。
//// 注意： 交换只是破坏了以a[1]为根的二叉树最大堆性质，它的左右子二叉树还是具备最大堆性质。
////这也是为何在BuildMaxHeap时需要遍历size/2到1的结点才能构成最大堆，而这里只需要堆化a[1]即可。
//void HeapSort(int *a, int size)
//{
//	BuildMaxHeap(a, size);
//	PrintArray(a, size);
//	int len = size;
//	for(int i=size; i>=2; --i)
//	{
//		int temp = a[1];
//		a[1] = a[i];
//		a[i] = temp;
//		len--;
//		MaxHeapify(a, 1, len);
//		cout << "中间过程:";
//		PrintArray(a, size);
//	}
//}

void heapbuild(int a[], int i, int n)
{
    int j = 2*i+1; //找到当前结点的左孩子
    int temp = a[i]; //把当前结点的数赋给temp变量，后面会发现这个变量很有用
    while(j < n) //判断必须条件，大于或等于该结点都属于数组越界
    {
        if(j+1 < n && a[j] < a[j+1])//判断条件，第一个条件是判断是不是最后一个结点, 第二个判断条件是找出孩子结点最大的数方便与结点交换
		{
            ++j; //如果后面的大，那么交换的变成后面的孩子
		}
        if(temp > a[j]) //因为我们是MaxSort所以如果父结点本身就大不用判断直接跳出循环
		{
            break;
		}
        else
        {
            a[i] = a[j]; //判断过程，把最大的孩子结点的数赋给父结点。并利用递归思想找出子节点的子节点
            i = j;
            j = 2*i+1;
         }
    }
    a[i] = temp; //i已经成为了孩子结点的下标，赋值temp，也就是原本父结点的值，达成交换
}
 
//堆排序
void heapsort(int a[], int n)
{
    for(int i= n/2-1;i>=0;i--) //最后一个结点的父结点开始“向前遍历”
	{
        heapbuild(a,i,n);
	}

	cout<<"堆排序->排序过程:step=>"<<1<<"=> ";
	print_array(a);
	cout<<std::endl;

	for(int i=n-1;i>=1;i--)
    {
        swap(a[i],a[0]);
        heapbuild(a,0,i);
    }
}