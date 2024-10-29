#include <stdio.h>
int main(int argc, char const *argv[])
{
    int H, W;

    while (1)
    {

        scanf("%d %d", &H, &W);

        if (H == 0 && W == 0)
        {
            break;
        }

        for (int i = 0; i < H; i++)
        {
            for (int j = 0; j < W; j++)
            {
                if (i == 0)
                {
                    printf("#");
                }
                else if (i == H - 1)
                {
                    printf("#");
                }
                else
                {
                    if (j == 0)
                    {
                        printf("#");
                        continue;
                    }
                    else if (j < W - 1)
                    {
                        printf(".");
                        continue;
                    }
                    else
                    {
                        printf("#");
                        continue;
                    }
                }
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
