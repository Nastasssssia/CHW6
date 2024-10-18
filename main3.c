#include <stdio.h>

/*
Дано натуральное число N. Посчитать количество «1» в двоичной записи
числа.
*/

int count_ones(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return (n & 1) + count_ones(n >> 1);
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", count_ones(n));

    return 0;
}