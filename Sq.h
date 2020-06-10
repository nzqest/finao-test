#include<iostream>
#include<Windows.h>
#include<iomanip>

using namespace std;

#define MAX_SIZE 5//���е��������
typedef int DateType; 

typedef struct Queue{
	
	DateType queue[MAX_SIZE];//�����������͵�����
	int front;
	int rear;

}SeqQueue;

//1�����еĳ�ʼ��
void initQueue(SeqQueue *SQ);
//2���ж϶����Ƿ�Ϊ��
int ifempty(SeqQueue *SQ);
//3���ж������Ƿ���
int iffull(SeqQueue *SQ);
//4������Ԫ��date���뵽����SQ��
int EnterQueue(SeqQueue *SQ,DateType date);
//5����ӡ�����е�Ԫ��
void queueprint(SeqQueue *SQ);
//6��Ԫ�ص�ɾ��
bool deletesize(SeqQueue *SQ,int *date);
//7����ȡ����Ԫ�أ�������
bool getfront(SeqQueue *SQ,int *date);
//8����ն���
bool clearqueue(SeqQueue *SQ);
//9����ȡ ������Ԫ�صĸ���
int getSQcount(SeqQueue *SQ);
//10�����з�ʽ��
bool outsecondsq(SeqQueue *SQ,int *date);
