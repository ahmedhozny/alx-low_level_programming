/**
 * _strstr -locates a substring
 * @haystack: function will search in this string
 * @needle: segment to be searched for
 * Return: pointer to s
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;
	char *h, *n;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		h = (haystack + i);
		n = (needle + i);
		for (j = 0; n[j] != '\0' && haystack[i] == n[j]; j++)
			h++;

		if (n[j] == '\0')
			return (haystack);
		haystack++;
	}

	return (0);
}
