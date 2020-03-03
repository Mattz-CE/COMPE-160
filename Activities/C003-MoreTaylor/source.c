/*
**   Assignment:  Laboratory Assignment 04
**
**     Filename:  source.c
**
**       Author:  Matthew (Haiyi) Zhou
**        REDID:  823984402
**
**  Lab Section:  CompE160 laboratory section number 01
**       Lab TA:  Atieh Kashanis
**     Due Date:  Feburary 17, 2020
**
**  Description:  An application calculates a root value for a equation using Taylor Series.
**
**        Input:  The user enters a value.
**
**       Output:  The iteration counts; x/root-value; f(x) value.
**
**    Algorithm:  Calculates the root (y = 0; x-value) via x1 = x0 - f(x)/f'(x).
**
**      Caveats:
**      Version:  1.0.0
**
*/
#include <stdio.h>
#include <math.h>


int main()
{
	double y = 0, x = 0, num, dem;
	int i;
	scanf("%lf", &x);
	for(i = 0; i != 11; i++)
	{
		num = pow(x, 3) + x - 2 * pow (x, 2) - 3;
		y = num;
				dem = 3 * pow (x, 2) - 4 * x + 1;
		printf("i: %d, x: %.16lf, f(x): %.16lf\n",
				i, x, y);
		x = x - num / dem;
	}
	return 0;
}
