#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    constexpr int size_A = 30;
    constexpr int size_B = 15;
    int A[size_A] = {};
    int B[size_B] = {};

    srand(time(NULL));
    for (int i = 0; i < size_A; ++i)
    {
        A[i] = rand() / 1e4;
        printf("A_%d = %d\n", i, A[i]);
    }

    for (int j = 0; j < size_B; ++j)
    {
        B[j] = rand() / 1e4;
        printf("B_%d = %d\n", j, B[j]);
    }

    printf("index: ");
    for (int k = 0; k < size_A; ++k)
    {
        for (int m = 0; m < size_B; ++m)
        {
            if (A[k] - B[m] == 0)
            {
                printf("%d", k);
            }
        }
    }
}
