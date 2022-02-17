#include <stdio.h>
#include <math.h>

int main()
{
    long int N;
    printf("Please enter N:\n");
    scanf("%ld", &N);

    long int array[100];
    for (int k = 0; k < 256; ++k)
        array[k] = 0;

    long int j = 0;
    do
    {
        long int P;
        P = N % 2;
        N = N / 2;
        array[j] = P;
        printf("array_%ld = %ld\n", j, array[j]);
        ++j;
    } while(N > 0);

    long int arrayLength;
    arrayLength = j;

    printf("arrayLength = %ld\n", arrayLength);

    long int binary_num;
    binary_num = 0;
    for (long int q = 0; q <= arrayLength - 1; ++q)
    {
        binary_num += array[arrayLength - 1 - q] * long(int(pow(10, arrayLength - 1 - q)));
    }

    printf("binary_num = %ld\n", binary_num);
}
