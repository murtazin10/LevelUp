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
        if (i > n1 && i > n2 && i > n3)
            break;
    } while ((n1 % i != 0) || (n2 % i != 0) || (n3 % i != 0));

    printf("i = %d\n", i);

    if (n1 % i != 0 || n2 % i != 0 || n3 % i != 0)
        nod = 1;
    else
        nod = i;

    printf("nod = %d\n", nod);

    int ost_n12;
    int ost_n22;
    int ost_n32;

    ost_n12 = n1 % nod;
    ost_n22 = n2 % nod;
    ost_n32 = n3 % nod;

    printf("ost n12 = %d\n", ost_n12);
    printf("ost n22 = %d\n", ost_n22);
    printf("ost n32 = %d\n", ost_n32);
}
