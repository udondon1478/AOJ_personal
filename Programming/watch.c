#include <stdio.h>
int main(int argc, char const *argv[])
{
    int S=0;
    int h=0, m=0, s=0;

    scanf("%d", &S);

    S;
    
    h=S/3600;
    m=S%3600/60;
    s=S-h*3600-m*60;
    
    printf("%d:%d:%d\n", h, m, s);
    
    return 0;
}
