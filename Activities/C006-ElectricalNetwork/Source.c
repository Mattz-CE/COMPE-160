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
**  Description:  Calculates current sources f from voltage drop array A[6][4].
**
**        Input:  None
**
**       Output:  The final set of value from 
**
**    Algorithm:  Using Dot product, the value of sets of voltage input will output as current sources f.
**
**      Caveats:
**      Version:  1.0.1
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
int u[N] = {1, -1, 0, 0};
int e[M] = {2, 1, -1, 1, -1, 0};
double c[M][M] = {0};
double w[M] = {0};
// double w[M] = {.2, 1, -1, 1, -1, 0};
double at[N][M];
double f[4] = {-2.2, 2.2, 0, 0};

int dot_product(int v[], int u[], int n)
{
	int result = 0;
	for (int i = 0; i < n; i++)
		result += v[i] * u[i];
	return result;
}
void amnout()
{
	printf("A[M][N] Array:\n");
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%d    ", a[i][j]);
		}
		{
			printf("\n");
		}
	}
	{
		printf("\n");
	}
}

void emout()
{
	printf("Voltage Drops e[6]:\n");
	for (int i = 0; i < M; i++)
	{
		double dot = 0.0;
		for (int j = 0; j < N; j++)
		{
			dot += a[i][j] * u[j];
		}
		e[i] = b[i] - dot;
	}

	for (int i = 0; i < 6; i++)
	{
		printf("%d\n", e[i]);
	}
	printf("\n");
}
void cmmout()
{
	printf("C[M][M] Array:\n");
	for (int i = 1; i < 6; i++)
	{
		c[i][i] = 1;
	}//Initializatio for CMM array
	c[0][0] = 0.1;
	for (int i = 1; i < 6; i++)
	{
		c[i][i] = 1;
	}//Initializatio for CMM array

	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			printf("%0.1lf:    ", c[i][j]);
		}
		{
			printf("\n");
			printf("\n");
		}
	}
}

void wout()
{
	printf("Current w[M]:\n");
	for (int i = 0; i < M; i++)
	{
		double dot = 0.0;
		for (int j = 0; j < M; j++)
		{
			dot += c[i][j] * e[j];
		}
		w[i] = dot;
	} //w[i] == dotproduct(c[i], w[i]);

	for (int i = 0; i < 6; i++)
	{
		printf("%0.1lf\n", w[i]);
	}
	printf("\n");
}

void reverseA()
{
	printf("AT[N][M] Array:\n");
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			at[i][j] = a[j][i];
			printf("%0.1lf    ", at[i][j]);
		}
		printf("\n");
		printf("\n");
	}
	printf("\n");
	printf("\n");
}

void functionf()
{
	printf("Current source f[N]:\n");
	// int v = 0;
	// for (int i; i < N; i++)
	// {
	// 	for (int j; j < M; j++)
	// 	{
	// 		if (v < M)
	// 		{
	// 			f[v] += at[i][j] * w[j];
	// 		}
	// 	}
	// 	v++;
	// }

for (int i = 0; i < N; i++)
	{
		double dot = 0.0;
		for (int j = 0; j < M; j++)
		{
			dot += at[i][j] * w[j];
		}
		f[i] = dot;
	}

	//w[i] == dotproduct(at[i], w[i]);
	for (int i = 0; i < 4; i++)
	{
		printf("%0.1lf\n", f[i]);
	}
	printf("\n\n");
}

int main()
{

	printf("\n\n\n\n");
	amnout();
	emout();
	cmmout();
	wout();
	reverseA();
	functionf();
	return 0;
}