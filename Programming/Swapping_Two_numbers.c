#include <stdio.h>
int main(int argc, char const *argv[])
{
    int x, y, temp;

    while (1)
    {
        scanf("%d %d", &x, &y);
        if (x == 0 && y == 0)
        {
            break;
        }
        if (y<x)
        {
            temp=x;
            x=y;
            y=temp;
        }
        

        printf("%d %d\n", x, y);
    }

    return 0;
}
