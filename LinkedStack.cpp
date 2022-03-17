#include <iostream>
#include "LinkedStack.h"
#include "Match.h"
using namespace std;

int main()
{
	////定义链栈
	//LinkStNode* s;

	////初始化栈
	//InitStack(s);

	////判断栈是否为空
	//if (StackEmpty(s))
	//	cout << "s是个空栈" << endl;
	//else
	//	cout << "s不是一个空栈" << endl;
	//
	////进栈
	//for (int i = 0; i < 10; i++)
	//	Push(s, 2 * i);

	////取栈顶元素
	//int top;
	//GetTop(s, top);
	//cout << "栈顶元素是：" << top << endl;

	////退栈
	//int e;
	//Pop(s, e);
	//cout << "退出的元素是：" << e << endl;

	////取栈顶元素
	//int top2;
	//GetTop(s, top2);
	//cout << "新的栈顶元素是：" << top2 << endl;

	////销毁栈
	//DestroyStack(s);

	char ch[] = { '(','A','G',')', };
	for (int i = 0; i < sizeof(ch) / sizeof(ch[0]); i++)
		cout << ch[i] << " ";
	cout << endl;

	if ((Match(ch, sizeof(ch) / sizeof(ch[0]))))
		cout << "ch中括号匹配" << endl;
	else
		cout << "ch中括号不匹配" << endl;

	return 0;
}