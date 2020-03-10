/*  
**  Author: Matt
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <string.h>
#define N 7200
#define Cap 200

int a[N] = {0};



void freq()
{
    int answer;
    int rating;
    int frequency[Cap] = {0};
    for (answer = 0; answer < N; answer++)
        ++frequency[a[answer]];
    printf("%s%17s\n", "Rating", "Frequency");

    for (rating = 1; rating < Cap + 1; rating++)
        printf("%6d%17d\n", rating, frequency[rating]);
        //Range for the frequencies
    int high = 0;
    int low = Cap + 1;
    for (int i = 0 ; i < Cap + 1 ; i++)
    {
        if (frequency[i] > high)
        {
            high = frequency[i];
        }
    }
    for (int i = 1 ; i < Cap + 1 ; i++)
    {
        if (frequency[i] < low)
        {
            low = frequency[i];
        }
    }
    int range = high - low;
    printf("Range: %6d\n", range);
}

void sort()
{
    srand(time(0));
    for (int i = 0; i < N; i++)
        a[i] = 1 + rand() % Cap;
    for (int pass = 1; pass < N; ++pass)
        for (int i = 0; i < N - pass; ++i)
            if (a[i] > a[i + 1])
            {
                int hold = a[i];
                a[i] = a[i + 1];
                a[i + 1] = hold;
            }
    for (int i = 0; i < N; i++)
        printf("%4d", a[i]);
    puts("");
    printf("\n");
}

int main()
{
    sort();
    freq();
    return 0;
}