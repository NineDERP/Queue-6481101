#include "node.h"

class Queue {
  NodePtr headPtr, tailPtr;
  int size;

public:
  void enqueue(int,int);
  int dequeue();
  void printorder();
  Queue();
  ~Queue(); // dequeue all
};

Queue::Queue(){
  size=0;
  headPtr=NULL;
  tailPtr=NULL;
}

Queue::~Queue(){
 int i;
 int n=size;

  cout<<"There are "<<n<<" ppl left in queue"<<endl;
  //while(size>0)
  for(i=0;i<n;i++)
    dequeue();

}
void Queue::enqueue(int x,int y) {
  NodePtr new_node = new NODE(x,y); // 1.Create
 if(new_node){
  if(size==0){// 2.1 change head
    headPtr=new_node;
 }
  else{ tailPtr->set_next(new_node);
    //2.2 connect tail
  }
   cout<<"my order is "<<x<<endl;
   
// 3 change tail
   tailPtr=new_node;
// 4. increase size
   ++size;
  }
else cout<<"Not enough memory"<<endl;
}

int Queue::dequeue() {
  int value;
  NodePtr t;
 if(headPtr){
  // 1. Save the node to be deleted
 t= headPtr;

    // 1.5 take the value out to value
  value=t->get_value();
    // 2. move (head)
   headPtr=headPtr->get_next();
   
   
    if(size==1) tailPtr=NULL;
   size--;
    // 3. delete
   delete t;
   return value;
  }
  return -1;
}
void Queue::printorder(){
if(headPtr->get_ordrnum()==1)//ramen
    cout<<"Ramen"<<endl;
    else if(headPtr->get_ordrnum()==2)//Somtum
    cout<<"Somtum"<<endl;
    else if (headPtr->get_ordrnum()==3)//Fried Chicken
    cout<<"Fried Chicken"<<endl;
    else cout<<"We don't have that item"<<endl;
}