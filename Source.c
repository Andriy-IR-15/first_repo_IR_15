#include <stdio.h>
#include <math.h>

int main()
{
    float  z, y, x;
    double output;
    printf("input y: ");
    scanf("%f", &y);
    printf("input z: ");
    scanf("%f", &z);
    output = 16 * pow(y, 2) + pow(exp(x), y * z) + cbrt(z + 1.51) + log10(y * z);
    printf("%f", output);

    return 0;
}