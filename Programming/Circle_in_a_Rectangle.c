#include <stdio.h>
int main(int argc, char const *argv[])
{
    int W, H, x, y, r;
    int xr, yr;

    scanf("%d %d %d %d %d", &W, &H, &x, &y, &r);

    xr = x + r;
    yr = y + r;

    if (W < xr || H < yr || xr < 0 || yr < 0)
    {
        printf("No\n");
    }
    else
    {
        printf("Yes\n");
    }

    return 0;
}
