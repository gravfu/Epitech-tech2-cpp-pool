/*
** EPITECH PROJECT, 2020
** cpp_d01_2019
** File description:
** ex05
*/

#ifndef EX05_H_
#define EX05_H_

#include <stdint.h>

typedef union yolo {
    uint16_t bar;
    uint16_t foo;
} yolo;

typedef struct bar {
    uint16_t foo;
    yolo bar;
} bar;

typedef union foo_t {
    uint32_t bar;
    bar foo;
} foo_t;

#endif /* !EX05_H_ */
