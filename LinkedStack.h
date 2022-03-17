#pragma once
#include <iostream>
using namespace std;

//typedef int ElemType;
typedef char ElemType;

typedef struct linknode
{
	ElemType data;					//������
	struct linknode* next;			//ָ����
} LinkStNode;

void InitStack(LinkStNode*& s);							//��ʼ��ջ
void DestroyStack(LinkStNode*& s);						//����ջ
bool StackEmpty(LinkStNode* s);							//�ж�ջ�Ƿ�Ϊ��
void Push(LinkStNode*& s, ElemType e);					//��ջ
bool Pop(LinkStNode*& s, ElemType& e);					//��ջ
bool GetTop(LinkStNode* s, ElemType& e);				//ȡջ��Ԫ��

void InitStack(LinkStNode*& s)							//��ʼ��ջ
{
	s = (LinkStNode*)malloc(sizeof(LinkStNode));
	s->next = NULL;
}

void DestroyStack(LinkStNode*& s)						//����ջ
{
	LinkStNode* pre = s, *p = s->next;				//preָ��ͷ��㣬pָ���׽��
	while (p != NULL)
	{
		free(pre);
		pre = p;
		p = p->next;
	}
	free(pre);
}

bool StackEmpty(LinkStNode* s)							//�ж�ջ�Ƿ�Ϊ��
{
	return(s->next == NULL);
}

void Push(LinkStNode*& s, ElemType e)					//��ջ
{
	LinkStNode* p;
	p = (LinkStNode*)malloc(sizeof(LinkStNode));
	p->data = e;
	p->next = s->next;
	s->next = p;
}

bool Pop(LinkStNode*& s, ElemType& e)					//��ջ
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

bool GetTop(LinkStNode* s, ElemType& e)					//ȡջ��Ԫ��
{
	if (s->next == NULL)
		return false;
	e = s->next->data;
	return true;
}