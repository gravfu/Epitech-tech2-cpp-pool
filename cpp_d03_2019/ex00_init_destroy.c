/*
** EPITECH PROJECT, 2020
** cpp_d03_2019
** File description:
** my_string
*/

#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include "string.h"
#include "ex01_assign.c"
#include "ex02_append.c"
#include "ex03_at.c"
#include "ex04_clear.c"
#include "ex05_size.c"
#include "ex06_compare.c"
#include "ex07_copy.c"
#include "ex08_c_str.c"
#include "ex09_empty.c"
#include "ex10_find.c"
#include "ex11_insert.c"
#include "ex12_to_int.c"

void string_init(string_t *this, const char *s)
{
    this->str = malloc(sizeof(char) * (strlen(s) + 1));
    this->str = strcpy(this->str, s);
    this->assign_s = &assign_s;
    this->assign_c = &assign_c;
    this->append_s = &append_s;
    this->append_c = &append_c;
    this->at = &at;
    this->clear = &clear;
    this->size = &size;
    this->compare_c = &compare_c;
    this->compare_s = &compare_s;
    this->copy = &copy;
    this->c_str = &c_str;
    this->empty = &empty;
    this->find_c = &find_c;
    this->find_s = &find_s;
    this->insert_c = &insert_c;
    this->insert_s = &insert_s;
    this->to_int = &to_int;
}

void string_destroy(string_t *this)
{
    if (this->str != NULL)
        free(this->str);
}