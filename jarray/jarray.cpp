// jarray.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main()
{
	CArrayNode arraynode;
	std::cout<<"��������... "<<std::endl;
	arraynode.CreateNodes();
	std::cout<<"��ǰ����: "<<arraynode.GetLen()<<std::endl;
	arraynode.PrintArray();
	arraynode.Clear();
	arraynode.PrintArray();
	std::cout<<"��ǰ����: "<<arraynode.GetLen()<<std::endl;
	std::cout<<"��������... "<<std::endl;
	arraynode.CreateNodes();
	std::cout<<"����: "<<arraynode.GetLen()<<std::endl;
	arraynode.PrintArray();
	int pos = 5;
	int val = 12;
	std::cout<<"��������(�ڼ���,����ֵ)�� "<<pos<<" "<<val<<std::endl;
	arraynode.InsertNode(pos, val);
	arraynode.PrintArray();
	std::cout<<"��ǰ����: "<<arraynode.GetLen()<<std::endl;
	pos = 3;
	ElementData data = arraynode.GetNode(pos);
	std::cout<<"��õ�"<<pos<<"��λ��ֵ: "<<data<<std::endl;
	pos = 4;
	val = 6;
	arraynode.UpdateNode(pos, val);
	std::cout<<"���µ�"<<pos<<"��λ��ֵΪ: "<<val<<std::endl;
	arraynode.PrintArray();
	pos = 4;
	arraynode.DeleteNode(pos);
	std::cout<<"ɾ����"<<pos<<"��λ��ֵ"<<std::endl;
	arraynode.PrintArray();
	std::cout<<"��ǰ����: "<<arraynode.GetLen()<<std::endl;
	val = 12;
	pos = arraynode.SearchNode(val);
	std::cout<<"��ѯֵ"<<val<<"���: "<<pos<<std::endl;

	std::cout<<std::endl;

	int p;
	std::cin>>p;
	return 0;
}

