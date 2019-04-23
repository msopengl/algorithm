// jlist.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"

int main()
{
	CListNode listnode;
	PTList head = new TList;

	PTList rhead = head;

	std::cout<<"�������(ͷ�巨): ";
	for(int i = 1; i < 10; i++)
	{
		PTList new_head;
		new_head = listnode.CreateNodes(i);
		new_head->next = rhead->next;
		rhead->next = new_head;
		std::cout<<i<<' ';
	}
	std::cout<<std::endl;
	std::cout<<"��ǰ����: "<<listnode.GetLen()<<std::endl;

	std::cout<<std::endl;
	listnode.PrintList(head);

	listnode.Clear();
	head->clear();

	PTList rtail = head;

	std::cout<<std::endl;
	std::cout<<"�������(β�巨): ";
	for(int i = 1; i < 10; i++)
	{
		PTList new_tail;
		new_tail = listnode.CreateNodes(i);
		rtail->next = new_tail;
		rtail = new_tail;
		std::cout<<i<<' ';
	}
	std::cout<<std::endl;
	std::cout<<"��ǰ����: "<<listnode.GetLen()<<std::endl;

	std::cout<<std::endl;
	listnode.PrintList(head);

	std::cout<<std::endl;

	int pos = 5;
	int val = 12;
	std::cout<<"��������(�ڼ���,����ֵ)�� "<<pos<<" "<<val<<std::endl;
	listnode.InsertNode(pos, val);
	listnode.PrintList(head);
	std::cout<<"��ǰ����: "<<listnode.GetLen()<<std::endl;
	pos = 3;
	ElementData data = listnode.GetNode(pos);
	std::cout<<"��õ�"<<pos<<"��λ��ֵ: "<<data<<std::endl;
	pos = 4;
	val = 6;
	listnode.UpdateNode(pos, val);
	std::cout<<"���µ�"<<pos<<"��λ��ֵΪ: "<<val<<std::endl;
	listnode.PrintList(head);
	pos = 4;
	listnode.DeleteNode(pos);
	std::cout<<"ɾ����"<<pos<<"��λ��ֵ"<<std::endl;
	listnode.PrintList(head);
	std::cout<<"��ǰ����: "<<listnode.GetLen()<<std::endl;
	val = 12;
	pos = listnode.SearchNode(val);
	std::cout<<"��ѯֵ"<<val<<"���: "<<pos<<std::endl;

	std::cout<<std::endl;

	int p;
	std::cin>>p;

	return 0;
}

