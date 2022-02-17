#include <stdio.h>
#include <math.h>

int main()
{
    int N;
    printf("Please enter N:\n");
    scanf("%d", &N);

    int M;
    M = N;

    int i = 0;
    do
    {
        M = M / 10;
        ++i;
    } while (M != 0);

    int num;
    num = i;
    printf("num = %d\n", num);

    int temp_0;
    temp_0 = N % 10;
    printf("temp_0 = %d\n", temp_0);

    int array[num];
    for (int k = 0; k < num; ++k)
        array[k] = 0;
    array[0] = temp_0;

    printf("array_0 = %d\n", array[0]);

    for(int j = 0; j < num - 1; ++j)
    {
        N = N / 10;
        int temp;
        temp = N % 10;
        array[j + 1] = temp;
        printf("array_%d = %d\n", j + 1, array[j + 1]);
    }

    int reverse_num;
    reverse_num = 0;
    for (int q = 1; q < num - 1; ++q)
    {
        reverse_num += array[q] * int(pow(10, q));
    }

    reverse_num = reverse_num + array[0] * int(pow(10, num - 1)) + array[num - 1] * int(pow(10, 0));
    printf("reverse_num = %d\n", reverse_num);
}
