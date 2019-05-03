// heapsort.h: ������
// ing https://www.cnblogs.com/daimingming/p/3219744.html https://www.cnblogs.com/leoin2012/p/3908311.html
// https://www.jianshu.com/p/2ef78a7c79fa
// ˼·��
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
//	//cout<<"������->�������:step=>"<<i+1<<"=> ";
//	//print_array(arr);
//	//cout<<std::endl;
//}

// ������ĺ����ǽ���,�������Ϊ���飬���ڵ�λ�ã����鳤��
//void heapbuild(int a[], int root, int length)
//{
//    int lchild = root * 2 + 1; // ���ڵ�����ӽ���±�
//    if (lchild < length) // ���ӽ���±겻�ܳ�������ĳ���
//    {
//        int flag = lchild; // flag�������ҽڵ������ֵ���±�
//        int rchild = lchild + 1; // ���ڵ�����ӽ���±�
//        if (rchild < length) // ���ӽ���±겻�ܳ�������ĳ���(����еĻ�)
//        {
//            if (a[rchild] > a[flag]) // �ҳ������ӽ���е����ֵ
//            {
//                flag = rchild;
//            }
//        }
//        if (a[root] < a[flag])
//        {
//            // ���������ͱȸ����������ӽڵ�
//            swap(a[root], a[flag]);
//            // �Ӵ˴�����ӽڵ���Ǹ�λ�ÿ�ʼ�ݹ齨��
//            heapbuild(a, flag, length);
//        }
//    }
//}
//
//void heapsort(int a[], int len)
//{
//    for (int i = len/2-1; i >= 0; --i)//�����һ����Ҷ�ӽڵ�ĸ���㿪ʼ����
//    {
//        heapbuild(a, i, len);
//    }
//
//    for (int j = len - 1; j > 0; --j)//j��ʾ�����ʱ�ĳ��ȣ���Ϊlen�����Ѿ������ˣ���len-1��ʼ
//    {
//        swap(a[0], a[j]);//������βԪ��,�����ֵ��������������λ�ñ���
//        heapbuild(a, 0, j);//ȥ�����λ�õ�Ԫ�����½��ѣ��˴�j��ʾ����ĳ��ȣ����һ��λ���±��Ϊlen-2
//    }
//}

//void PrintArray(int data[], int size) // �����ǰ�ѵ�����״��
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
//// ����:�Ե׶��ϵص���MaxHeapify����һ������a[1..size]���һ������
//void BuildMaxHeap(int *a, int size)
//{
//	for(int i=size/2; i>=0; --i)
//		MaxHeapify(a, i, size);
//}
//// �����򣺳�ʼ����BuildMaxHeap��a[1..size]�������
//// ��Ϊ�������Ԫ����a[1]�������ͨ����a[1]��a[size]�����ﵽ��ȷλ��
//// �����µĸ�Ԫ���ƻ������ѵ����ʣ����Ե���MaxHeapify������
//// ʹa[1..size-1]��Ϊ���ѣ�a[1]����a[1..size-1]�е����Ԫ�أ�
//// ��a[1]��a[size-1]�����ﵽ��ȷλ�á�
//// ��������Heapify��ʹ��������ɴ�С��������
//// ע�⣺ ����ֻ���ƻ�����a[1]Ϊ���Ķ������������ʣ����������Ӷ��������Ǿ߱��������ʡ�
////��Ҳ��Ϊ����BuildMaxHeapʱ��Ҫ����size/2��1�Ľ����ܹ������ѣ�������ֻ��Ҫ�ѻ�a[1]���ɡ�
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
//		cout << "�м����:";
//		PrintArray(a, size);
//	}
//}

void heapbuild(int a[], int i, int n)
{
    int j = 2*i+1; //�ҵ���ǰ��������
    int temp = a[i]; //�ѵ�ǰ����������temp����������ᷢ���������������
    while(j < n) //�жϱ������������ڻ���ڸý�㶼��������Խ��
    {
        if(j+1 < n && a[j] < a[j+1])//�ж���������һ���������ж��ǲ������һ�����, �ڶ����ж��������ҳ����ӽ���������������㽻��
		{
            ++j; //�������Ĵ���ô�����ı�ɺ���ĺ���
		}
        if(temp > a[j]) //��Ϊ������MaxSort�����������㱾��ʹ����ж�ֱ������ѭ��
		{
            break;
		}
        else
        {
            a[i] = a[j]; //�жϹ��̣������ĺ��ӽ�������������㡣�����õݹ�˼���ҳ��ӽڵ���ӽڵ�
            i = j;
            j = 2*i+1;
         }
    }
    a[i] = temp; //i�Ѿ���Ϊ�˺��ӽ����±꣬��ֵtemp��Ҳ����ԭ��������ֵ����ɽ���
}
 
//������
void heapsort(int a[], int n)
{
    for(int i= n/2-1;i>=0;i--) //���һ�����ĸ���㿪ʼ����ǰ������
	{
        heapbuild(a,i,n);
	}

	cout<<"������->�������:step=>"<<1<<"=> ";
	print_array(a);
	cout<<std::endl;

	for(int i=n-1;i>=1;i--)
    {
        swap(a[i],a[0]);
        heapbuild(a,0,i);
    }
}