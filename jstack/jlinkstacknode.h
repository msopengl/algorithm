#pragma once
// other: https://blog.csdn.net/zichen_ziqi/article/details/80807989
#define MAX_LEN 20
template<class T> class CLinkStackNode
{
public:
	CLinkStackNode();
	~CLinkStackNode();

private:
	T* arr;
	int ilen;

public:
	void init();
	bool push(T t);
	T top();
	T pop();
	int size();
	bool empty();
	void print_data();

};

template<class T>
CLinkStackNode<T>::CLinkStackNode()
{
	this->arr = new T[MAX_LEN];
	memset(this->arr, -1, sizeof(T)*MAX_LEN);
	this->ilen = 0;
}

template<class T>
CLinkStackNode<T>::~CLinkStackNode()
{
	if(NULL != this->arr)
	{
		delete[] this->arr;
	}
}

template<class T>
void CLinkStackNode<T>::init()
{
	for(int i = 1; i <= 10; i++)
	{
		this->push(i);
	}
}

template<class T>
bool CLinkStackNode<T>::push(T t)
{
	this->arr[this->ilen] = t;
	++this->ilen;
	return true;
}

template<class T>
T CLinkStackNode<T>::top()
{
	if(this->ilen == 0)
	{
		return NULL;
	}
	return this->arr[this->ilen-1];
}

template<class T>
T CLinkStackNode<T>::pop()
{
	if(this->ilen == 0)
	{
		return NULL;
	}

	this->arr[this->ilen-1] = -1;
	--this->ilen;
}

template<class T>
int CLinkStackNode<T>::size()
{
	return this->ilen;
}

template<class T>
bool CLinkStackNode<T>::empty()
{
	if(this->ilen == 0)
	{
		return true;
	}
	return false;
}

template<class T>
void CLinkStackNode<T>::print_data()
{
	std::cout<<"´òÓ¡: ";
	int i = 0;
	while(this->arr[i++] != -1)
	{
		std::cout<<this->arr[i-1]<<' ';
	}
	std::cout<<std::endl;
}

