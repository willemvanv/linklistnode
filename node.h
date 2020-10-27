#ifndef NODE_H
#define NODE_H
#include <iostream>
#include <cstring>
#include "student.h"

using namespace std;

class node {
 public:
  //constructor and destructor
  node(int Id, float Gpa, char* NameFirst, char* NameLast);
  ~node();
  //set and get next
  void setNext(node* newnext);
  node* getNext();
 private:
  //variables for next and the node's student
  student* nodeStudent;
  node* next;
};
#endif
