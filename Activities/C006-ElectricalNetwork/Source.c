/*
**   Assignment:  Laboratory Assignment 07
**
**     Filename:  Source.c
**
**       Author:  Matthew (Haiyi) Zhou
**        REDID:  823984402
**
**  Lab Section:  CompE160 laboratory section number 01
**       Lab TA:  Atieh Kashanis
**     Due Date:  March 16nd, 2020
**
**  Description:
**
**        Input:  None
**
**       Output:  The final value after recursive calculations
**
**    Algorithm:
**
**      Caveats:
**      Version:  1.0.0
**
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define M 6
#define N 4

int a[M][N] =
{{-1, 1, 0, 0},
{-1, 0, 1, 0},
{0, -1, 1, 0},
{-1, 0, 0, 1},
{0, -1, 0, 1},
{0, 0, -1, 1}};
int b[M] = {0, 12, 0, 0, 0, 0};
int u[N] = {-1, 1, 0, 0};
int e[M] = {2, 1, -1, 1, -1, 0};
int dot_product(int v[], int u[], int n)
{
    int result = 0;
    for (int i = 0; i < n; i++)
        result += v[i]*u[i];
    return result;
}
int main ()
{
    printf("\n\n\n\n");
	for(int i = 0; i < 6; i++)
	{
	for(int j = 0; j < 4; j++)
		{
			printf("%d    ", a[i][j]);
		}
        printf("\n");
	}
	
	for(int i = 0; i < 6; i++){
    printf("%d\n", e[i]);
}
	return 0;
}

