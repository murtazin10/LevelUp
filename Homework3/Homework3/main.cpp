#include <stdio.h>
#include <limits.h>
#include <math.h>

int main()
{
    double x;
    double y;

    printf("x = ");
    scanf("%lf", &x);

    y = 2 * log(x) * exp(3*x) * (2 * cos(x - M_PI/6) + sqrt(2)) / (1 + 2 * log(x) * pow(sin(pow(x, 2)), 2));
    printf("y = %lf\n", y);
}



