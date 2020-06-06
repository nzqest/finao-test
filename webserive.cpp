#include"WEB.h"

bool initstar(Timesqlist &L){
	
	L.elems=new Timecount [MAX_STAR];
	if(L.elems){
	L.length=0;
	L.size=MAX_STAR;
	return true;
		}

}

//2、尾部增加元素

bool addsize(Timesqlist &L, Timecount e){
	
	if(L.length==MAX_STAR)return false;

	L.elems[L.length]=e;
	L.length++;
	return true ;

}

//3、插入元素
bool deltesize(Timesqlist &L,int pos,Timecount e){

	if(L.length==MAX_STAR)return false;
	if(pos<0||pos>L.length)return false;

	//插入元素注意，插入该位置后的元素都要往后面移动一个位置
	for(int i=L.length;i>pos;i--){
	
	L.elems[L.length]=L.elems[L.length-1];
	
		}

	L.elems[pos]=e;
	L.length++;
	return true;
}

//4、删除元素
bool decreasesize(Timesqlist &L,int pos){
	if(L.length==0)return false;
	if(pos<0||pos>=L.length)return false;

	for(int i=pos;i<L.length-1;i++){
		L.elems[i]=L.elems[i+1];
	}

	L.length--;
	return true;

}

//5、内存的删除
void deltesize(Timesqlist &L){
	if(L.elems)delete	[]  L.elems;
	L.size=0;
	L.length=0;
}

void printfsize(Timesqlist &L){

	cout<<"已经存入元素;"<<L.length<<"服务器容量;"<<L.size<<endl;
	for(int i=0;i<L.length;i++){
		cout<<"第"<<L.elems[i].fd+1<<"个元素的时间戳:"<<L.elems[i].timeout<<endl;
	
	
	}
}

