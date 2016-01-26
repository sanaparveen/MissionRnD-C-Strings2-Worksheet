/*

Problem : Return the Count of how many times the word occurred in given string in two ways
Way1: Not using Recursion
Way2:Using Recursion [Optional]

Input : "Hello HelloAgain HelloAGAINAGAIN commonItsHelloagain","Hello"
Output : 4

Note: Dont modify original str or word,Just return count ,Spaces can also be part of words like "ab cd" in "ab cd ab cd" returns 2
*/

#include <stdlib.h>

int count_word_in_str_way_1(char *str, char *word){

	int index1, index2, wordLen = 0, strLen = 0;
	int count = 0;
	int value = 0;

	while (str[strLen] != '\0')
		strLen++;
	while (word[wordLen] != '\0')
		wordLen++;
	for (index1 = 0; index1 <= strLen - wordLen; index1++)
	{
		value = 0;
		for (index2 = index1; index2 < index1 + wordLen; index2++)
			if (str[index2] != word[index2 - index1])
			{
				value = 1;
				break;
			}

		if (value == 0)
			count++;
	}

	return count;
}

int count_word_int_str_way_2_recursion(char *str, char *word){
	return 0;
}

