/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>

char * get_last_word(char * str){

	if (str == NULL)
		return NULL;
	else
	{
		int i = 0, j=0, k, x = 0;
		char *lastword = (char*)malloc(10 * sizeof(char));
		while (str[i] != '\0')
		{
			i++;
		}
		
		for (j = i - 1; j >= 0; j--)
		{
			if (str[j] == ' ' )
			{
					break;
			}
		}
		for (k = j + 1; str[k] != '\0'; k++)
		{
			lastword[x] = str[k];
			x++;
		}
		lastword[x] = '\0';
		return lastword;
	}
}
