#pragma once
#include <iostream>
#include "LinkedStack.h"

bool Match(char exp[], int n);						//�ж�����ı��ʽ�е������Ƿ����

bool Match(char exp[], int n)
{
	LinkStNode* s;
	InitStack(s);
	bool match = true;
	int i = 0;
	char e;
	while (i < n && match)
	{
		if (exp[i] == '(')
			Push(s, exp[i]);
		else if (exp[i] == ')')
		{
			if (GetTop(s, e))
			{
				if (e != '(')
					match = false;
				else
					Pop(s, e);
			}
			else
				match = false;
		}
		i++;
	}
	if (StackEmpty(s) == false)
		match = false;
	DestroyStack(s);
	return match;
}