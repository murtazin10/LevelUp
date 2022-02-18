#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    constexpr int size_X = 6;
    constexpr int size_Y = size_X;
    int A[size_X][size_Y] = {};

    printf("The Matrix: \n");
    srand(time(NULL));
    for (int i = 0; i < size_X; ++i)
    {
        for (int j = 0; j < size_Y; ++j)
        {
            A[i][j] = rand() / 1e4;
        }
    }

    for (int i = 0; i < size_X; ++i)
    {
        for (int j = 0; j < size_Y; ++j)
        {
            printf(" %d", A[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    int sum;
    sum = 0;
    for (int i = 0; i < size_X - 1; ++i)
    {
        for (int j = 0; j < size_Y - 1 - i; ++j)      // size - 1 = 3
        {
            sum += A[i][size_Y - 2 - j - i];
        }
    }
    printf("sum = %d", sum);
}
