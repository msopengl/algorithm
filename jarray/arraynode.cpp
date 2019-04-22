#include "stdafx.h"
#include "arraynode.h"

CArrayNode::CArrayNode()
{
	this->Clear();
}

CArrayNode::~CArrayNode()
{
	this->Clear();
}

void CArrayNode::Clear()
{
	memset(this->arr, 0, sizeof(this->arr));
	this->ilen = 0;
}

bool CArrayNode::CreateNodes()
{
	for(int i = 0; i < MAX_LEN-1; i++)
	{
		this->arr[i] = i+1;
		++this->ilen;
	}

	return true;
}

void CArrayNode::PrintArray()
{
	std::cout<<"´òÓ¡: ";
	for(int i = 0; i < MAX_LEN; i++)
	{
		if(this->arr[i] != 0)
		{
			std::cout<<this->arr[i]<<' ';
		}
	}
	std::cout<<std::endl;

}

bool CArrayNode::InsertNode(int i, ElementData data)
{
	if(i < 0 || i > this->ilen)
	{
		return false;
	}

	for(int x = this->ilen-1; x >= i-2; x--)
	{
		this->arr[x+1] = this->arr[x];
	}

	this->arr[i-1] = data;
	++this->ilen;

	return true;
}

bool CArrayNode::DeleteNode(int i)
{
	if(i < 0 || i > this->ilen)
	{
		return false;
	}

	for(int x = i; x < this->ilen; x++)
	{
		this->arr[x-1] = this->arr[x];
	}
	this->arr[this->ilen-1] = 0;
	--this->ilen;
	return true;
}

ElementData CArrayNode::GetNode(int i)
{
	if(i < 0 || i > this->ilen)
	{
		return -1;
	}

	for(int x = 0; x < this->ilen; x++)
	{
		if(i == x+1)
		{
			return arr[x];
		}
	}

	return -1;
}

int CArrayNode::SearchNode(ElementData data)
{
	for(int i = 0; i < this->ilen; i++)
	{
		if(data == this->arr[i])
		{
			return i+1;
		}
	}
	return -1;
}

bool CArrayNode::UpdateNode(int i, ElementData data)
{
	if(i < 0 || i > this->ilen)
	{
		return false;
	}

	for(int x = 0; x < this->ilen; x++)
	{
		if(i == x+1)
		{
			arr[x] = data;
			return true;
		}
	}
	return false;
}

int CArrayNode::GetLen()
{
	return this->ilen;
}