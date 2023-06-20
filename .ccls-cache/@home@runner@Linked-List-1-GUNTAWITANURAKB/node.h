#include <iostream>
using namespace std;

class node
{
 private:
    int id;
	  string name; 
    node* next;
 public:
    node(int,string);
    void print();
    node* get_next();
    void set_next(node*);
   ~node();
};

node x(0,"");

typedef node* nodePtr;
nodePtr y;



node::~node(){
  cout << name << " deleted" << endl;
}

node* node::get_next(){
  return next;
}

void node::set_next(node* x){
  next = x;
}

node::node(int i, string n){
  id = i;
  name = n;
  next = NULL;
}

void node::print(){
  cout << "Id: " << id << "Name: " << name << endl; 
}