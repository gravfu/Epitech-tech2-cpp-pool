/*
** EPITECH PROJECT, 2020
** cpp_d03_2019
** File description:
** string
*/

#ifndef STRING_H_EPI_
#define STRING_H_EPI_

typedef struct string_t {
    char *str;
    void (*assign_s)(struct string_t *this, const struct string_t *str);
    void (*assign_c)(struct string_t *this, const char *s);
    void (*append_s)(struct string_t *this, const struct string_t *ap);
    void (*append_c)(struct string_t *this, const char *s);
    char (*at)(const struct string_t *this, size_t pos);
    void (*clear)(struct string_t *this);
    int (*size)(const struct string_t *this);
    int (*compare_s)(const struct string_t * this, const struct string_t *str);
    int (*compare_c)(const struct string_t * this, const char *str);
    size_t (*copy)(const struct string_t *this, char *s, size_t n, size_t pos);
    const char *(*c_str)(const struct string_t * this);
    int (*empty)(const struct string_t *this);
    int (*find_s)(const struct string_t *this, const struct string_t *str,
                    size_t pos);
    int (*find_c)(const struct string_t *this, const char *str, size_t pos);
    void (*insert_s)(struct string_t *this, size_t pos, const struct string_t *str);
    void (*insert_c)(struct string_t *this, size_t pos, const char *str);
    int (*to_int)(const struct string_t *this);
} string_t;

void string_init(string_t *this, const char * s);
void string_destroy(string_t *this);

#endif /* !STRING_H_EPI_ */
