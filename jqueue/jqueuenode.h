#pragma once
// other: https://www.cnblogs.com/skywang12345/p/3562279.html
// ing
#define MAX_LEN 20
template<class T> class CQueueNode
{
public:
	CQueueNode();
	~CQueueNode();

private:
	T* arr;
	int ilen;

public:
	void init();
	bool push(T t);
	T front();
	T pop();
	int size();
	bool empty();
	void print_data();

};

template<class T>
CQueueNode<T>::CQueueNode()
{
	this->arr = new T[MAX_LEN];
	memset(this->arr, -1, sizeof(T)*MAX_LEN);
	this->ilen = 0;
}

template<class T>
CQueueNode<T>::~CQueueNode()
{
	if(NULL != this->arr)
	{
		delete[] this->arr;
	}
}

template<class T>
void CQueueNode<T>::init()
{
	for(int i = 1; i <= 10; i++)
	{
		this->push(i);
	}
}

template<class T>
bool CQueueNode<T>::push(T t)
{
	this->arr[this->ilen++] = t;
	return true;
}

template<class T>
T CQueueNode<T>::front()
{
	if(this->ilen == 0)
	{
		return NULL;
	}
	return this->arr[0];
}

template<class T>
T CQueueNode<T>::pop()
{
	if(this->ilen == 0)
	{
		return NULL;
	}

	int i = 0;
	while(i++ < this->ilen)
	{
		this->arr[i-1] = this->arr[i];
	}
	--this->ilen;
}

template<class T>
int CQueueNode<T>::size()
{
	return this->ilen;
}

template<class T>
bool CQueueNode<T>::empty()
{
	return this->ilen == 0;
}

template<class T>
void CQueueNode<T>::print_data()
{
	std::cout<<"´òÓ¡: ";
	int i = 0;
	while(i++ < this->ilen)
	{
		std::cout<<this->arr[i-1]<<' ';
	}
	std::cout<<std::endl;
}

