/*
** EPITECH PROJECT, 2021
** rush_1_3
** File description:
** rush_1_3
*/

void backslash_n(int i, int x)
{
    if (i == x)
        write(1, "\n", 1);
}

void display(int x, int y, int i, int j)
{
    for (i = 1; i <= x; i++) {
        if (x > 1 && y > 1)
            display_my_corner(x, y, i, j);
        if (x == 1 || y == 1)
            my_no_corner(x, y, i, j);
        display_my_border(x, y, i, j);
        backslash_n(i, x);
    }
}

void corner(int i, int x)
{
    if (i == x || i == 1)
        write(1, "B", 1);
}

void my_corner(int j, int y)
{
    if (j == y || j == 1)
        write(1, "B", 1);
}

void border(int j, int y)
{
    if (j == 1 || j == y)
        write(1, "B", 1); 
    else if (j < y && j > 1)
        write(1, " ", 1);
}