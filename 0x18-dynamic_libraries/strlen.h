// strlen.h
#ifndef STRLEN_H
#define STRLEN_H
// strlen.c
#include <stddef.h>

size_t _strlen(const char *str) {
    size_t len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}
