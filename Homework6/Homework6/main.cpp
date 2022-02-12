#include <stdio.h>

int main()
{
    int n1;
    int n2;
    int n3;

    printf("Enter n1 = ");
    scanf("%d", &n1);

    printf("Enter n2 = ");
    scanf("%d", &n2);

    printf("Enter n3 = ");
    scanf("%d", &n3);

    int i = 2;
    int nod = 0;

    do
    {
        ++i;
    } while ((n1 % i != 0) && (n2 % i != 0) && (n3 % i != 0));

    if (n1 % i != 0 && n2 % i != 0 && n3 % i != 0)
        nod = 1;
    else
        nod = i;

    printf("nod = %d\n", nod);

    int ost_n1;
    int ost_n2;
    int ost_n3;

    ost_n1 = n1 % nod;
    ost_n2 = n2 % nod;
    ost_n3 = n3 % nod;

    printf("ost n1 = %d\n", ost_n1);
    printf("ost n2 = %d\n", ost_n2);
    printf("ost n3 = %d\n", ost_n3);
}
