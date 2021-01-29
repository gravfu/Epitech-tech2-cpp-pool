/*
** EPITECH PROJECT, 2020
** cpp_d02m_2019
** File description:
** func_ptr
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "func_ptr.h"

void print_normal(const char *str)
{
    printf("%s\n", str);
}

void print_reverse(const char *str)
{
    char *tmp = malloc(sizeof(char) * (strlen(str) + 1));
    int i;
    char swap;
    tmp = strcpy(tmp, str);
    for (i = 0; tmp[i] != '\0'; i++);
    for (int j = 0; j < i / 2; j++) {
        swap = tmp[j];
        tmp[j] = tmp[i - j - 1];
        tmp[i - j - 1] = swap;
    }
    printf("%s\n", tmp);
}

void print_upper(const char *str)
{
    int len = strlen(str);

    for (int i = 0; i < len; i++) {
        printf("%c", toupper(str[i]));
    }
    printf("\n");
}

void print_42(const char *str)
{
    (void) str;
    printf("42\n");
}

void do_action(action_t action , const char *str)
{
    void (*do_it[4])(char const *);

    do_it[0] = print_normal;
    do_it[1] = print_reverse;
    do_it[2] = print_upper;
    do_it[3] = print_42;
    do_it[action](str);
}