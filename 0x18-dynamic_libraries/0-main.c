
#include "main.h"
#include "strlen.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
     const char *str = "My Dyn Lib";
    size_t len = _strlen(str);
    printf("%zu\n", len);
    return (EXIT_SUCCESS);
}

