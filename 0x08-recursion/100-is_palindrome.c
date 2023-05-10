#include "main.h"

/**
* is_palindrome - prints palindrome
*
* @s: string to check
*
* Return: true if string is a palindrome
*
*/
int is_palindrome(char *s)
{
	int index = 0;
	int len = _strlth(s);

	if (!(*s))
		return (1);

	return (chck_palindrome(s, len, index));
}
/**
 * _strlth - length of a string
 *
 * @s: string
 *
 * Return: length of the string
 *
 */
int _strlth(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len += _strlth(s + len);
	}

	return (len);
}
/**
 * chck_palindrome - checks string is palindrome
 *
 * @s: string
 *
 * @len: length of s
 *
 * @index: index of the string to be checked
 *
 * Return: 1 if palindrome or  0 if not
 *
 */
int chck_palindrome(char *s, int len, int index)
{
	if (s[index] == s[len / 2])
		return (1);

	if (s[index] == s[len - index - 1])
		return (chck_palindrome(s, len, index + 1));

	return (0);
}
