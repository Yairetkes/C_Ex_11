#include <stdio.h>
#include <string.h>

#define MAX_STRING_LENGTH 128

int suffix(char str[], char c) /*the requested function*/
{
	int counter = 0;/*counting the number of times c is included in he string*/
	int length = strlen(str);	
	int i;
	if(str[length-1] == '\n') /*making sure that \n is ommited*/
	{
		str[length-1] = '\0'; 
	}
	for(i=0;i<length;i++)
	{
		if(str[i]==c)/*if we find the char c inside the string*/
		{
			counter++;
			printf("\n%s",str+i);/*printing sub-strings*/
		}
	}
	
	return counter;
}

int main()
{
	char c;
	char str[MAX_STRING_LENGTH];
	printf("\nHello!\nPlease enter one character-\n");/*friendly user message*/
	scanf("%c",&c);/*char input from keyboard*/
	getc(stdin);/*char input from file*/
	printf("\nNow, please enter a string-\n");/*friendly user message*/
	fgets(str, MAX_STRING_LENGTH, stdin);/*string input from selected input*/

	printf("\n%d\n",suffix(str,c));/*printing the output from function suffix*/
	return 0;
}
