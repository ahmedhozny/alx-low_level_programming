#include "main.h"

/**
 * cap_string -capitalises all works in a given in string
 * @s: string with words to be capitalised
 *
 * Return: pointer to @s
 */
char *cap_string(char *s)
{
	const char separators[] = {' ', '\n', '\t', ',', ';', '.', '!', '?', '\"', '(', ')', '{', '}'};
	int i, j, flag;

	flag = 1;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
		{
			flag = 0;
			continue;
		}

		if ((s[i] >= 'a' && s[i] <= 'z') && flag)
		{
			flag = 0;
			s[i] -= 32;
			continue;
		}

		flag = 0;

		for (j = 0; j < 12; j++)
		{
			if (s[i] == separators[j])
			{
				flag = 1;
				break;
			}
		}
	}

	return (s);
}
