#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int testPalindrome(char str[], int s, int e){
	if(str[s] == ' ' || str[s] == '\'')
		s++;
	if(str[e] == ' ' || str[e] == '\0')
		e--;
	if (str[s] != str[e] && str[e] != '\0')
		return 0;
	if (s < e +1)
		return testPalindrome(str, s + 1, e-1);
	return 1;
}

int main()
{
	int j,size;
	printf("Enter the size of your string: ");
	int n = 0;
	scanf("%d",&n);
	if (n<=0){
		printf("error");
		return -1;
	}
	printf("Enter your string to check if it is a palindrome: ");
	
	char str[n];
	char str2[n];
	
	scanf(" %[^\n]&*c",str);
	
	for(int l = 0; l < n ; l++)
		str2[l] = str[l];
	
	for(int i = 0 ; str2[i] != '\0'; ++i){
		while (!((str2[i] >= 'a' && str2[i] <= 'z')||(str2[i] >= 'A' && str2[i] <= 'Z' || str2[i] == '\0')||
				 (str2[i] != '0') || (str2[i] != '1')||(str2[i] != '2')|| (str2[i] != '3') ||
				 (str2[i] != '4')||(str2[i] != '5')||(str2[i] != '6')||(str2[i] != '7')||(str2[i] != '8')||
				 (str2[i] != '9')) || (str2[i] == ' '))
		{
			for (j = i; str2[j] != '\0' ; ++j){
				str2[j] = str2[j+1];
			size--;
			}
			str2[j] = '\0';
		}
	
	int str2size = strlen(str2);
	
	if(testPalindrome(str2, 0 , str2size) == 1)
		printf("\"%s\" is a palidrome.\n",str);
	else
		printf("\"%s\" is not a palidrome.\n",str);
	return 0;
}
}