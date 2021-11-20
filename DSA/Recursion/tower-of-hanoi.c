//wap to to print the steps to move disks of tower of hanoi.

#include <stdio.h>

void TOH(int n, int a, int b, int c)
{
    if (n > 0)
    {
        TOH(n - 1, a, c, b);
        printf("move a disk from %d to %d\n", a, c);
        TOH(n - 1, b, a, c);
    }
}

int main()
{
    TOH(3, 1, 2, 3);
    return 0;
}