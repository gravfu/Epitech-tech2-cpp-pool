/*
** EPITECH PROJECT, 2020
** cpp_d02m_2019
** File description:
** tab_to_2dtab
*/

#include <unistd.h>
#include <stdlib.h>

void tab_to_2dtab(const int *tab, int length, int width, int ***res)
{
    int h = 0;
    *res = malloc(sizeof(int **) * (length + 1));
    for (int i = 0; (i < length); i++) {
        (*res)[i] = malloc(sizeof(int) * (width + 1));
        for (int j = 0; (j < width); j++) {
            (*res)[i][j] = tab[h];
            h++;
        }
    }
}