/*
** EPITECH PROJECT, 2020
** menger.c
** File description:
** Sponge menger
*/

#include <stdlib.h>
#include <stdio.h>
#include "menger.h"

int menger_two(int tmp[2], int coord[2], int size, int lvl)
{
    if (!(tmp[0] == size/3 && tmp[0] == tmp[1])){
        if (size/3 != 0 && lvl > 1)
            menger(size/3, lvl-1, coord[0] + tmp[0], coord[1] + tmp[1]);
        else if (lvl > 1)
            return 84;
    }
}

int menger(int size, int lvl, int x, int y)
{
    int tmp[2];
    int oldcoor[2];
    if (lvl < 1)
        return 0;
    printf("%03d %03d %03d\n", size/3, x+size/3, y+size/3);
    for (int i = 0; i < size; i = i + size/3) {
        for (int j = 0; j < size; j = j + (size/3)) {
            tmp[0] = i;
            tmp[1] = j;
            oldcoor[0] = x;
            oldcoor[1] = y;
            menger_two(tmp, oldcoor, size, lvl);
        }
    }
    return 0;
}

int power_menger(int a, int b)
{
    if (b == 1)
        return 1;
    return a * power_menger(a, b - 1);
}

int menger_init(int argc, char **argv)
{
    int size;
    int nblvl;

    if (argc != 3)
        return 84;
    size = atoi(argv[1]);
    nblvl = atoi(argv[2]);
    if ((size % 3))
        return 84;
    if (power_menger(3, nblvl) >= size)
        return 84;
    if (size == 0)
        return 0;
    return menger(size, nblvl, 0, 0);
}