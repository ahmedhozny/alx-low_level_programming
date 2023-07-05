/**
 * set_string - Sets the value of a pointer to a char.
 * @s: Pointer to the pointer that will be set.
 * @to: Pointer to the character that will be assigned.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
