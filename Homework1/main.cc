// Nathan Lewis
// 1/23/2019
// This is the main file for homework 1

#include <iostream>
#include "functions.h"

int main(int argc, char **argv)
{
  std::string target; // this will be the word we look for
  std::string result; // this is the replacement
  std::string initial; // the text before being edited
  std::string finished; // the text after being edited

  target = argv[1]; // grabs target from first argument
  result = argv[2]; // grabs replacement from second argument

  initial = read(); // reads the text in from file1
  finished = replace(target, result, initial); // replaces words
  write(finished); // writes new text to file2
  

  return 0;
}
