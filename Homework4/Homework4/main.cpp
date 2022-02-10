#include <stdio.h>
#include <limits.h>
#include <math.h>

int main()
{
    double R;
    double a;
    double d;
    double Scircle;
    double Striangle;
    double Ssquare;

    printf("Enter the circle radius: R = ");
    scanf("%lf", &R);
    Scircle = M_PI * pow(R,2);
    printf("The area of the circle is %lf\n", Scircle);
    printf("\n");

    printf("Enter the length of the side of an isosceles triangle: a = ");
    scanf("%lf", &a);
    Striangle = pow(a,2) * sqrt(3) / 4;
    printf("The area of the isosceles triangle is %lf\n", Striangle);
    printf("\n");

    printf("Enter the length of the side of an square: d = ");
    scanf("%lf", &d);
    Ssquare = pow(d,2);
    printf("The area of the square is %lf\n", Ssquare);

    Scircle > Striangle ? printf("\n The area of circle more than the area of triangle: true") : printf("\n The area of circle more than the area of triangle: false");
    Striangle > Ssquare ? printf("\n The area of triangle more than the area of square: true") : printf("\n The area of triangle more than the area of square: false");
    Ssquare > Scircle ? printf("\n The area of square more than the area of circle: true") : printf("\n The area of square more than the area of circle: false");
}



