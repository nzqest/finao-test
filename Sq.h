#include<iostream>
#include<Windows.h>
#include<iomanip>

using namespace std;

#define MAX_SIZE 5//队列的最大容量
typedef int DateType; 

typedef struct Queue{
	
	DateType queue[MAX_SIZE];//定义数据类型的数组
	int front;
	int rear;

}SeqQueue;

//1、队列的初始化
void initQueue(SeqQueue *SQ);
//2、判断队列是否为空
int ifempty(SeqQueue *SQ);
//3、判读队列是否满
int iffull(SeqQueue *SQ);
//4、插入元素date插入到队列SQ中
int EnterQueue(SeqQueue *SQ,DateType date);
//5、打印队列中的元素
void queueprint(SeqQueue *SQ);
//6、元素的删除
bool deletesize(SeqQueue *SQ,int *date);
//7、获取队首元素，不出列
bool getfront(SeqQueue *SQ,int *date);
//8、清空队列
bool clearqueue(SeqQueue *SQ);
//9、获取 队列中元素的个数
int getSQcount(SeqQueue *SQ);
//10、出列方式二
bool outsecondsq(SeqQueue *SQ,int *date);
