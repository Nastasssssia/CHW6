#include <stdio.h>

/*
 Дана последовательность целых чисел через пробел, завершающаяся числом
0. Выведите все нечетные числа из этой последовательности, сохраняя их
порядок.
*/

void print_odd_numbers(void)
{
    int num;
    scanf("%d", &num);

    if (num == 0)
    {
        return;
    }
    if (num % 2 != 0)
    {
        printf("%d ", num);
    }

    print_odd_numbers();
}

int main()
{
    print_odd_numbers();
    return 0;
}