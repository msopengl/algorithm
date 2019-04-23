// jlist.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"

int main()
{
	CListNode listnode;
	PTList head = new TList;

	PTList rhead = head;

	std::cout<<"创建结点(头插法): ";
	for(int i = 1; i < 10; i++)
	{
		PTList new_head;
		new_head = listnode.CreateNodes(i);
		new_head->next = rhead->next;
		rhead->next = new_head;
		std::cout<<i<<' ';
	}
	std::cout<<std::endl;
	std::cout<<"当前长度: "<<listnode.GetLen()<<std::endl;

	std::cout<<std::endl;
	listnode.PrintList(head);

	listnode.Clear();
	head->clear();

	PTList rtail = head;

	std::cout<<std::endl;
	std::cout<<"创建结点(尾插法): ";
	for(int i = 1; i < 10; i++)
	{
		PTList new_tail;
		new_tail = listnode.CreateNodes(i);
		rtail->next = new_tail;
		rtail = new_tail;
		std::cout<<i<<' ';
	}
	std::cout<<std::endl;
	std::cout<<"当前长度: "<<listnode.GetLen()<<std::endl;

	std::cout<<std::endl;
	listnode.PrintList(head);

	std::cout<<std::endl;

	int pos = 5;
	int val = 12;
	std::cout<<"插入数据(第几个,插入值)： "<<pos<<" "<<val<<std::endl;
	listnode.InsertNode(pos, val);
	listnode.PrintList(head);
	std::cout<<"当前长度: "<<listnode.GetLen()<<std::endl;
	pos = 3;
	ElementData data = listnode.GetNode(pos);
	std::cout<<"获得第"<<pos<<"个位置值: "<<data<<std::endl;
	pos = 4;
	val = 6;
	listnode.UpdateNode(pos, val);
	std::cout<<"更新第"<<pos<<"个位置值为: "<<val<<std::endl;
	listnode.PrintList(head);
	pos = 4;
	listnode.DeleteNode(pos);
	std::cout<<"删除第"<<pos<<"个位置值"<<std::endl;
	listnode.PrintList(head);
	std::cout<<"当前长度: "<<listnode.GetLen()<<std::endl;
	val = 12;
	pos = listnode.SearchNode(val);
	std::cout<<"查询值"<<val<<"结果: "<<pos<<std::endl;

	std::cout<<std::endl;

	int p;
	std::cin>>p;

	return 0;
}

