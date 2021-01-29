/*
** EPITECH PROJECT, 2020
** cpp_d09_2019
** File description:
** ex00
*/

#ifndef EX00_H_
#define EX00_H_

typedef struct cthulhu_s
{
    int m_power;
    char *m_name;
    struct cthulhu_s *(*new_cthulhu)();
    void (*print_power)(struct cthulhu_s *);
    void (*sleeping)(struct cthulhu_s *);
} cthulhu_t;

typedef struct koala_s
{
    cthulhu_t m_parent;
    char m_is_a_legent;
    void (*eat)(struct koala_s *);
    struct koala_s *(*new_koala)(char *name, char is_a_legend);
} koala_t;

static void cthulhu_initializer(cthulhu_t *);
static void koala_initializer(struct koala_s *, char *, char);
cthulhu_t *new_cthulhu();

#endif /* !EX00_H_ */
