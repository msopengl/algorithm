// jstack.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main()
{
	// ����ջ
	std::cout<<"***����ջ***"<<std::endl;
	CStackNode<int> stack_node;
	std::cout<<"ջ�Ƿ��: "<<stack_node.empty()<<std::endl;
	int sz = stack_node.size();
	std::cout<<"ջ����: "<<sz<<std::endl;
	stack_node.init();
	stack_node.print_data();
	sz = stack_node.size();
	std::cout<<"ջ����: "<<sz<<std::endl;
	stack_node.push(22);
	stack_node.print_data();
	sz = stack_node.size();
	std::cout<<"ջ����: "<<sz<<std::endl;
	stack_node.pop();
	stack_node.print_data();
	stack_node.pop();
	stack_node.print_data();
	stack_node.pop();
	stack_node.print_data();
	std::cout<<"ջ��ֵ: "<<stack_node.top()<<std::endl;
	sz = stack_node.size();
	std::cout<<"ջ����: "<<sz<<std::endl;
	std::cout<<"ջ�Ƿ��: "<<stack_node.empty()<<std::endl;
	
	std::cout<<std::endl;

	// ����ջ
	std::cout<<"***����ջ***"<<std::endl;
	CLinkStackNode<int> link_stack_node;
	std::cout<<"ջ�Ƿ��: "<<link_stack_node.empty()<<std::endl;
	sz = link_stack_node.size();
	std::cout<<"ջ����: "<<sz<<std::endl;
	link_stack_node.init();
	link_stack_node.print_data();
	sz = link_stack_node.size();
	std::cout<<"ջ����: "<<sz<<std::endl;
	link_stack_node.push(22);
	link_stack_node.print_data();
	sz = link_stack_node.size();
	std::cout<<"ջ����: "<<sz<<std::endl;
	link_stack_node.pop();
	link_stack_node.print_data();
	link_stack_node.pop();
	link_stack_node.print_data();
	link_stack_node.pop();
	link_stack_node.print_data();
	std::cout<<"ջ��ֵ: "<<link_stack_node.top()<<std::endl;
	sz = link_stack_node.size();
	std::cout<<"ջ����: "<<sz<<std::endl;
	std::cout<<"ջ�Ƿ��: "<<stack_node.empty()<<std::endl;

	int p;
	std::cin>>p;
	return 0;
}
