/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>

char * get_last_word(char * str){

	
	char *result = (char *)malloc(10);
	int index = 0, result_index = 0, lastCount = 0;
	if (str == NULL)
		return NULL;

	for (index = 0; str[index] != '\0'; index++)
	if (str[index] == ' ')
		result_index = 0;
	else
	{
		result[result_index++] = str[index];
		lastCount = result_index;
	}
	result[lastCount] = '\0';
	return result;
}
