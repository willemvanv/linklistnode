#include <iostream>
#include <cstring>
#include "node.h"
#include "student.h"

using namespace std;

node::node(int Id, float Gpa, char* NameFirst, char* NameLast) {
  nodeStudent = new student(Id, Gpa, NameFirst, NameLast);
  next = NULL;
}
node::~node() {
  delete &nodeStudent;
  next = NULL;
}
void node::setNext(node* newnext) {
  next = newnext;
}
node* node::getNext() {
  return next;
}
