#include"Liststar.h"
#pragma once
//链表初始化
//bool initstar(Sqlist &L){
//	
//	L.elems=new Star [MAX_STAR];
//	if(L.elems){
//	L.length=0;
//	L.size=MAX_STAR;
//	return true;
//		}
//
//}

//初始化链表
bool initlist(LinkList* &L) {
	L = new LinkList;
	if (!L)return false;//生成节点失败

	L->next = NULL;

	return true;

}

//2、尾部增加元素

//bool addsize(Sqlist &L,Star e){
//	
//	if(L.length==MAX_STAR)return false;
//
//	L.elems[L.length]=e;
//	L.length++;
//	return true ;
//
//}

//3、尾插法
bool end_insert(LinkList*& L, LinkNode* node) {
	
	
	if (!L || !node) return false;
	LinkList* Last = NULL;

	//找到最后一个节点
	Last = L;
	while (Last->next)Last = Last->next;

	//新的节点连接到尾部
	node->next = NULL;
	Last->next = node;

	return true;
	}

//3、删除
//bool deltesize(Sqlist &L,int pos,Star e){
//
//	if(L.length==MAX_STAR)return false;
//	if(pos<0||pos>L.length)return false;
//
//	//插入元素注意，插入该位置后的元素都要往后面移动一个位置
//	for(int i=L.length;i>pos;i--){
//	
//	L.elems[L.length]=L.elems[L.length-1];
//	
//		}
//
//	L.elems[pos]=e;
//	L.length++;
//	return true;
//}

//4、删除元素
//bool decreasesize(Sqlist &L,int pos){
//	if(L.length==0)return false;
//	if(pos<0||pos>=L.length)return false;
//
//	for(int i=pos;i<L.length-1;i++){
//		L.elems[i]=L.elems[i+1];
//	}
//
//	L.length--;
//	return true;
//
//}

//8、元素的删除
bool delete_fact(LinkList* &L,int pos) {

	//找到要删除元素的前一个元素
	LinkList* p,*d;
	p = L;
	int j = 0;
	while ((p->next)&&j<pos-1) {
		p = p->next;
		j++;
	}
	//10 9 8 7 6
	//10 9 7 6

	//找到要删除元素的前一个后
	if (!(p->next) || j>pos-1) return false;
	d = p->next;
	p->next = p->next->next;
	delete d;

	return true;

}

////5、内存的删除
//void deltesize(Sqlist &L){
//	if(L.elems)delete	[]  L.elems;
//	L.size=0;
//	L.length=0;
//}
//

//9、单链表栈的销毁
void destoyed(LinkList* &L) {
	LinkList *p;
	p = L;
	while (p)
	{
		L = L->next;
		cout << "销毁元素:" << p->STAR << endl;
		delete p;
		p = L;
	}

}