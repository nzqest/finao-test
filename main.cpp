#include"Sq.h"

int main(void){
	
	SeqQueue *SQ=new SeqQueue;
	DateType date;

	//���еĳ�ʼ��
	initQueue(SQ);
	

	//���
	for(int i=0;i<10;i++){
	
	if(EnterQueue(SQ, i)){
	cout<<"Ԫ�ز���ɹ�"<<endl;
	}else{
	cout<<"Ԫ�ز���ʧ��"<<endl;
	}

		}
	//����
	queueprint(SQ);

	//ɾ������
	
	/*if(deletesize(SQ,&date)){
	cout<<"�ɹ�ɾ��Ԫ��"<<date<<endl;
	}else{
	cout<<"ɾ��Ԫ��ʧ��"<<endl;
	}


	cout<<"��ӡ���"<<endl;
	queueprint(SQ);*/

	
	for(int i=0;i<10;i++){
	
	if(outsecondsq(SQ,&date)){
	cout<<"�ɹ�ɾ��Ԫ��"<<date<<endl;
	}else{
	cout<<"�����ѵ���ͷ"<<endl;
	}
	
		}
	cout<<"��ӡ���"<<endl;
	queueprint(SQ);
	cout<<"-----��ȡԪ�صĸ���-------"<<endl;
	cout<<getSQcount(SQ)<<endl;

	system("pause");
	return 0;
	}