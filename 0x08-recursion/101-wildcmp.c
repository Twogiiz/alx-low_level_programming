// File: 101-wildcmp.c
#include "main.h"

/**
 * wildcmp - Compares two strings and checks if they can be considered identical.
 * @s1: The first string.
 * @s2: The second string with the special character '*'.
 * Return: 1 if the strings can be considered identical, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
    // Base case: If both strings are empty, they are considered identical
    if (*s1 == '\0' && *s2 == '\0')
        return 1;

    // If the characters are the same, move to the next characters in both strings
    if (*s1 == *s2)
        return wildcmp(s1 + 1, s2 + 1);

    // If the second string has a '*', we can consider it as a wildcard
    if (*s2 == '*')
    {
        // Move to the next character in s2 (skip the '*')
        s2++;

        // If the next character in s2 is also '*', ignore one of the '*'
        if (*s2 == '*')
            return wildcmp(s1, s2);

        // Keep the '*' in s2, try matching the rest of the strings in both directions
        if (*s1 != '\0' && wildcmp(s1 + 1, s2))
            return 1;

        // If the above condition fails, ignore the '*' in s2 and move to the next character in s1
        return wildcmp(s1, s2);
    }

    // If none of the above conditions match, the strings are not identical
    return 0;
}
