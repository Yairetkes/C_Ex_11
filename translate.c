#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_DIGITS_BIN 100
#define MAX_DIGITS_DEC 10

void reverse (char s[])
 /* reverse character string, a function from the book, ex. 1-19*/
{
	 int  string_length;
	 int i;
	 char tmp; /*  step  1:  calculate  length  of s */
	 string_length = 0;
	 while  (s[string_length]  !=  '\0')
		 string_length = string_length + 1 ;
		 /* step 2: reverse string */ 
	for(i=0;i<string_length/2; i++) 
	{
		tmp=s[i];
		s[i]=s[string_length-i-1];
		s[string_length-i-1]=tmp ;
	}
}


int translate_dec_hex(char dec[]) /*requested function*/
{
	char binNum[MAX_DIGITS_BIN]= {'0','\0'}; /*creating a char array (a string) which will express the binary 	       number.  the first cell in the array contains the char 0 representation, and all other cells in the 			array 	contain of the integer 0.*/

	unsigned int decInt = strtoul(dec,NULL,10);/*converting the decimal number (string) to int*/
	int i = 0;
	while (decInt != 0)
	{
		binNum[i] ='0' + decInt%2; /*collecting the remainders from devision by 2 at the array*/
		decInt = decInt/2; /*deviding by 2 (basically cutting out the fractions)*/
		i++;		
	}
	
	reverse(binNum); /*we have to reverse the array to get the binary number, as described at class*/
		printf("%s\n",binNum);/*printing the binary number*/
	
	
	return 0;
}

int main()
{
	char decNum[MAX_DIGITS_DEC] = {0};/*initializing a string(representing the decimal number) with maximum 10 		digits*/
	printf("Hello!\nPlease enter a decimal number:\n");/*friendly message for user*/
	scanf ("%s", decNum);/*input from user*/
	printf("\ngreat...\nyour number expressed in the base-2 numeral system is - ");
	translate_dec_hex(decNum);
	


	return EXIT_SUCCESS;


}
