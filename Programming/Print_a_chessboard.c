#include <stdio.h>
int main(int argc, char const *argv[])
{
    int H, W;

    while (1)
    {
        scanf("%d %d", &H, &W);

        if (H==0 && W==0)
        {
            break;
        }
        

        for (int i = 0; i < H; i++)
        {
            for (int j = 0; j < W; j++)
            {
                if (i % 2 == 1) //横を印字する際高さが奇数だったら
                {
                    if (j % 2 == 1) //印字する位置が奇数だったら
                    {
                        printf("#");
                    }
                    else
                    {
                        printf(".");
                    }
                }
                else
                {
                    if (j % 2 == 1)
                    {
                        printf(".");
                    }
                    else
                    {
                        printf("#");
                    }
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
