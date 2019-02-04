// Nathan Lewis
// 1/23/2019
// This is the header file for my function library

#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <iostream>

std::string read(); // This is the function that returns the entire text file in one string

void write(std::string finished); // This function writes the edited text to the output

std::string replace(std::string target, std::string result, std::string initial); // This function finds all
                                                                                  // occurences of a target and replaces them with
                                                                                  // the replacement text


#endif
