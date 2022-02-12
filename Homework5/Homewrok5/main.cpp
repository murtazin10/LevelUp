#include <stdio.h>

int main()
{
    int N;

    printf("Please enter N:\n");
    scanf("%d", &N);

    int i = 0;
    do
    {
        N = N / 10;
        ++i;
    } while (N != 0);
    printf("i = %d\n", i);
    printf("N = %d", N);
}
