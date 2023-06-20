#include "node.h"

class LL{
   nodePtr head; //head of linked list
   int size;
  public:
     LL();
      void insert_node(string,int);
	    void print_all();
     ~LL();
};
LL::LL(){
  head = NULL;
  size = 0;
}

void LL:: insert_node(string n, int i){

  //create a node
  nodePtr new_node = new node(i, n);

  //connect
  if (head == NULL) head = new_node;
  else{ //connect to the last node
      nodePtr t = head;
          while (t->get_next() != NULL) t=t->get_next();
          t->set_next(new_node);  
  }
  size++;
}

void LL:: print_all(){
  nodePtr t;
  for(t = head; t != NULL; t = t->get_next()){
  t->print();
  }
}

LL:: ~LL(){
  for(nodePtr tmp = head; tmp; tmp = head) {
    head = head->get_next();
    delete tmp;
  }
}

