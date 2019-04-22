// jarray.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main()
{
	CArrayNode arraynode;
	arraynode.CreateNodes();
	std::cout<<"长度: "<<arraynode.GetLen()<<std::endl;
	arraynode.PrintArray();
	arraynode.Clear();
	arraynode.PrintArray();
	std::cout<<"长度: "<<arraynode.GetLen()<<std::endl;
	arraynode.CreateNodes();
	std::cout<<"长度: "<<arraynode.GetLen()<<std::endl;
	arraynode.InsertNode(5, 12);
	arraynode.PrintArray();
	std::cout<<"长度: "<<arraynode.GetLen()<<std::endl;
	ElementData data = arraynode.GetNode(3);
	std::cout<<"获得值: "<<data<<std::endl;
	arraynode.UpdateNode(4, 6);
	arraynode.PrintArray();
	arraynode.DeleteNode(4);
	arraynode.PrintArray();
	std::cout<<"长度: "<<arraynode.GetLen()<<std::endl;
	int pos = arraynode.SearchNode(12);
	std::cout<<"查询结果: "<<pos<<std::endl;

	std::cout<<std::endl;

	int p;
	std::cin>>p;
	return 0;
}

