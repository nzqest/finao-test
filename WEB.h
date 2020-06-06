#ifndef _WEB_H
#define _WEB_H

#include<time.h>
#include<iostream>

using namespace std;
#define MAX_STAR 100
typedef struct {
	int fd;
	time_t timeout;//使用超时时刻的时间戳表示



}Timecount;

typedef struct{
	
	Timecount *elems;
	int length;
	int size;

}Timesqlist; 

#endif _WEB_H

bool initstar(Timesqlist &L);
bool addsize(Timesqlist &L, Timecount e);
bool deltesize(Timesqlist &L,int pos,Timecount e);
bool decreasesize(Timesqlist &L,int pos);
void deltesize(Timesqlist &L);
void printfsize(Timesqlist &L);
