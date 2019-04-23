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

bool CListNode::InsertNode(int i, ElementData data)
{

	++this->ilen;
	return false;
}

bool CListNode::DeleteNode(int i)
{

	--this->ilen;
	return false;
}

ElementData CListNode::GetNode(int i)
{

	return -1;
}

int CListNode::SearchNode(ElementData data)
{

	return -1;
}

bool CListNode::UpdateNode(int i, ElementData data)
{

	return false;
}

int CListNode::GetLen()
{
	return this->ilen;
}