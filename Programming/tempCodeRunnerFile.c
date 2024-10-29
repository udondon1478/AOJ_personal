#include <stdio.h>
int main(int argc, char const *argv[])
{
    int H, W;

    scanf("%d %d", &H, &W);

    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            if (i == 0)
            {
                printf("#");
            }
            else if (i == H-1)
            {
                printf("#");
            }
            else
            {
                printf("#");
                for (int k = 0; k < W-2; k++)
                {
                    printf(".");
                }
                printf("#\n");
                continue;
            }
        }
        printf("\n");
    }

    return 0;
}
