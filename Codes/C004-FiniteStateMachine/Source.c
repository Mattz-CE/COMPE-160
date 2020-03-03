/*
**   Assignment:  Laboratory Assignment 05
**
**     Filename:  Source.c
**
**       Author:  Matthew (Haiyi) Zhou
**        REDID:  823984402
**
**  Lab Section:  CompE160 laboratory section number 01
**       Lab TA:  Atieh Kashanis
**     Due Date:  Feburary 24, 2020
**
**  Description:  An application detects a sequence of characters that consist of zero or more ‘A’ characters
**  followed by a ‘B’ and then a ‘D’, or the sequence ‘ABD’.
**
**        Input:  The user enters a sequence.
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

typedef enum {true, false} bool;

bool aa = 0, bb = 0, cc = 0, dd = 0;
int seqcounts = 0;
char state;
int main()
{
	printf("\n\n\n");
	while((state = getchar()) != EOF)
	{
		if(bb == 1, dd == 1)
				{
					seqcounts++;
					aa = bb = cc = dd = 0;
				}else if(cc == 1, dd == 1){
					seqcounts++;
					aa = bb = cc = dd = 0;
				}
		switch(state){
		case 'a':
			aa = 1;
			bb = 0;
			cc = 0;
			dd = 0;
			break;
		case 'b':
			bb = 1;
			break;
		case 'c':
			if(aa == 1)
			{
				cc = 1;
			}
			break;
		case 'd':
			if(cc == 1)
			{
				dd = 1;
			}else if(bb == 1){
				dd = 1;
			}
			break;
		default:
			break;
		}
		if(bb == 1, dd == 1)
				{
					seqcounts++;
					aa = bb = cc = dd = 0;
				}else if(cc == 1, dd == 1){
					seqcounts++;
					aa = bb = cc = dd = 0;
				}
	}
	printf("Sequence Counts: ");
	printf("%d", seqcounts);
	printf("\n\n\n");
	return 0;
}
