#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, x, i = 1;

    scanf("%d", &n);

    for (; i <= n; i++)
    {
        x = i;
        if (x % 3 == 0)
        {
            printf(" %d", i);
            continue;
        }
        if (x % 10 == 3)
        {
            printf(" %d", i);
            continue;
        }
        x /= 10;
        if (x % 10 == 3)
        {
            printf(" %d", i);
        }
        
    }
    printf("\n");

    return 0;
}
