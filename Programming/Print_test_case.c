#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i = 1, x;

    while (1)
    {
        scanf("%d", &x);
        if (x == 0)
        {
            break;
        }

        printf("Case %d: %d\n", i, x);
        i++;
    }

    return 0;
}
