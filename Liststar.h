#pragma once
#include<stdio.h>
#include<Windows.h>
#include<iostream>
#include<graphics.h>
#include<time.h>
#include<list>
#include<vector>

#ifndef _list_H
#define _list_H

using namespace std;


#define MAX_STAR	  100
#define SCREEN_HEIGHT 640
#define SCREEN_WIDE   480
#define STAR_STEP	  5
#define STAR_RADIUS	  3




enum kind {
	STOP,
	UP,
	DOWN,
	LEFT,
	RIGHT,
	ALL
};

 struct Star{
	int x;
	int y;
	int color;
	enum kind statu;
	int radius;
	int step;


};

typedef struct _LinkNode {
	struct Star *STAR;
	_LinkNode* next;


}LinkNode, LinkList;


#endif _list_H
bool initlist(LinkList* &L);
bool end_insert(LinkList*& L, LinkNode* node);
bool delete_fact(LinkList* &L,int pos);
void destoyed(LinkList* &L);