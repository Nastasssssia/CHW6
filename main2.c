#include <stdio.h>

/*
Составить рекурсивную функцию. Выведите все числа от A до B
включительно, в порядке возрастания, если A < B, или в порядке убывания в
противном случае.
*/

void print_num(int a, int b)
{
    if (a < b)
    {
        printf("%d \n", a);
        print_num(a + 1, b);
    }
    else if (a > b)
    {
        printf("%d \n", a);
        print_num(a - 1, b);
    }
    else
    {
        printf("%d\n", a);
    }
}

int main()
{
    int num1, num2;
    scanf("%d%d", &num1, &num2);
    print_num(num1, num2);
    return 0;
}