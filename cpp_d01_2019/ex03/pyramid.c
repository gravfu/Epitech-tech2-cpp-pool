/*
** EPITECH PROJECT, 2020
** Ex03
** File description:
** pyramid
*/

int pyramid_path_two(int size, const int **map, int y, int x)
{
    int reta;
    int retb;
    if (y+1 == size)
        return map[y][x];
    reta = pyramid_path_two(size, map, y+1, x);
    retb = pyramid_path_two(size, map, y+1, x+1);
    if (reta < retb)
        return map[y][x] + reta;
    else
        return map[y][x] + retb;
}

int pyramid_path(int size, const int **map)
{
    if (size == 1)
        return 0;
    return pyramid_path_two(size, map, 0, 0);
}