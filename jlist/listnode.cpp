#include "stdafx.h"
#include "listnode.h"

CListNode::CListNode()
{
	this->Clear();
}

CListNode::~CListNode()
{

}

bool CListNode::Clear()
{
	this->ilen = 0;
	std::cout<<"清理数据"<<std::endl;
	return true;
}

PTList CListNode::CreateNodes(ElementData data)
{
	PTList plist = new TList;
	plist->data = data;
	plist->next = NULL;
	++this->ilen;
	return plist;
}

//PTList CListNode::Reverse(PTList head)
//{
//    if(head == NULL)
//        return NULL;
//
//    PTList cur = head;
//    PTList pre = NULL;
//    PTList next = NULL;
//    while(cur->next != NULL)
//    {
//        next = cur->next;
//        cur->next = pre;
//        pre = cur;
//        cur = next;
//    }
//    cur->next = pre;
//    return cur;
//}

void CListNode::PrintList(PTList head)
{
	std::cout<<"打印: ";
	while(head->next != NULL)
	{
		head = head->next;
		std::cout<<head->data<<' ';
	}
	std::cout<<std::endl;
}

bool CListNode::InsertNode(PTList head, int i, ElementData data)
{
	if(i < 0 || i > this->ilen + 1)
	{
		return false;
	}

	int ipos = 0;
	while(head->next != NULL)
	{
		++ipos;
		head = head->next;
		if(ipos == i)
		{
			PTList listnode = new TList;
			listnode->data = data;
			listnode->next = head->next;
			head->next = listnode;
			++this->ilen;
			return true;
		}
	}

	return false;
}

bool CListNode::DeleteNode(PTList head, int i)
{
	if(i < 0 || i > this->ilen + 1)
	{
		return false;
	}

	int ipos = 0;
	while(head->next != NULL)
	{
		++ipos;
		if(i == 1)
		{
			if(NULL == head->next->next)
			{
				head->next = NULL;
			}
			else
			{
				head->next = head->next->next;
			}
			--this->ilen;
			return true;
		}
		else
		{
			head = head->next;
			if(ipos == i-1 && NULL != head->next)
			{
				PTList curnode = head->next;
				if(NULL == head->next->next)
				{
					head->next = NULL;
				}
				else
				{
					head->next = head->next->next;
				}

				delete curnode;
				--this->ilen;
				return true;
			}
		}
	}

	return false;
}

ElementData CListNode::GetNode(PTList head, int i)
{
	if(i < 0 || i > this->ilen + 1)
	{
		return -1;
	}

	int ipos = 0;
	while(head->next != NULL)
	{
		++ipos;
		head = head->next;
		if(ipos == i)
		{
			return head->data;
		}
	}

	return -1;
}

int CListNode::SearchNode(PTList head, ElementData data)
{
	int ipos = 0;
	while(head->next != NULL)
	{
		++ipos;
		head = head->next;
		if(head->data == data)
		{
			return ipos;
		}
	}

	return -1;
}

bool CListNode::UpdateNode(PTList head, int i, ElementData data)
{
	int ipos = 0;
	if(i < 0 || i > this->ilen + 1)
	{
		return false;
	}

	while(head->next != NULL)
	{
		++ipos;
		head = head->next;
		if(head->data == data)
		{
			head->data = 16;
			return true;
		}
	}
	return false;
}

int CListNode::GetLen()
{
	return this->ilen;
}