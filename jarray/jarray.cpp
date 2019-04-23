// jarray.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main()
{
	CArrayNode arraynode;
	std::cout<<"创建数组... "<<std::endl;
	arraynode.CreateNodes();
	std::cout<<"当前长度: "<<arraynode.GetLen()<<std::endl;
	arraynode.PrintArray();
	arraynode.Clear();
	arraynode.PrintArray();
	std::cout<<"当前长度: "<<arraynode.GetLen()<<std::endl;
	std::cout<<"创建数组... "<<std::endl;
	arraynode.CreateNodes();
	std::cout<<"长度: "<<arraynode.GetLen()<<std::endl;
	arraynode.PrintArray();
	int pos = 5;
	int val = 12;
	std::cout<<"插入数据(第几个,插入值)： "<<pos<<" "<<val<<std::endl;
	arraynode.InsertNode(pos, val);
	arraynode.PrintArray();
	std::cout<<"当前长度: "<<arraynode.GetLen()<<std::endl;
	pos = 3;
	ElementData data = arraynode.GetNode(pos);
	std::cout<<"获得第"<<pos<<"个位置值: "<<data<<std::endl;
	pos = 4;
	val = 6;
	arraynode.UpdateNode(pos, val);
	std::cout<<"更新第"<<pos<<"个位置值为: "<<val<<std::endl;
	arraynode.PrintArray();
	pos = 4;
	arraynode.DeleteNode(pos);
	std::cout<<"删除第"<<pos<<"个位置值"<<std::endl;
	arraynode.PrintArray();
	std::cout<<"当前长度: "<<arraynode.GetLen()<<std::endl;
	val = 12;
	pos = arraynode.SearchNode(val);
	std::cout<<"查询值"<<val<<"结果: "<<pos<<std::endl;

	std::cout<<std::endl;

	int p;
	std::cin>>p;
	return 0;
}

