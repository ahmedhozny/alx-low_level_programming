#include "main.h"

/**
 * _strlen_recursion -returns the length of a given string
 * @s: String to be measured
 * Return: length of the given string
 */
int _strlen_recursion(char *s)
{
	return ((*s == '\0') ? 0 : (1 + _strlen_recursion(s + 1)));
}

/**
 * is_palindrome -checks whether s is palindrome
 * @s: String to be checked
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);

	return (checks_palindrome(s, (s + len - 1)));
}

/**
 * checks_palindrome -checks whether s is palindrome
 * @s1: pointer to string that move from left to right
 * @s2: pointer to string that move from right to left
 * Return: 1 if palindrome, 0 otherwise
 */
int checks_palindrome(char *s1, char *s2)
{
	if (s1 >= s2)
		return (1);
	if (*s1 != *s2)
		return (0);
	return (checks_palindrome((s1 + 1), (s2 - 1)));
}
