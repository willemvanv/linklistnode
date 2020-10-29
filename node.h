#ifndef NODE_H
#define NODE_H
#include <iostream>
#include <cstring>
#include "student.h"

using namespace std;

class node {
 public:
  //constructor and destructor
  node(student* Student);
  ~node();
  //set and get next
  void setNext(node* newnext);
  node* getNext();
  student* getstudent();
 private:
  //variables for next and the node's student
  student* nodeStudent;
  node* next;
};
#endif
