#pragma once
// other: 
// ing
#define MAX_LEN 20
template<class T> class CLinkQueueNode
{
public:
	CLinkQueueNode();
	~CLinkQueueNode();

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
CLinkQueueNode<T>::CLinkQueueNode()
{
	this->arr = new T[MAX_LEN];
	memset(this->arr, -1, sizeof(T)*MAX_LEN);
	this->ilen = 0;
}

template<class T>
CLinkQueueNode<T>::~CLinkQueueNode()
{
	if(NULL != this->arr)
	{
		delete[] this->arr;
	}
}

template<class T>
void CLinkQueueNode<T>::init()
{
	for(int i = 1; i <= 10; i++)
	{
		this->push(i);
	}
}

template<class T>
bool CLinkQueueNode<T>::push(T t)
{
	this->arr[this->ilen++] = t;
	return true;
}

template<class T>
T CLinkQueueNode<T>::front()
{
	if(this->ilen == 0)
	{
		return NULL;
	}
	return this->arr[0];
}

template<class T>
T CLinkQueueNode<T>::pop()
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
int CLinkQueueNode<T>::size()
{
	return this->ilen;
}

template<class T>
bool CLinkQueueNode<T>::empty()
{
	return this->ilen == 0;
}

template<class T>
void CLinkQueueNode<T>::print_data()
{
	std::cout<<"´òÓ¡: ";
	int i = 0;
	while(i++ < this->ilen)
	{
		std::cout<<this->arr[i-1]<<' ';
	}
	std::cout<<std::endl;
}

