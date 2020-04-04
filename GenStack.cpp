#include "GenStack.h"

//default constructor
GenStack::GenStack(){
  myArray = new char[128];
  size = 128;
  top = -1;
}

//overloaded consturctor
GenStack::GenStack(int maxSize){
  myArray = new char[maxSize];
  size = maxSize;
  top = -1;
}

//destructor
GenStack::~GenStack(){
  delete myArray;
}

void GenStack::push(char data){
  //check if full before attempting to insert or push
  myArray[++top] = data;
}

char GenStack::pop(){
  //check if empty before attempting to remove
  if(isEmpty()){
    cout << "Array is empty." <<endl;
    exit(-1);
  }
  return myArray[top--];
}

//helper functions
char GenStack::peek(){
  return myArray[top];
}
bool GenStack::isFull(){
  return (top == size-1);
}
bool GenStack::isEmpty(){
  return (top == -1);
}
