/*  
**  Author: Matt
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define N 7200

typedef enum {true, false} bool;

bool aa = 0, bb = 0, cc = 0, dd = 0;
int seqcounts = 0;
char state;
int main()
{
	printf("\n\n\n");
    for()
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
		case '1':
			aa = 1;
			bb = 0;
			cc = 0;
			dd = 0;
			break;
		case '2':
			bb = 1;
			break;
		case '3':
			if(aa == 1)
			{
				cc = 1;
			}
			break;
		case '4':
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



