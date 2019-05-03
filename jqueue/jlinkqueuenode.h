#pragma once
// other: 
#define MAX_LEN 20
template<class T> class CLinkQueueNode
{
private:
	struct Node
	{
		T data;
		Node* next;
	};

	Node* phead;
	Node* ptail;
	int ilen;

public:
	CLinkQueueNode();
	~CLinkQueueNode();

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
CLinkQueueNode<T>::CLinkQueueNode()
{
	this->phead = NULL;;
	this->ptail = this->phead;
	this->ilen = 0;
}

template<class T>
CLinkQueueNode<T>::~CLinkQueueNode()
{
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
	Node* q = new Node;
	q->data = t;
	if(this->phead == NULL)
	{
		this->phead = q;
		q->next = NULL;
		this->ptail = q;
	}
	else
	{
		q->next = NULL;
		this->ptail->next = q;
		this->ptail = q;
	}
	++this->ilen;
	return true;
}

template<class T>
T CLinkQueueNode<T>::pop()
{
	if(this->ilen == 0)
	{
		return NULL;
	}

	Node* q;
	q = this->phead;
	T data = q->data;
	this->phead = this->phead->next;
	delete q;
	--this->ilen;
	return data;
}

template<class T>
T CLinkQueueNode<T>::top()
{
	if(this->ilen == 0)
	{
		return NULL;
	}
	return this->phead->data;
}

template<class T>
int CLinkQueueNode<T>::size()
{
	return this->ilen;
}

template<class T>
int CLinkQueueNode<T>::empty()
{
	return this->phead == this->ptail;
}

template<class T>
void CLinkQueueNode<T>::print_data()
{
	std::cout<<"´òÓ¡: ";
	Node* pcur = this->phead;
	while(pcur != NULL)
	{
		std::cout<<pcur->data<<' ';
		pcur = pcur->next;
	}
	std::cout<<std::endl;
}

