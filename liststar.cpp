#include"Liststar.h"
#pragma once
//�����ʼ��
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

//��ʼ������
bool initlist(LinkList* &L) {
	L = new LinkList;
	if (!L)return false;//���ɽڵ�ʧ��

	L->next = NULL;

	return true;

}

//2��β������Ԫ��

//bool addsize(Sqlist &L,Star e){
//	
//	if(L.length==MAX_STAR)return false;
//
//	L.elems[L.length]=e;
//	L.length++;
//	return true ;
//
//}

//3��β�巨
bool end_insert(LinkList*& L, LinkNode* node) {
	
	
	if (!L || !node) return false;
	LinkList* Last = NULL;

	//�ҵ����һ���ڵ�
	Last = L;
	while (Last->next)Last = Last->next;

	//�µĽڵ����ӵ�β��
	node->next = NULL;
	Last->next = node;

	return true;
	}

//3��ɾ��
//bool deltesize(Sqlist &L,int pos,Star e){
//
//	if(L.length==MAX_STAR)return false;
//	if(pos<0||pos>L.length)return false;
//
//	//����Ԫ��ע�⣬�����λ�ú��Ԫ�ض�Ҫ�������ƶ�һ��λ��
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

//4��ɾ��Ԫ��
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

//8��Ԫ�ص�ɾ��
bool delete_fact(LinkList* &L,int pos) {

	//�ҵ�Ҫɾ��Ԫ�ص�ǰһ��Ԫ��
	LinkList* p,*d;
	p = L;
	int j = 0;
	while ((p->next)&&j<pos-1) {
		p = p->next;
		j++;
	}
	//10 9 8 7 6
	//10 9 7 6

	//�ҵ�Ҫɾ��Ԫ�ص�ǰһ����
	if (!(p->next) || j>pos-1) return false;
	d = p->next;
	p->next = p->next->next;
	delete d;

	return true;

}

////5���ڴ��ɾ��
//void deltesize(Sqlist &L){
//	if(L.elems)delete	[]  L.elems;
//	L.size=0;
//	L.length=0;
//}
//

//9��������ջ������
void destoyed(LinkList* &L) {
	LinkList *p;
	p = L;
	while (p)
	{
		L = L->next;
		cout << "����Ԫ��:" << p->STAR << endl;
		delete p;
		p = L;
	}

}