#include"Sq.h"

void initQueue(SeqQueue *SQ){
	if(!SQ)return ;

	SQ->front=0;
	SQ->rear=0;

}

//2���ж϶����Ƿ�Ϊ��
int ifempty(SeqQueue *SQ){
	if(!SQ)return 0;

	if(SQ->front==SQ->rear)return 1;

	return 0;

}

//3���ж������Ƿ���
int iffull(SeqQueue *SQ){
	if(!SQ)return 0;

	if(SQ->rear==MAX_SIZE)return 1;

	return 0;
		
}
//4������Ԫ��date���뵽����SQ��
int EnterQueue(SeqQueue *SQ,DateType date){
	if(!SQ)return 0;
	if(iffull(SQ))return 0;

	SQ->queue[SQ->rear]=date;
	SQ->rear++;
	return 1;

}

//5����ӡ�����е�Ԫ��
void queueprint(SeqQueue *SQ){
	if(!SQ)return ;

	int i=SQ->front;
	while(i<SQ->rear){
		cout<<setw(4)<<SQ->queue[i]<<"\t";
		i++;
	}

	cout<<endl;
	

}

//6��Ԫ�ص�ɾ��
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

//7����ȡ����Ԫ�أ�������
bool getfront(SeqQueue *SQ,int *date){
	if(!SQ||SQ->rear==0)return false;
	if(ifempty)return false;


	*date=SQ->queue[SQ->front];

	return true;
}

//8����ն���
bool clearqueue(SeqQueue *SQ){

	if(!SQ)return false;
	
	SQ->front=SQ->rear=0;
	return true;


	}

//9����ȡ ������Ԫ�صĸ���
int getSQcount(SeqQueue *SQ){
	
	if(!SQ)return 0;

	return SQ->rear-SQ->front;

	}
//10�����з�ʽ��
bool outsecondsq(SeqQueue *SQ,int *date){
	
	if(!SQ||ifempty(SQ))return false;
	
	//���ӵ��ж�
	if(SQ->front>=MAX_SIZE){
	return false;
	}

	*date=SQ->queue[SQ->front];
	SQ->front=(SQ->front)+1;
	return true;

}
