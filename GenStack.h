#include <iostream>
#include <fstream>
#include <iostream>

using namespace std;

//header file for the GenStack
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

    int top;
    int size;
    char *myArray;//pointer to the char of the array becuase we dont know the size of myArray

};
