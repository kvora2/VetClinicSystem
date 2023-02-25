/*
*****************************************************************************
                        Assignment 1 - Milestone 2
Full Name  : Kelvin Vora
Student ID#: 157616210
Email      : kvora2@myseneca.ca
Section    : NCC

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
*****************************************************************************
*/

// !!! DO NOT DELETE THE BELOW 2 LINES !!!
#ifndef CORE_H
#define CORE_H

// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
// 
// Copy your work done from Milestone #1 (core.h) into this file
// 
// NOTE:
// - Organize your functions into the below categories
// - Make sure the core.c file also lists these functions in the same order!
// - Be sure to provide a BRIEF comment for each function prototype
// - The comment should also be copied to the core.c function definition
//
// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!


//////////////////////////////////////
// USER INTERFACE FUNCTIONS
//////////////////////////////////////

// Clear the standard input buffer
void clearInputBuffer(void);

// Wait for user to input the "enter" key to continue
void suspend(void);

//displays an error message if inputs anything other than a whole number
void clearStandardInputBuffer(void);

//////////////////////////////////////
// USER INPUT FUNCTIONS
//////////////////////////////////////

//will take input for whole number
int inputInt(void);

//will take input of just positive numbers
int inputIntPositive(void);

//will take input between particular range
int inputIntRange(int lowerb, int upperb);

//will take char input and check if it exists in provided string
char inputCharOption(const char *validchar);

//will take string input than check the size of it and returns if satisfied
void inputCString(char *inputstr, int minlen, int maxlen);

//will check the provided string throught comments, if valid or not and than prints it
void displayFormattedPhone(const char *c_string);

// !!! DO NOT DELETE THE BELOW LINE !!!
#endif // !CORE_H