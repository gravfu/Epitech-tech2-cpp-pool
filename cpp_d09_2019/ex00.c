/*
** EPITECH PROJECT, 2020
** cpp_d09_2019
** File description:
** ex00
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "ex00.h"

struct cthulhu_s *new_cthulhu()
{
    printf("----\n");
    cthulhu_t *amazing = malloc(sizeof(cthulhu_t));
    cthulhu_initializer(amazing);
    return amazing;
}

void print_power(struct cthulhu_s *this)
{
    printf("Power => %d\n", this->m_power);
}

void attack(cthulhu_t*this)
{
    if (this->m_power >= 42) {
        this->m_power -= 42;
        printf("%s attacks and destroys the city\n", this->m_name);
    } else {
        printf("%s can't attack, he doesn't have enough power\n", this->m_name);
    }
    
}

void sleeping(cthulhu_t *this)
{
    printf("Cthulhu sleeps\n");
    this->m_power += 42000;
}

koala_t *new_koala(char *name, char is_a_legend)
{
    koala_t *new = malloc(sizeof(koala_t));
    printf("----\n");
    cthulhu_initializer(&new->m_parent);
    koala_initializer(&new->m_parent, name, is_a_legend);
    if (is_a_legend == 0)
        new->m_parent.m_power = 0;
    return new;
}

void eat(koala_t *this)
{
    this->m_parent.m_power += 42;
    printf("%s eats\n", this->m_parent.m_name);
}

static void koala_initializer(koala_t *this, char *_name, char _is_A_Legend)
{
    this->m_is_a_legent = _is_A_Legend;
    //cthulhu_initializer(&this->m_parent);
    this->m_parent.m_name = _name;
    printf("Building %s\n", _name);
}

static void cthulhu_initializer(cthulhu_t *this)
{
    this->m_name = malloc(sizeof(char) * 9);
    strcpy(this->m_name, "Cthulhu");
    this->m_power = 0;
    this->new_cthulhu = &new_cthulhu;
    this->print_power = &print_power;
    this->sleeping = &sleeping;
    this->m_power = 42;
    printf("Building Cthulhu\n");
}