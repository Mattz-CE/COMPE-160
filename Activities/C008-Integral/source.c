/*
**   Assignment:  Laboratory Assignment 09
**
**     Filename:  Source.c
**
**       Author:  Matthew (Haiyi) Zhou
**        REDID:  823984402
**
**  Lab Section:  CompE160 laboratory section number 01
**       Lab TA:  Atieh Kashanis
**     Due Date:  April 13th, 2020
**
**  Description:  Calculates current sources f from voltage drop array A[6][4].
**
**        Input:  None
**
**       Output:  The final set of value from 
**
**    Algorithm:  Using Dot product, the value of sets of voltage input will output as current sources f. Then, 
                  it searches for a randomly generated index of array value and tells where the value is.
**
**      Caveats:
**      Version:  1.0.1
**
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <string.h>

#define bottom 1
#define upper 2

double a = bottom, b = upper, y , x = 1;

double f(double x)
{
    return 1 / x;
}

double rectangle_method(double a, double b, int N)
{
    double dx = 0, temp = 0, area = 0;
    dx = (b - a) / N;
    for(int i = 0; i < N; i++)
    {
        temp = (a + dx / 2) + i * dx;
        // arr[i] = (i / N+ (i+1) / N); 
        area = area + f(temp) * dx;
    }
    return area;
}

double trapezoid_method(double a, double b, int N)
{
    
    return 0;
}

int main()
{
    double result = rectangle_method(1,2,10);
    printf("The result for 10 interval rectangle method integration will be: %f\n" , result);
    result = rectangle_method(1,2,100);
    printf("The result for 100 interval rectangle method integration will be: %f\n" , result);
    result = rectangle_method(1,2,1000);
    printf("The result for 1000 interval rectangle method integration will be: %f\n" , result);
    result = rectangle_method(1,2,10000);
    printf("The result for 10000 interval rectangle method integration will be: %f\n" , result);

    result = trapezoid_method(1,2,10);
    printf("The result for 10 interval trapezoid method integration will be: %f\n" , result);
    result = trapezoid_method(1,2,100);
    printf("The result for 100 interval trapezoid method integration will be: %f\n" , result);
    result = trapezoid_method(1,2,1000);
    printf("The result for 1000 interval trapezoid method integration will be: %f\n" , result);
    result = trapezoid_method(1,2,10000);
    printf("The result for 10000 interval trapezoid method integration will be: %f\n" , result);

    return 0;
}
