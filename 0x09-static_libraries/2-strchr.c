/**
 * _strchr -locates a character in a string
 * @s: function will search in this string
 * @c: needle
 * Return: pointer to s
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	if (c == '\0')
		return (s + i);
	return (0);
}
