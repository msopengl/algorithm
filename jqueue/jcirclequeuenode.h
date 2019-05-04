#pragma once
// other: https://www.cnblogs.com/skywang12345/p/3562279.html
// ing
template<class T> class CCircleQueueNode
{
private: 
    unsigned int m_size;
    int m_front;
    int m_rear;
    T*  m_data;

public:
	CCircleQueueNode(unsigned size);
	~CCircleQueueNode();

	bool push(T t);
	T pop();
	bool full();
	bool empty();
};

template<class T>
CCircleQueueNode<T>::CCircleQueueNode(unsigned size)
    :m_size(size),
    m_front(0),
    m_rear(0)
{   
    m_data = new T[size];
}   

template<class T>
CCircleQueueNode<T>::~CCircleQueueNode()
{   
    delete [] m_data;
}   

template<class T>
bool CCircleQueueNode<T>::empty()
{   
    return m_front == m_rear;
}   

template<class T>
bool CCircleQueueNode<T>::full() 
{   
    return m_front == (m_rear + 1)%m_size;
}   

template<class T>
bool CCircleQueueNode<T>::push(T t)
{
    if(this->full())
    {
        return false;
    }
    m_data[m_rear] = t;
    m_rear = (m_rear + 1)%m_size;
	return true;
}

template<class T>
T CCircleQueueNode<T>::pop() throw(bad_exception)
{
    if(this->empty())
    {
        throw bad_exception();
    }
    T tmp = m_data[m_front];
    m_front = (m_front + 1)%m_size;
    return tmp;
}
