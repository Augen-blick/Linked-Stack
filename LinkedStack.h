#pragma once
#include <iostream>
using namespace std;

//typedef int ElemType;
typedef char ElemType;

typedef struct linknode
{
	ElemType data;					//数据域
	struct linknode* next;			//指针域
} LinkStNode;

void InitStack(LinkStNode*& s);							//初始化栈
void DestroyStack(LinkStNode*& s);						//销毁栈
bool StackEmpty(LinkStNode* s);							//判断栈是否为空
void Push(LinkStNode*& s, ElemType e);					//进栈
bool Pop(LinkStNode*& s, ElemType& e);					//出栈
bool GetTop(LinkStNode* s, ElemType& e);				//取栈顶元素

void InitStack(LinkStNode*& s)							//初始化栈
{
	s = (LinkStNode*)malloc(sizeof(LinkStNode));
	s->next = NULL;
}

void DestroyStack(LinkStNode*& s)						//销毁栈
{
	LinkStNode* pre = s, *p = s->next;				//pre指向头结点，p指向首结点
	while (p != NULL)
	{
		free(pre);
		pre = p;
		p = p->next;
	}
	free(pre);
}

bool StackEmpty(LinkStNode* s)							//判断栈是否为空
{
	return(s->next == NULL);
}

void Push(LinkStNode*& s, ElemType e)					//进栈
{
	LinkStNode* p;
	p = (LinkStNode*)malloc(sizeof(LinkStNode));
	p->data = e;
	p->next = s->next;
	s->next = p;
}

bool Pop(LinkStNode*& s, ElemType& e)					//出栈
{
	LinkStNode* p;
	if (s->next == NULL)
		return false;
	p = s->next;
	e = p->data;
	s->next = p->next;
	free(p);
	return true;
}

bool GetTop(LinkStNode* s, ElemType& e)					//取栈顶元素
{
	if (s->next == NULL)
		return false;
	e = s->next->data;
	return true;
}