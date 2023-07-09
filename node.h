#ifndef node_h
#define  node_h

//int pricelist[]={100,20,50}
class NODE{
	// int data;
   int ordernum,qty;
	NODE *nextPtr;
public:
	NODE(int,int);
	~NODE();
  int get_value();
	void set_next(NODE *);
	NODE* get_next();
  int get_ordrnum(){return ordernum;} 
};
typedef NODE* NodePtr;

NODE::NODE(int x, int y){
	//data=x;
  ordernum=x;
  qty=y;
	nextPtr=NULL;

}
int NODE::get_value(){
  int price;
  //price= pricelist[ordnum-1]*qty;
  if(ordernum==1)//ramen
    price=100*qty;
  else if(ordernum==2)//Somtum
    price=20*qty;
  else if (ordernum==3)//Fried Chicken
    price=50*qty;
	return price;

}

NODE* NODE::get_next(){
	return nextPtr;

}

void NODE::set_next(NODE *t){
	 nextPtr=t;

}

NODE::~NODE(){
  //cout<<"There are "<<"ppl left in queue"<<endl;
    /*if(ordernum==1)//ramen
    cout<<"Ramen"<<endl;
    else if(ordernum==2)//Somtum
    cout<<"Somtum"<<endl;
    else if (ordernum==3)//Fried Chicken
    cout<<"Fried Chicken"<<endl;
    else cout<<"We don't have that item"<<endl;*/

}


#endif