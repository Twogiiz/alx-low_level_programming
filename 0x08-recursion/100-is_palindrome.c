// File: 100-is_palindrome.c
#include "main.h"

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The input string to check.
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
    int len = _strlen_recursion(s);
    return check_palindrome(s, 0, len - 1);
}

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: Pointer to the string.
 * Return: Length of the string.
 */
int _strlen_recursion(char *s)
{
    if (*s == '\0')
        return 0;

    return 1 + _strlen_recursion(s + 1);
}

/**
 * check_palindrome - Helper function to check if a string is a palindrome.
 * @s: Pointer to the string.
 * @start: The start index of the current substring.
 * @end: The end index of the current substring.
 * Return: 1 if the substring is a palindrome, 0 otherwise.
 */
int check_palindrome(char *s, int start, int end)
{
    if (start >= end)
        return 1;

    if (s[start] != s[end])
        return 0;

    return check_palindrome(s, start + 1, end - 1);
}
