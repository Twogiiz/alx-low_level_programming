#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
    long int num1, num2, result;

    if (argc != 3)
    {
        printf("Error\n");
        exit(98);
    }

    num1 = strtol(argv[1], NULL, 10);
    num2 = strtol(argv[2], NULL, 10);

    if (num1 == 0 || num2 == 0)
    {
        printf("Error\n");
        exit(98);
    }

    result = num1 * num2;
    printf("%ld\n", result);

    return (0);
}
