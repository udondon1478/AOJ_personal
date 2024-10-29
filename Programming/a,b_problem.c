#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, b, x, rem;
    double da, db;
    double fx;

    scanf("%d %d", &a, &b);
    da = a;
    db = b;

    x = a / b;
    rem = a % b;
    fx = da / db;

    printf("%d %d %f\n", x, rem, fx);
    return 0;
}
