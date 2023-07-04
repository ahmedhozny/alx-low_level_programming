/**
 * _strspn -gets the length of a prefix substring
 * @s: function will search in this string
 * @accept: segment to be searched for
 * Return: pointer to s
 */
unsigned int _strspn(char *s, char *accept)
{
	int count, i, j;

	count = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				j = -1;
				break;
			}
		}

		if (j != -1)
			break;
		count++;
	}

	return (count);
}
