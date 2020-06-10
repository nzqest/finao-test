#include"Sq.h"

int main(void){
	
	SeqQueue *SQ=new SeqQueue;
	DateType date;

	//队列的初始化
	initQueue(SQ);
	

	//入队
	for(int i=0;i<10;i++){
	
	if(EnterQueue(SQ, i)){
	cout<<"元素插入成功"<<endl;
	}else{
	cout<<"元素插入失败"<<endl;
	}

		}
	//遍历
	queueprint(SQ);

	//删除队列
	
	/*if(deletesize(SQ,&date)){
	cout<<"成功删除元素"<<date<<endl;
	}else{
	cout<<"删除元素失败"<<endl;
	}


	cout<<"打印结果"<<endl;
	queueprint(SQ);*/

	
	for(int i=0;i<10;i++){
	
	if(outsecondsq(SQ,&date)){
	cout<<"成功删除元素"<<date<<endl;
	}else{
	cout<<"队列已到尽头"<<endl;
	}
	
		}
	cout<<"打印结果"<<endl;
	queueprint(SQ);
	cout<<"-----获取元素的个数-------"<<endl;
	cout<<getSQcount(SQ)<<endl;

	system("pause");
	return 0;
	}