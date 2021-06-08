#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<stdio.h>
#include<assert.h>
typedef int SLDataType;
typedef struct SeqList
{
	SLDataType* a;
	size_t size;
	size_t capicity;
}SL;
void SeqListnew(SL* psq);
void SeqListPopback(SL* psq);
void SeqListCheckCapacity(SL* ps);
void SeqListDestroy(SL* ps);
void SeqListInsert(SL* ps, int pos, SLDataType x);
void SeqListErase(SL* ps, int pos);
void SeqListPushBack(SL* ps, SLDataType x);
void SeqListPushFront(SL* ps, SLDataType x);
