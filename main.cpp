#include "DelimiterChecker.h"


//this main function creates an instance of the delimiter checker object
int main(int argc, char **argv){

  string fileName = argv[1];

  cout << "---------------------------------------" << endl<< "Welcome to the syntax checker!" <<endl;
  DelimiterChecker checker;

  checker.check(fileName);
  cout << "All done!"<< endl << "---------------------------------------" << endl;

  return 0;
}
