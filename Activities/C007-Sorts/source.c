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
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <string.h>
#define N 10000
#define Cap 100

int a[N] = {0};
int b[N] = {0};
int sc1, sc2, sc3 = 0;

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void sort()
{
    for (int pass = 1; pass < N; ++pass)
        for (int i = 0; i < N - pass; ++i)
            if (a[i] > a[i + 1])
            {
                swap(&a[i], &a[i + 1]);
                sc1++;
            }
    for (int i = 0; i < N; i++)
        printf("%4d", a[i]);
    puts("");
    printf("\n");
}

void selectionSort()
{
    int i, j, min;
    for (i = 0; i < N - 1; i++)
    {
        min = i;
        for (j = i + 1; j < N; j++)
            if (b[j] < b[min])
            {
                min = j;
                sc2++;
            }
        swap(&b[min], &b[i]);
    }
    for (int i = 0; i < N; i++)
        printf("%4d", b[i]);
}

int main()
{
    srand(time(0));
    for (int i = 0; i < N; i++)
    {
        a[i] = 1 + rand() % Cap;
        b[i] = a[i];
    }
    sort();
    selectionSort();
    printf("\nSwap 1 called: %d\n", sc1);
    printf("Swap 2 called: %d\n", sc2);
    return 0;
}
