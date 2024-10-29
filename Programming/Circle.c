#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    double dr, men, circ, pai=3.14159265359;
    
    scanf("%lf", &dr);

    men=dr*dr*pai;
    circ=dr*2*pai;

    printf("%f %f\n", men, circ);
    return 0;
}
