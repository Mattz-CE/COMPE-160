/*
**   Assignment:  Laboratory Assignment 01 "Hello World"
**
**     Filename:  HelloWorld.c
**
**       Author:  Matthew (Haiyi) Zhou
**        REDID:  823984402
**
**  Lab Section:  CompE160 laboratory section number 01
**       Lab TA:  Name of your designated Teaching Assistant (Atieh Kashani)
**     Due Date:  Date and time this assignment is due for submission to your teaching assistant
**
**  Description:  This program asks the user to guess a number by placing an integer input into the shell
**  			  and the program replies an output with a true or false check.
**
**        Input:  The user inputs number and a yes or no statement
**
**       Output:  The string "hello, world" with a newline character.
**
**    Algorithm:  The program outputs a true or false check statement.
**
**      Caveats:
**      Version:  1.1
**
*/

#include <stdio.h>

int main()
{
	double e[6][6] = {0};
	e[0][0] = 0.1;
	for (int i = 1; i < 5; i++)
	{
		e[i][i] = 1;
		{
			printf("\n");
		}
	}
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			printf("%lf    ", e[i][j]);
		}
		{
			printf("\n");
		}
	}

	return 0;
}