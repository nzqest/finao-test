#include"WEB.h"

bool initstar(Timesqlist &L){
	
	L.elems=new Timecount [MAX_STAR];
	if(L.elems){
	L.length=0;
	L.size=MAX_STAR;
	return true;
		}

}

//2��β������Ԫ��

bool addsize(Timesqlist &L, Timecount e){
	
	if(L.length==MAX_STAR)return false;

	L.elems[L.length]=e;
	L.length++;
	return true ;

}

//3������Ԫ��
bool deltesize(Timesqlist &L,int pos,Timecount e){

	if(L.length==MAX_STAR)return false;
	if(pos<0||pos>L.length)return false;

	//����Ԫ��ע�⣬�����λ�ú��Ԫ�ض�Ҫ�������ƶ�һ��λ��
	for(int i=L.length;i>pos;i--){
	
	L.elems[L.length]=L.elems[L.length-1];
	
		}

	L.elems[pos]=e;
	L.length++;
	return true;
}

//4��ɾ��Ԫ��
bool decreasesize(Timesqlist &L,int pos){
	if(L.length==0)return false;
	if(pos<0||pos>=L.length)return false;

	for(int i=pos;i<L.length-1;i++){
		L.elems[i]=L.elems[i+1];
	}

	L.length--;
	return true;

}

//5���ڴ��ɾ��
void deltesize(Timesqlist &L){
	if(L.elems)delete	[]  L.elems;
	L.size=0;
	L.length=0;
}

void printfsize(Timesqlist &L){

	cout<<"�Ѿ�����Ԫ��;"<<L.length<<"����������;"<<L.size<<endl;
	for(int i=0;i<L.length;i++){
		cout<<"��"<<L.elems[i].fd+1<<"��Ԫ�ص�ʱ���:"<<L.elems[i].timeout<<endl;
	
	
	}
}

