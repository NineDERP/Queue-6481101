#include <iostream>
using namespace std;
#include "queue.h"

int main(int argc,char *argv[]) {
Queue q;    
  int i,price,x=0;
  for( i=1;i<argc;i++){
    if(argv[i][0]=='x'){
   
    
      cout<<"customer number "<<x+1<<endl;
      q.printorder();
     price = q.dequeue();
    
    if(price>0){
      cout<<"You have to pay "<<price<<endl;
      int money,change;
      do{
        cout<<"cash: ";
        cin>>money;
        
      }while(money<price);
      if(money>=price) cout<<"Thank you"<<endl;
      if (money>price) cout<<"Change is: "<<money-price<<endl;
      //ask the customer to pay 
      x++;
       }
       
       } 
    else{
      q.enqueue(atoi(argv[i]),atoi(argv[i+1]));
      i++;
    }
  } 
  /*q.enqueue(5);  
  q.enqueue(1);
  q.dequeue();//5
  q.enqueue(7);
  q.dequeue();//1
  
  q.enqueue(6);
  q.dequeue();////7
  q.dequeue();//6
  
 q.enqueue(8);
   q.enqueue(9);
   q.enqueue(10);*/
  cout<<"==========================================="<<endl;

  }

