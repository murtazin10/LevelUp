#include <stdio.h>

int main()
{
    int N;

    printf("Please enter N:\n");
    scanf("%d", &N);

    int M;
    M = N;
    printf("M = %d\n", M);

    int i = 0;
    do
    {
        N = N / 10;
        ++i;
        M = M % 10;

        printf("M_", i+1);
        printf("= %d\n", M);
    } while (N != 0);

    printf("i = %d\n", i);

    int first_num;
    int last_num;

    last_num = M % 10;
    printf("first_num = %d\n", last_num);

    first_num = M / 10 * (4 - 1);                         //
    printf("last_num = %d\n", first_num);

   // printf("reverse_num = %d", reverse_num);            // Вывести число
}
