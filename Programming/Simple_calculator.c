#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, b;
    char op;

    while (1)
    {
        scanf("%d %c %d", &a, &op, &b);

        switch (op)
        {
        case '+':
            a += b;
            printf("%d\n", a);
            continue;
        case '-':
            a -= b;
            printf("%d\n", a);
            continue;
        case '*':
            a *= b;
            printf("%d\n", a);
            continue;
        case '/':
            a /= b;
            printf("%d\n", a);
            continue;;

        default:
            return 0;
        }
    }
    return 0;
}
