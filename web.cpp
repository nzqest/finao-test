#include<Windows.h>
#include"WEB.h"
//#include"webserive.cpp"
static void  checkTimesout(Timesqlist &list,time_t now);

int main(void){
	time_t now, end;
	Timesqlist list;
	
	time_t lasttime;
	time(&now);


	end=now+60;	//��ʾ60s���˳�ѭ��
	lasttime=time(&now);
	initstar(list);
	
	for(int i=0;i<10;i++){

	Timecount e;
	e.fd=i;
	e.timeout=now+i*2;
	addsize(list,e);
	
	
		}

	printfsize(list);
	
	do{	
		if(lasttime+0.999<now){
		checkTimesout(list,now );
		lasttime=now;
		}
	
		time(&now);
	}while(now<end);

	system("pause");
	return 0;
}

void  checkTimesout(Timesqlist &L,time_t now){

	int fd;
	cout<<"��鳬ʱ����..."<<endl;

	for(int i=0;i<L.length;i++){
	
		if(L.elems[i].timeout>now){
			//û�г�ʱ
			continue;
		}else{
		//�Ѿ���ʱ,��������
			fd =L.elems[i].fd;
			//�ر�����
			printf("Ŀǰ�ѹر�����fd[i]��!\n",fd);
			decreasesize(L,i);
			i--;
		}

		//ɾ��Ԫ��
		
		}

}