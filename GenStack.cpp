#include "GenStack.h"

//default constructor
GenStack::GenStack(){
  myArray = new char[128];
  mSize = 128;
  top = -1;
}

//overloaded consturctor
GenStack::GenStack(int maxSize){
  myArray = new char[maxSize];
  mSize = maxSize;
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
    return '\t';
  }
  return myArray[top--];
}

char GenStack::peek(){
  return myArray[top];
}

bool GenStack::isFull(){
  return (top == mSize-1);
}

bool GenStack::isEmpty(){
  return (top == -1);
}

void GenStack::printError(int numLine){
  cout << "Line " << numLine << ": ";
  //include if statements for the type of error
}
