#include"Sq.h"

void initQueue(SeqQueue *SQ){
	if(!SQ)return ;

	SQ->front=0;
	SQ->rear=0;

}

//2、判断队列是否为空
int ifempty(SeqQueue *SQ){
	if(!SQ)return 0;

	if(SQ->front==SQ->rear)return 1;

	return 0;

}

//3、判读队列是否满
int iffull(SeqQueue *SQ){
	if(!SQ)return 0;

	if(SQ->rear==MAX_SIZE)return 1;

	return 0;
		
}
//4、插入元素date插入到队列SQ中
int EnterQueue(SeqQueue *SQ,DateType date){
	if(!SQ)return 0;
	if(iffull(SQ))return 0;

	SQ->queue[SQ->rear]=date;
	SQ->rear++;
	return 1;

}

//5、打印队列中的元素
void queueprint(SeqQueue *SQ){
	if(!SQ)return ;

	int i=SQ->front;
	while(i<SQ->rear){
		cout<<setw(4)<<SQ->queue[i]<<"\t";
		i++;
	}

	cout<<endl;
	

}

//6、元素的删除
bool deletesize(SeqQueue *SQ,int *date){
	
	if(!SQ||ifempty(SQ))return false;

	if(!date)return false;

	*date=SQ->queue[SQ->front];

	for(int i=SQ->front+1;i<SQ->rear;i++){
		
		SQ->queue[i-1]=SQ->queue[i];
		
	}

	SQ->rear--;
	return true;


}

//7、获取队首元素，不出列
bool getfront(SeqQueue *SQ,int *date){
	if(!SQ||SQ->rear==0)return false;
	if(ifempty)return false;


	*date=SQ->queue[SQ->front];

	return true;
}

//8、清空队列
bool clearqueue(SeqQueue *SQ){

	if(!SQ)return false;
	
	SQ->front=SQ->rear=0;
	return true;


	}

//9、获取 队列中元素的个数
int getSQcount(SeqQueue *SQ){
	
	if(!SQ)return 0;

	return SQ->rear-SQ->front;

	}
//10、出列方式二
bool outsecondsq(SeqQueue *SQ,int *date){
	
	if(!SQ||ifempty(SQ))return false;
	
	//出队的行动
	if(SQ->front>=MAX_SIZE){
	return false;
	}

	*date=SQ->queue[SQ->front];
	SQ->front=(SQ->front)+1;
	return true;

}
