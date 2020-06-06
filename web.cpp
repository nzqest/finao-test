#include<Windows.h>
#include"WEB.h"
//#include"webserive.cpp"
static void  checkTimesout(Timesqlist &list,time_t now);

int main(void){
	time_t now, end;
	Timesqlist list;
	
	time_t lasttime;
	time(&now);


	end=now+60;	//表示60s后退出循环
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
	cout<<"检查超时连接..."<<endl;

	for(int i=0;i<L.length;i++){
	
		if(L.elems[i].timeout>now){
			//没有超时
			continue;
		}else{
		//已经超时,清理连接
			fd =L.elems[i].fd;
			//关闭连接
			printf("目前已关闭连接fd[i]是!\n",fd);
			decreasesize(L,i);
			i--;
		}

		//删除元素
		
		}

}