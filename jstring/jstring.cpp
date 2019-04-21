// jstring.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

char* cstar = "**";

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

int main()
{
	char str[] = "mac";
	str[strlen(str)] = '\0';
	char desc_str[] = "";
	str_replace(str, desc_str);
	std::cout<<desc_str<<std::endl;
	int p;
	cin>>p;
	return 0;
}