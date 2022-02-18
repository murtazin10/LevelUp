#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    constexpr int size = 7;
    int A[size][size] = {};

    srand(time(NULL));
    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size; ++j)
        {
            A[i][j] = rand() / 1e4;
        }
    }

    printf("The Initial Matrix: \n");
    srand(time(NULL));
    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size; ++j)
        {
            A[i][j] = rand() / 1e4;
        }
    }

    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size; ++j)
        {
            printf(" %d", A[i][j]);
        }
        printf("\n");
    }

    int k;
    // printf("Please enter k no more than size = 7: ");
    // scanf("%d\n", &k);
    k = 3;

    int C[size];
    for (int m = 0; m < size; ++m)
    {
        C[m] = A[m][k];
    }

    int P[size];
    for (int q = 0; q < size; ++q)
    {
        P[q] = A[k][q];
    }

    for (int i = 0; i < size; ++i)
            A[i][k] = P[i];

    printf("\nThe Matrix with Transposed column/row: \n\n");

    for (int j = 0; j < size; ++j)
            A[k][j] = C[j];

    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size; ++j)
        {
            printf(" %d", A[i][j]);
        }
        printf("\n");
    }
}





