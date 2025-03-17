#include <stdio.h>

int rec_func (int n)
{
    if (n == 0) return 0;
    else return n + rec_func(n - 1);
}

int main ()
{
    printf("%d", rec_func(10));

    return 0;
}