// jqueue.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main()
{
	int sz = 0;
	// 数据队列
	//std::cout<<"***数组队列***"<<std::endl;
	//CQueueNode<int> queue_node;
	//std::cout<<"队列是否空: "<<queue_node.empty()<<std::endl;
	//sz = queue_node.size();
	//std::cout<<"队列长度: "<<sz<<std::endl;
	//queue_node.init();
	//queue_node.print_data();
	//sz = queue_node.size();
	//std::cout<<"队列长度: "<<sz<<std::endl;
	//queue_node.push(22);
	//queue_node.print_data();
	//sz = queue_node.size();
	//std::cout<<"队列长度: "<<sz<<std::endl;
	//queue_node.pop();
	//std::cout<<"弹出"<<std::endl;
	//queue_node.print_data();
	//queue_node.pop();
	//std::cout<<"弹出"<<std::endl;
	//queue_node.print_data();
	//queue_node.pop();
	//std::cout<<"弹出"<<std::endl;
	//queue_node.print_data();
	//std::cout<<"队列顶值: "<<queue_node.front()<<std::endl;
	//sz = queue_node.size();
	//std::cout<<"队列长度: "<<sz<<std::endl;
	//std::cout<<"队列是否空: "<<queue_node.empty()<<std::endl;
	//
	//std::cout<<std::endl;

	// 链表队列
	//std::cout<<"***链表队列***"<<std::endl;
	//CLinkQueueNode<int> link_queue_node;
	//std::cout<<"队列是否空: "<<link_queue_node.empty()<<std::endl;
	//sz = link_queue_node.size();
	//std::cout<<"队列长度: "<<sz<<std::endl;
	//link_queue_node.init();
	//link_queue_node.print_data();
	//sz = link_queue_node.size();
	//std::cout<<"队列长度: "<<sz<<std::endl;
	//link_queue_node.push(22);
	//link_queue_node.print_data();
	//sz = link_queue_node.size();
	//std::cout<<"队列长度: "<<sz<<std::endl;
	//link_queue_node.pop();
	//std::cout<<"弹出"<<std::endl;
	//link_queue_node.print_data();
	//link_queue_node.pop();
	//std::cout<<"弹出"<<std::endl;
	//link_queue_node.print_data();
	//link_queue_node.pop();
	//std::cout<<"弹出"<<std::endl;
	//link_queue_node.print_data();
	//std::cout<<"队列顶值: "<<link_queue_node.top()<<std::endl;
	//sz = link_queue_node.size();
	//std::cout<<"队列长度: "<<sz<<std::endl;
	//std::cout<<"队列是否空: "<<link_queue_node.empty()<<std::endl;

	//std::cout<<std::endl;

	std::cout<<"***循环队列***"<<std::endl;
	CCircleQueueNode<int> link_queue_node(3);
	std::cout<<"队列是否空: "<<link_queue_node.empty()<<std::endl;
	std::cout<<"队列长度: "<<sz<<std::endl;
	std::cout<<"队列长度: "<<sz<<std::endl;
	link_queue_node.push(22);
	link_queue_node.push(23);
	link_queue_node.push(2);
	link_queue_node.push(25);
	std::cout<<"队列长度: "<<sz<<std::endl;
	link_queue_node.pop();
	std::cout<<"弹出"<<std::endl;
	link_queue_node.pop();
	std::cout<<"弹出"<<std::endl;
	link_queue_node.pop();
	std::cout<<"弹出"<<std::endl;
	std::cout<<"队列长度: "<<sz<<std::endl;
	std::cout<<"队列是否空: "<<link_queue_node.empty()<<std::endl;

	int p;
	std::cin>>p;

	return 0;
}

