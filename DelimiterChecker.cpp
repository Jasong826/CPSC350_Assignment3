#include "DelimiterChecker.h"

//this class contains functions to help check the file for any errors with delimiters
void DelimiterChecker::check(string fileName){
  //initialize variables
  ifstream file;
  int total = 0;
  int count = 0;
  string line = "";

  file.open(fileName);

  if(!file.is_open()){
    cout << "Failed to open file! Make sure to type out the file name in the command line!" << endl;
    exit(-1);
  }
  else{
    cout << "File has been opened successfully!" << endl;
  }

  //get total number of char in the file
  while(getline(file, line)){
    for(int i = 0; i<line.length(); ++i){
      ++total;
    }
  }


  //while loop through the file to count for any delimiters
  cout << "Checking through the file for any errors.. " << endl;
  while(getline(file, line)){
    ++count;
    for(int i = 0; i < line.length(); ++i){
      if(line[i] == '{'){
        cout << "Found a curly bracquet!" << endl;
        g.push(line[i]);
      }
      else if(line[i] == '}'){
        if(g.isEmpty()){
          printError(count);
        }
      }
      else if(line[i] == '('){
        cout << "Found a paranthese!" << endl;
        for(int j = i+1; j < total; ++j){
          if(line[j] == ')'){
            break;
          }
          if(j == total){
            printError(count);
          }
      }
    }
      else if(line[i] == '['){
        cout << "Found a bracquet!" << endl;
        for(int j = i+1; j < total; ++j){
          if(line[j] == ']'){
            break;
          }
          if(j == total){
            printError(count);
          }
        }
      }
    }
    file.close();
  }
}

//this functions prints out the error statement in proper format
void DelimiterChecker::printError(int count){
  cout << "Line " << count << ": Not a complete delimiter. " << endl;
}
