#include <stdio.h>
int main(void)
{
    int a = 5;
    int b;
    int c = 5;
    int d;

    printf("b = ");
    scanf("%d", &b);

    printf("d = ");
    scanf("%d", &d);

    a += b - 2;

    c += 1;
    d += c - a;
    a *= c;
    c += - 1;
    a = a/10;
    c = c/2;
    b += - 1;
    d = d*(c + b + a);


    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);
    printf("d = %d\n", d);
}
