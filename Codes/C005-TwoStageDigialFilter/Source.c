/*
**   Assignment:  Laboratory Assignment 06
**
**     Filename:  Source.c
**
**       Author:  Matthew (Haiyi) Zhou
**        REDID:  823984402
**
**  Lab Section:  CompE160 laboratory section number 01
**       Lab TA:  Atieh Kashanis
**     Due Date:  March 2nd, 2020
**
**  Description:  An application that computes y[n] given x[n], where s[n] is computed
recursively. Assume s[-1] and s[-2] = 0.0. Define N = 105, fs = 8 kHz and fi to be any one of the
frequencies 697, 770, 852, 941, 1209, 1336, 1477, or 1633 Hz, your choice.
**
**        Input:  None
**
**       Output:  The final value after recursive calculations
**
**    Algorithm:  A recursive calculation program with the equation:  x[n] + 2 * cos (omega) * array[n - 1] - array[n - 2]
**
**      Caveats:
**      Version:  1.0.0
**
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define N 105
#define fi 941
#define fs 8000
#define k N * fi / fs
#define pi 3.1415926

double omega = 2 * pi * k / N;
double s (int n);
double x[N + 1];
int n = 0, c = 0;

double array[N + 1] = { 0 };
double s ();

int main ()
{
  time_t t;
  srand ((unsigned) time (&t));
  for (int n = 0; n < (N + 1); n++)
    {
      x[n] = ((double) rand () / (RAND_MAX));
      s (n);
      printf ("%lf\n", x[n]);
    }
  printf ("Function Value:");
  printf ("\n%f", s (n));
  printf ("\nS Called: ");
  printf ("%d", c);
  printf ("\n\n\n\n");
  return 0;
}

double s (int n)
{
  c++;
  if (n < 0)
    {
      return 0;
    }
  else
    {
      array[n] = x[n] + 2 * cos (omega) * array[n - 1] - array[n - 2];
      return array[n];
    }
}
