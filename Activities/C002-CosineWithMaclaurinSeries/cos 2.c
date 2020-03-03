/*
 **   Assignment:  Laboratory Assignment 03 "Maclaurin Series Expansion for Cosine"
 **
 **     Filename:  cos.c
 **
 **       Author:  Matthew (Haiyi) Zhou
 **        REDID:  823984402
 **
 **  Lab Section:  CompE160 laboratory section number 01
 **       Lab TA:  Atieh Kashani
 **     Due Date:  Feb. 6th 15:00
 **
 **  Description:  This program calculates a cosine(x) value asking the user to input the value for x.
 **
 **        Input:  The Base value x.
 **
 **       Output:  The k value, result value for the estimate, and the error index.
 **
 **    Algorithm:  Utilizing while functions to calculate iterations of k values for each Maclaurin iteration.
 **
 **      Caveats:  It goes to infininity and I am madddddd; Update: it's fixed XD
 **      Version:  1.0
 **
 */

#include <stdio.h>
#include <math.h>


unsigned long long factorial(int n1)
{
	if (n1 <= 1)
		return 1;
	else
		return n1 * factorial(n1 - 1);
}

//unsigned long long int factorial(unsigned int n){if (n <= 1) {return 1;} else { return (n * factorial(n - 1));}}

int main()
{
	double result = 0, num;
	double x;// User input value base for function power
	double err;
	scanf("%lf", &x);
	unsigned long long dem;
	for(int k = 0; k <= 10; k++)
	{
		num = pow(-1, k) * pow(x, 2 * k);
		dem = factorial(2 * k);
		result = result + num / dem;
		err = result - cos(x);
		err = fabs(err);
		printf("k: %d, result: %.15f, err: %.15f\n",
				k, result, err);
	}

	return 0;
}

