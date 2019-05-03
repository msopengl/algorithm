#pragma once
// other: https://blog.csdn.net/zichen_ziqi/article/details/80807989
#define MAX_LEN 20
template<class T> class CLinkStackNode
{
private:
	struct Node
	{
		T data;
		Node* next;
	};

	Node* phead;
	Node* p;
	int ilen;

public:
	CLinkStackNode();
	~CLinkStackNode();

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
CLinkStackNode<T>::CLinkStackNode()
{
	this->phead = NULL;
	this->p = NULL;
	this->ilen = 0;
}

template<class T>
CLinkStackNode<T>::~CLinkStackNode()
{
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
	Node* q = new Node;
	q->data = t;
	if(this->phead == NULL)
	{
		q->next = NULL;
		this->p = q;
		this->phead = q;
	}
	else
	{
		q->next = this->p;
		this->p = q;
	}
	++this->ilen;
	return true;
}

template<class T>
T CLinkStackNode<T>::pop()
{
	if(this->ilen == 0)
	{
		return NULL;
	}

	Node* q;
	q = this->p;
	T data = this->p->data;
	this->p = this->p->next;
	delete q;
	--this->ilen;
	return data;
}

template<class T>
T CLinkStackNode<T>::top()
{
	if(this->ilen == 0)
	{
		return NULL;
	}
	return this->p->data;
}

template<class T>
int CLinkStackNode<T>::size()
{
	return this->ilen;
}

template<class T>
int CLinkStackNode<T>::empty()
{
	return this->ilen == 0;
}

template<class T>
void CLinkStackNode<T>::print_data()
{
	std::cout<<"´òÓ¡: ";
	Node* pcur = this->p;
	while(pcur != NULL)
	{
		std::cout<<pcur->data<<' ';
		pcur = pcur->next;
	}
	std::cout<<std::endl;
}

