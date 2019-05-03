// jstring.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

char* cstar = "**";
// 1 字符串替换
void str_replace(char* str, char* desc_str)
{
	int pos = 0;
	for(int i = 0; str[i] != '\0'; i++)
	{
		if(str[i] == 'a')
		{
			desc_str[pos++] = cstar[0];
			desc_str[pos++] = cstar[1];
		}
		else
		{
			desc_str[pos++] = str[i];
		}
	}
	desc_str[pos] = '\0';
}

// 2 字符串中查找某个字符串
int str_sub_find(const char* parent, const char* son)
{
	int iparent = strlen(parent);
	int ison = strlen(son);
	for(int i = 0; i <= iparent - ison; i++)
	{
		int flag = 1;
		for(int j = 0; j < ison; j++)
		{
			if(parent[i+j] != son[j])
			{
				flag = 0;
				break;
			}
		}
		if(flag == 1)
		{
			return 1;
		}
	}

	return -1;
}

// 3 字符串长度
int str_len(char* str)
{
	int ilen = 0;
	while(str[ilen] != '\0')
	{
		ilen++;
	}
	return ilen;
}

// 4 字符串反转
char* str_reverse(char* str)
{
	int ilen = strlen(str);
    char *start = str;
    char *end = str + ilen - 1;
    char ch;

    if (str != NULL)
    {
        while (start < end)
        {
            ch = *start;
            *start++ = *end;
            *end-- = ch;
        }
    }
    return str;
}

// 917. 仅仅反转字母
//给定一个字符串 S，返回 “反转后的” 字符串，其中不是字母的字符都保留在原地，而所有字母的位置发生反转。
//示例 1：
//输入："ab-cd"
//输出："dc-ba"
char* reverseOnlyLetters(char* S) {
    for(int i = 0,j = strlen(S) - 1;i < j;){
        if((S[i] >= 'A' && S[i] <= 'Z') || (S[i] >= 'a' && S[i] <= 'z')){
            if((S[j] >= 'A' && S[j] <= 'Z') || (S[j] >= 'a' && S[j] <= 'z')){
                char t = S[i];
                S[i] = S[j];
                S[j] = t;
                i++;
                j--;
            }
            else j--;
        }
        else{ 
            i++;
            if((S[j] > 'Z' && S[j] < 'a') || S[j] < 'A' || S[j] > 'z')
                j--;
        }
    }
    return S;
}

int main()
{
	// 1 字符串替换
	char str[] = "mac";
	str[strlen(str)] = '\0';
	char desc_str[] = "";
	str_replace(str, desc_str);
	std::cout<<desc_str<<std::endl;

	// 2 字符串中查找某个字符串
    char* str_parent = "fg ing hdsomde";
    printf("%d\n", str_sub_find(str_parent, "fg idng"));
	
	// 3 字符串长度
    printf("%d\n", str_len(str_parent));

	// 4 字符串反转
	char str_parent_r[] = "abcdefg";
    printf("%s\n", str_reverse(str_parent_r));

	// 917. 仅仅反转字母
	char str_parent_r1[] = "ab-cd";
	printf("%s\n", reverseOnlyLetters(str_parent_r1));

	int p;
	cin>>p;
	return 0;
}