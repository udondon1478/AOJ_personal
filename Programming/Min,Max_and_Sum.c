#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);

    int max = -1000000, min = 1000000;
    long long sum = 0;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
        if (min > a[i])
        {
            min = a[i];
        }

        sum += a[i];
    }

    printf("%d %d %lld\n", min, max, sum);

    return 0;
}
