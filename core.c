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

#include <stdio.h>
#include <string.h>
#include "core.h"
int i;
// As demonstrated in the course notes:
// https://intro2c.sdds.ca/D-Modularity/input-functions#clearing-the-buffer
// Clear the standard input buffer
void clearInputBuffer(void){
    // Discard all remaining char's from the standard input buffer:
    while (getchar() != '\n')
    {
        ; // do nothing!
    }
}

// Wait for user to input the "enter" key to continue
void suspend(void)
{
    printf("<ENTER> to continue...");
    clearInputBuffer();
    putchar('\n');
}

//displays an error message if inputs anything other than a whole number
void clearStandardInputBuffer(void)
{
    printf("Error! Input a whole number: ");
}

//will take input for whole number
int inputInt(void)
{
    char newLine;
    int value;
    do
    {
        scanf("%d%c", &value, &newLine);
        if (newLine == '\n')
        {
            return value;
        }
        else if (newLine != '\n' || value != (int)value)
        {
            clearInputBuffer();
            clearStandardInputBuffer();
        }
    } while (newLine != '\n' || value != (int)value);
    return value;
}

//will take input of just positive numbers
int inputIntPositive(void)
{
    char newLine;
    int value;
    do
    {
        scanf("%d%c", &value, &newLine);
        if (newLine == '\n' && value > 0)
        {
            return value;
        }
        else if (newLine != '\n' || value <= 0)
        {
            printf("ERROR! Value must be > 0: ");
        }
    } while (1);
    return value;
}

//will take input between particular range
int inputIntRange(int lowerb, int upperb){
    int val = inputInt();
    if (lowerb == upperb){
        printf("Invalid %d-digit number! Number: ", lowerb);
        val = inputInt();
    }
    while (val < lowerb || val > upperb){
        printf("ERROR! Value must be between %d and %d inclusive: ", lowerb, upperb);
        val = inputInt();
    }
    return val;
}
char inputCharOption(const char *validchar)
{
    int len = strlen(validchar);
    int i;
    char opt;
    while (1){
        scanf(" %c", &opt);
        clearInputBuffer();
        int success = 0;
        for (i = 0; i < len; i++){
            if (opt == validchar[i]){
                success = 1;
                break;
            }
        }
        if (success == 1){
            break;
        }
        else{
            printf("Error! Character must be one of [%s]: ", validchar);
        }
    }
    return opt;
}

void inputCString(char *inputstr, int minlen, int maxlen){
    char resultstr[100];
    while (1){
        scanf(" %[^\n]%*c", resultstr);
        if (minlen == maxlen){
            if (strlen(resultstr) != minlen){
                printf("Invalid %d-digit number! Number: ", minlen);
            }
            else{
                break;
            }
        }
        else{
            if (strlen(resultstr) > maxlen){
                printf("ERROR: String length must be no more than %d chars: ", maxlen);
            }
            else if (strlen(resultstr) < minlen){
                printf("Error! String length must be between %d and %d chars: ", minlen, maxlen);
            }
            else{
                break;
            }
        }
    }
    strcpy(inputstr, resultstr);
}

//will check the provided string throught comments, if valid or not and than prints it
void displayFormattedPhone(const char *c_string)
{
    int count = 1;
    if (c_string != NULL)
    {
        for (i = 0; c_string[i] && count; i++)
        {
            if (c_string[i] < 48 || c_string[i] > 57)
            {
                count = 0;
            }
        }
    }
    if (count && i == 10)
    {
        printf("(");
        for (i = 0; i < 3; i++){
            printf("%c", c_string[i]);
        }
        printf(")");
        for (i = 3; i < 6; i++) {
            printf("%c", c_string[i]);
        }
        printf("-");
        for (i = 6; i < 10; i++) {
            printf("%c", c_string[i]);
        }
    }
    else
    {
        printf("(___)___-____");
    }
}