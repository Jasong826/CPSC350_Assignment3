#include <iostream>

using namespace std;

class GenStack{
  public:

    GenStack();//default
    GenStack(int maxSize);//overloaded
    ~GenStack();//destructor

    //core functions
    void push(char data); //insert an item
    char pop(); //remove

    //aux/helper functions
    char peek(); //AKA top
    bool isEmpty();
    bool isFull();
    void printError(int numLine);

    int top;
    int mSize;
    char *myArray;//pointer to the char of the array becuase we dont know the size of myArray

};
