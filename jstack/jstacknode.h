#pragma once
// other: https://blog.csdn.net/zichen_ziqi/article/details/80807989
#define MAX_LEN 20
template<class T> class CStackNode
{
public:
	CStackNode();
	~CStackNode();

private:
	T* arr;
	int ilen;

public:
	void init();
	bool push(T t);
	T top();
	T pop();
	int size();
	int empty();
	void print_data();

};

template<class T>
CStackNode<T>::CStackNode()
{
	this->arr = new T[MAX_LEN];
	memset(this->arr, -1, sizeof(T)*MAX_LEN);
	this->ilen = 0;
}

template<class T>
CStackNode<T>::~CStackNode()
{
	if(NULL != this->arr)
	{
		delete[] this->arr;
	}
}

template<class T>
void CStackNode<T>::init()
{
	for(int i = 1; i <= 10; i++)
	{
		this->push(i);
	}
}

template<class T>
bool CStackNode<T>::push(T t)
{
	this->arr[this->ilen++] = t;
	return true;
}

template<class T>
T CStackNode<T>::top()
{
	if(this->ilen == 0)
	{
		return NULL;
	}
	return this->arr[this->ilen-1];
}

template<class T>
T CStackNode<T>::pop()
{
	if(this->ilen == 0)
	{
		return NULL;
	}

	this->arr[this->ilen-1] = -1;
	--this->ilen;
}

template<class T>
int CStackNode<T>::size()
{
	return this->ilen;
}

template<class T>
int CStackNode<T>::empty()
{
	return this->ilen == 0;
}

template<class T>
void CStackNode<T>::print_data()
{
	std::cout<<"´òÓ¡: ";
	int i = 0;
	while(i++ < this->ilen)
	{
		std::cout<<this->arr[i-1]<<' ';
	}
	std::cout<<std::endl;
}

