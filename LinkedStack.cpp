#include <iostream>
#include "LinkedStack.h"
#include "Match.h"
using namespace std;

int main()
{
	////������ջ
	//LinkStNode* s;

	////��ʼ��ջ
	//InitStack(s);

	////�ж�ջ�Ƿ�Ϊ��
	//if (StackEmpty(s))
	//	cout << "s�Ǹ���ջ" << endl;
	//else
	//	cout << "s����һ����ջ" << endl;
	//
	////��ջ
	//for (int i = 0; i < 10; i++)
	//	Push(s, 2 * i);

	////ȡջ��Ԫ��
	//int top;
	//GetTop(s, top);
	//cout << "ջ��Ԫ���ǣ�" << top << endl;

	////��ջ
	//int e;
	//Pop(s, e);
	//cout << "�˳���Ԫ���ǣ�" << e << endl;

	////ȡջ��Ԫ��
	//int top2;
	//GetTop(s, top2);
	//cout << "�µ�ջ��Ԫ���ǣ�" << top2 << endl;

	////����ջ
	//DestroyStack(s);

	char ch[] = { '(','A','G',')', };
	for (int i = 0; i < sizeof(ch) / sizeof(ch[0]); i++)
		cout << ch[i] << " ";
	cout << endl;

	if ((Match(ch, sizeof(ch) / sizeof(ch[0]))))
		cout << "ch������ƥ��" << endl;
	else
		cout << "ch�����Ų�ƥ��" << endl;

	return 0;
}