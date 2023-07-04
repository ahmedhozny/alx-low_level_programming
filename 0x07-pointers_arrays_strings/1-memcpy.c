/**
 * _memcpy -copies n values from @src and pastes them to @dest
 * @dest: destination of copied characters
 * @src: source of characters to be copied
 * @n: first n elements to be copied
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
