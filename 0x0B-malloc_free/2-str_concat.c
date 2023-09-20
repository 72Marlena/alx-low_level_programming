#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: string 1 that's is appended from the \0
 * @s2: string 2 that is appending
 * Return: The output (new_str)
 *
 */

char *str_concat(char *s1, char *s2)
{
	char *new_str; /*The new string*/
	int i = 0; /*for looping*/
	int s1_len, s2_len; /*Holds the lengths of the 2 str*/

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";
	/*The lengths of the 2 str*/
	s1_len = strlen(s1);
	s2_len = strlen(s2);

	new_str = malloc((s1_len + s2_len) * sizeof(char) + 1);
	if (new_str == NULL)
		return (NULL);

	while (*s1 != '\0')
	{
		new_str[i] = s1[i];
	}
	while (*s2 != '\0')
	{
		new_str[s2_len + i] = s2[i];
	}
	return (new_str);
}
