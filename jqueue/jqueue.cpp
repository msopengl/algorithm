// jqueue.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main()
{
	int sz = 0;
	// ���ݶ���
	//std::cout<<"***�������***"<<std::endl;
	//CQueueNode<int> queue_node;
	//std::cout<<"�����Ƿ��: "<<queue_node.empty()<<std::endl;
	//sz = queue_node.size();
	//std::cout<<"���г���: "<<sz<<std::endl;
	//queue_node.init();
	//queue_node.print_data();
	//sz = queue_node.size();
	//std::cout<<"���г���: "<<sz<<std::endl;
	//queue_node.push(22);
	//queue_node.print_data();
	//sz = queue_node.size();
	//std::cout<<"���г���: "<<sz<<std::endl;
	//queue_node.pop();
	//std::cout<<"����"<<std::endl;
	//queue_node.print_data();
	//queue_node.pop();
	//std::cout<<"����"<<std::endl;
	//queue_node.print_data();
	//queue_node.pop();
	//std::cout<<"����"<<std::endl;
	//queue_node.print_data();
	//std::cout<<"���ж�ֵ: "<<queue_node.front()<<std::endl;
	//sz = queue_node.size();
	//std::cout<<"���г���: "<<sz<<std::endl;
	//std::cout<<"�����Ƿ��: "<<queue_node.empty()<<std::endl;
	//
	//std::cout<<std::endl;

	// �������
	//std::cout<<"***�������***"<<std::endl;
	//CLinkQueueNode<int> link_queue_node;
	//std::cout<<"�����Ƿ��: "<<link_queue_node.empty()<<std::endl;
	//sz = link_queue_node.size();
	//std::cout<<"���г���: "<<sz<<std::endl;
	//link_queue_node.init();
	//link_queue_node.print_data();
	//sz = link_queue_node.size();
	//std::cout<<"���г���: "<<sz<<std::endl;
	//link_queue_node.push(22);
	//link_queue_node.print_data();
	//sz = link_queue_node.size();
	//std::cout<<"���г���: "<<sz<<std::endl;
	//link_queue_node.pop();
	//std::cout<<"����"<<std::endl;
	//link_queue_node.print_data();
	//link_queue_node.pop();
	//std::cout<<"����"<<std::endl;
	//link_queue_node.print_data();
	//link_queue_node.pop();
	//std::cout<<"����"<<std::endl;
	//link_queue_node.print_data();
	//std::cout<<"���ж�ֵ: "<<link_queue_node.top()<<std::endl;
	//sz = link_queue_node.size();
	//std::cout<<"���г���: "<<sz<<std::endl;
	//std::cout<<"�����Ƿ��: "<<link_queue_node.empty()<<std::endl;

	//std::cout<<std::endl;

	std::cout<<"***ѭ������***"<<std::endl;
	CCircleQueueNode<int> link_queue_node(3);
	std::cout<<"�����Ƿ��: "<<link_queue_node.empty()<<std::endl;
	std::cout<<"���г���: "<<sz<<std::endl;
	std::cout<<"���г���: "<<sz<<std::endl;
	link_queue_node.push(22);
	link_queue_node.push(23);
	link_queue_node.push(2);
	link_queue_node.push(25);
	std::cout<<"���г���: "<<sz<<std::endl;
	link_queue_node.pop();
	std::cout<<"����"<<std::endl;
	link_queue_node.pop();
	std::cout<<"����"<<std::endl;
	link_queue_node.pop();
	std::cout<<"����"<<std::endl;
	std::cout<<"���г���: "<<sz<<std::endl;
	std::cout<<"�����Ƿ��: "<<link_queue_node.empty()<<std::endl;

	int p;
	std::cin>>p;

	return 0;
}

