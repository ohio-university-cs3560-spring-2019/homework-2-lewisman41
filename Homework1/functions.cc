// Nathan Lewis
// 1/23/2019
// This is the function library

#include <iostream>
#include <string>
#include "functions.h"

std::string read()
{
  std::string full_text; // This is the text from the entire file
  std::string tmp; // This is a temp variable to hold the next line

  getline(std::cin, tmp); // grabs first line
  full_text += tmp; // adds it to full_text
  full_text += '\n'; // adds a new line character
		      
  while(!std::cin.eof()) // goes until end of file
    {
      getline(std::cin, tmp); // same process but this time inside loop
      full_text += tmp;
      full_text += '\n';
    }

  return full_text; // returns entire text file
}

void write(std::string finished)
{
  std::cout << finished; // outputs the finished text
}

std::string replace(std::string target, std::string result, std::string initial)
{
  bool status = true; // used to check for word
  
  for(size_t i = 0; i < initial.length(); i++) // for loop that goes through entire text
    {
      if(initial[i] == target[0]) // beginning of target is equal to current letter in text (lowercase for comparison)
	{
	  for(size_t j = 1; j < target.length(); j++) // for loop that goes through target
	    {
	      if(target[j] != initial[i + j]) // current letter in target is not equal to next letter in text
		{
		  status = false; // status is false
		  j = target.length(); // kill loop
		}
	    } // **end of inside for loop
	  if(status == true) // if status stayed true
	    {
	      initial.replace(i, target.length(), result); // replace the target with the replacement
	    }
	} // **end of big if statement
      status = true; // reset status
    } // **end of outer loop
  
  return initial; // returns the edited text
}

	      
