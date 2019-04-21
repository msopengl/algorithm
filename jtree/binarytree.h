// binarytree.h: 二叉树、平衡二叉树、B树
//
#pragma once

// 创建二叉树
PTTree createtree(int *arr, int idx, int n);

// 递归遍历二叉树
void pre_print(PTTree root, int idx, int n);
void mid_print(PTTree root, int idx, int n);
void back_print(PTTree root, int idx, int n);

// 非递归遍历二叉树
void pre_print_ex(PTTree root, int idx, int n);
void mid_print_ex(PTTree root, int idx, int n);
void back_print_ex(PTTree root, int idx, int n);

// 平衡二叉树

// 红黑树B B+ B-