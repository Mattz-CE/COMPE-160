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

int binarySearch(int a[], int l, int r, int z) 
{ 
    sc3++;
    if (r >= l) { 
        int mid = l + (r - l) / 2; 
        if (a[mid] == z) 
            return mid; 
        if (a[mid] > z) 
            return binarySearch(a, l, mid - 1, z); 
        return binarySearch(a, mid + 1, r, z); 
    }
    return -1; 
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

    int n = sizeof(a) / (2 * sizeof(a[0]));
    int j = rand() % Cap;
    printf("\nj = %d\n" , j); 
    int z = a[j];
    printf("\nz = %d\n" , z); 
    int result = binarySearch(a, 0, n - 1, z); 
    (result == -1) ? printf("Element is not present in array") 
                   : printf("Element is present at index %d", result); 
    printf("\nSearch called: %d\n", sc3);
    return 0;
}
