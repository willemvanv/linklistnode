#include <iostream>
#include <cstring>
#include "node.h"
#include "student.h"

using namespace std;

node::node(student* Student) {
  nodeStudent = Student;
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
student* node::getstudent() {
  nodeStudent->getStudent();
}
