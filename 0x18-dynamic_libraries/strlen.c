
// strlen.c
#include "strlen.h"
#include "main.h"
#include <stddef.h>

size_t _strlen(const char *str) {
    size_t len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}
