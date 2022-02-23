#include <stdio.h>
#include <math.h>

int main()
{
    double x;
    double eps = 1e-5;
    printf("Please enter 0.05 < x < 1.0:\nx = ");
    scanf("%lf", &x);
    printf("x = %lf\n", x);

    if (x <= 0.05 || x >= 1.0)
        printf ("Man, you are stupid. You should write the correct x\n");
    else
    {
        double sum = x;
        int fuck1 = 1;
        int fuck2 = 1;
        double add = 0;
        int num = 0;
        for (int n = 1; n <= INFINITY; ++n)
        {
            fuck1 = fuck1 * (2 * n - 1);
            fuck2 = fuck2 * (2 * n);
            add = double(fuck1 * pow(x, (2 * n + 1))/(fuck2 * (2 * n + 1)));
            sum += add;
            if (add < eps)
                break;
            num = n;
        }
        printf("fuck1 = %d\n", fuck1);
        printf("fuck2 = %d\n", fuck2);
        printf("n = %d\n", num);
        printf("sum = %lf\n", sum);
    }
}
