// jstack.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main()
{
	// 数据栈
	std::cout<<"***数组栈***"<<std::endl;
	CStackNode<int> stack_node;
	bool is_epy = stack_node.empty();
	int i_epy = (is_epy == true) ? 1 : 0;
	std::cout<<"栈是否空: "<<i_epy<<std::endl;
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
	int itop = stack_node.top();
	std::cout<<"栈顶值: "<<itop<<std::endl;
	is_epy = stack_node.empty();
	i_epy = (is_epy == true) ? 1 : 0;
	sz = stack_node.size();
	std::cout<<"栈长度: "<<sz<<std::endl;
	std::cout<<"栈是否空: "<<i_epy<<std::endl;
	
	std::cout<<std::endl;

	// 链表栈
	std::cout<<"***链表栈***"<<std::endl;
	CLinkStackNode<int> link_stack_node;
	is_epy = link_stack_node.empty();
	i_epy = (is_epy == true) ? 1 : 0;
	std::cout<<"栈是否空: "<<i_epy<<std::endl;
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
	itop = link_stack_node.top();
	std::cout<<"栈顶值: "<<itop<<std::endl;
	is_epy = link_stack_node.empty();
	i_epy = (is_epy == true) ? 1 : 0;
	sz = link_stack_node.size();
	std::cout<<"栈长度: "<<sz<<std::endl;
	std::cout<<"栈是否空: "<<i_epy<<std::endl;

	int p;
	std::cin>>p;
	return 0;
}
