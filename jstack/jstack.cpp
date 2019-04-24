// jstack.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main()
{
	// 数据栈
	std::cout<<"***数组栈***"<<std::endl;
	CStackNode<int> stack_node;
	std::cout<<"栈是否空: "<<stack_node.empty()<<std::endl;
	int sz = stack_node.size();
	std::cout<<"栈长度: "<<sz<<std::endl;
	stack_node.init();
	stack_node.print_data();
	sz = stack_node.size();
	std::cout<<"栈长度: "<<sz<<std::endl;
	stack_node.push(22);
	stack_node.print_data();
	sz = stack_node.size();
	std::cout<<"栈长度: "<<sz<<std::endl;
	stack_node.pop();
	stack_node.print_data();
	stack_node.pop();
	stack_node.print_data();
	stack_node.pop();
	stack_node.print_data();
	std::cout<<"栈顶值: "<<stack_node.top()<<std::endl;
	sz = stack_node.size();
	std::cout<<"栈长度: "<<sz<<std::endl;
	std::cout<<"栈是否空: "<<stack_node.empty()<<std::endl;
	
	std::cout<<std::endl;

	// 链表栈
	std::cout<<"***链表栈***"<<std::endl;
	CLinkStackNode<int> link_stack_node;
	std::cout<<"栈是否空: "<<link_stack_node.empty()<<std::endl;
	sz = link_stack_node.size();
	std::cout<<"栈长度: "<<sz<<std::endl;
	link_stack_node.init();
	link_stack_node.print_data();
	sz = link_stack_node.size();
	std::cout<<"栈长度: "<<sz<<std::endl;
	link_stack_node.push(22);
	link_stack_node.print_data();
	sz = link_stack_node.size();
	std::cout<<"栈长度: "<<sz<<std::endl;
	link_stack_node.pop();
	link_stack_node.print_data();
	link_stack_node.pop();
	link_stack_node.print_data();
	link_stack_node.pop();
	link_stack_node.print_data();
	std::cout<<"栈顶值: "<<link_stack_node.top()<<std::endl;
	sz = link_stack_node.size();
	std::cout<<"栈长度: "<<sz<<std::endl;
	std::cout<<"栈是否空: "<<stack_node.empty()<<std::endl;

	int p;
	std::cin>>p;
	return 0;
}
