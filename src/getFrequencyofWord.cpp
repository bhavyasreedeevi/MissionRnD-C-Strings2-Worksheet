/*

Problem : Return the Count of how many times the word occurred in given string in two ways
Way1: Not using Recursion
Way2:Using Recursion [Optional]

Input : "Hello HelloAgain HelloAGAINAGAIN commonItsHelloagain","Hello"
Output : 4

Note: Dont modify original str or word,Just return count ,Spaces can also be part of words like "ab cd" in "ab cd ab cd" returns 2
*/

#include <stdlib.h>
#include<string.h>
int count_word_in_str_way_1(char *str, char *word){
	if (str == NULL || word == NULL)
		return 0;
	int i, j = 0, count = 0, count1 = 0;
	int l1 = strlen(str), l2 = strlen(word);
	if (l1 == 1 && l2 == 1)
	{
		if (str[0] == word[0])
			return(1);
		else
			return (0);
	}
	for (i = 0; i<l1;)
	{
		j = 0;
		count = 0;
		while ((str[i] == word[j]) && str[i] != '\0')
		{
			count++;
			i++;
			j++;
		}
		if (str[i - 1] == word[0] && l2 != 1)
			i--;
		if (count == l2)
		{
			count1++;
			count = 0;
		}
		else
			i++;
	}

	if (count1 != 0)
		return count1;
	else
		return 0;
}

int count_word_int_str_way_2_recursion(char *str, char *word){

		return 0;
}