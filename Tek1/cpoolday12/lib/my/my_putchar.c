/*
** EPITECH PROJECT, 2021
** my_putchar
** File description:
** print char
*/

#include "my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}
