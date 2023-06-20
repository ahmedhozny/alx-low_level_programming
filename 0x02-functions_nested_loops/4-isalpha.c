#include "main.h"

/**
 * main - Main block
 *
 * Return: Always 0.
 */
int _isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z') ? 1 : 0);
}

