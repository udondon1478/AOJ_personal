#include <stdio.h>
int main(int argc, char const *argv[])
{
    int men = 0, cir = 0;
    int x, y;
    scanf("%d %d", &x, &y);
    men = x * y;
    cir = x * 2 + y * 2;
    printf("%d %d\n", men, cir);
    return 0;
}
