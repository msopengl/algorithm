// bubblesort.h: ð������
//
#pragma once

// ����������
PTTree createtree(int *arr, int idx, int n);

// �ݹ����������
void pre_print(PTTree root, int idx, int n);
void mid_print(PTTree root, int idx, int n);
void back_print(PTTree root, int idx, int n);

// �ǵݹ����������
void pre_print_ex(PTTree root, int idx, int n);
void mid_print_ex(PTTree root, int idx, int n);
void back_print_ex(PTTree root, int idx, int n);

// ƽ�������

// �����B B+ B-