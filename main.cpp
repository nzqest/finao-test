#include"Liststar.h"
void initstar( LinkList* &L,int i){
	
	

	
	int rgb=0;
	L->STAR->x=rand()%SCREEN_WIDE;
	L->STAR->y=rand()%(SCREEN_HEIGHT-MAX_STAR);
	L->STAR->statu=UP;
	L->STAR->step=(rand()%STAR_STEP)+1;
	L->STAR->radius=(rand()%STAR_RADIUS)+1;

	L->STAR->color=255*L->STAR->step/(STAR_STEP+1);
	rgb=RGB(L->STAR->color,L->STAR->color,L->STAR->color);
	L->STAR->color=rgb;
	setfillcolor(rgb);
	//RGB(star[i].color,star[i].color,star[i].color);
	solidcircle(L->STAR->x,L->STAR->y,L->STAR->radius);
	


}

void movestar(LinkList *&L,int i){
		
		setfillcolor(BLACK);
		solidcircle(L->STAR->x,L->STAR->y,L->STAR->radius);

		if(L->STAR->statu==STOP) return;
		
		if(L->STAR->statu==UP){
			L->STAR->y-=L->STAR->step;			
			if(L->STAR->y<0)delete_fact(L,i);
		/*}else if(L.elems[i].statu==DOWN){
			L.elems[i].y+=L.elems[i].step;
			if(L.elems[i].step>SCREEN_HEIGHT)delete_fact(L,i);
		}else if(L.elems[i].statu==LEFT){
			L.elems[i].x-=L.elems[i].step;
			if(L.elems[i].x<0)delete_fact(L,i);
		}else if(L.elems[i].statu==RIGHT){
			L.elems[i].x+=L.elems[i].step;
			if(L.elems[i].x>SCREEN_WIDE)delete_fact(L,i);
			}
*/
		//RGB(star[i].color,star[i].color,star[i].color);
			setfillcolor(L->STAR->color);
		
			solidcircle(L->STAR->x,L->STAR->y,L->STAR->radius);
			L=L->next;

		

		
	}

}
//bool if_end(LinkList* &L,int i){
//
//	//for(int i=0;i<MAX_STAR;i++){
//	//	if(L.elems[i].x<SCREEN_WIDE&&L.elems[i].x>0&&L.elems[i].y<SCREEN_HEIGHT&&L.elems[i].y>0){
//	//	return false;
//	//	}
//
//	//	
//	//}
//
//	//return true;
//
//	if(L.length==0)return false;
//
//	if(L.elems[i].x>SCREEN_WIDE||L.elems[i].x<0||L.elems[i].y>SCREEN_HEIGHT||L.elems[i].y<0){
//		decreasesize(L,i);
//		if(L.length==0){return true;}
//		return false;
//		}
//
//	return false;
//
//	
//
//}
int main(void){

	//list<int>elem(0);
	//
	//
	////vector<int>::iterator it=elem.begin();
	//
	//for(int i=0;i<MAX_STAR;i++){
	//	//*it=i+1;
	//	elem.push_back(i+1);

	//	}
	//
	//cout<<"size:"<<elem.size()<<endl;
	//list<int>::iterator it=elem.begin();
	//for(it;it!=elem.end();it++){
	//
	//cout<<*it<<endl;
	//	}
	LinkList *L=NULL;
	
	if(initlist(L))
	{
	cout<<"元素初始化成功!"<<endl;
	}else{
	cout<<"元素初始化失败！"<<endl;
	}



	bool qiut=false;
	initgraph(SCREEN_WIDE,SCREEN_HEIGHT);

	for(int i=0;i<MAX_STAR;i++){
	//	Star* a;;

		LinkNode *node=new LinkNode;
		node->STAR=new Star;

		//p=new LinkNode;

		
		initstar(node,i);


		if(end_insert(L,node)){
			cout<<"元素插入成功"<<endl;
		}else{
		cout<<"元素插入失败"<<endl;
			}
	}
	
	



	IMAGE cp;

	//loadimage(&cp,"cp.jpg",90,90,false);
	putimage((SCREEN_WIDE-90)/2,(SCREEN_HEIGHT-90),&cp);
	
	
	
	while(qiut==false){
		LinkList *put=L->next;
		while(put){
	
		
		movestar(put,0);
		
		
		
	//	if(L.length==0){
	//		qiut=true;
	//		
	//		}

	//	}
	
		
	//}
		}
		Sleep(10);
	}

	destoyed(L);	

	
	system("pause");

	closegraph();
	return 0;


}