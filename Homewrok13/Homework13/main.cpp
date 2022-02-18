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

    int k;
    //printf("Please enter k no more than size = 7: ");
    //scanf("%d\n", &k);
    k = 5;

    for (int n = 0; n < size; ++n)
        printf("A_%d_%d = %d\n", n, k, A[n][k]);

    printf("\n");

    for (int t = 0; t < size; ++t)
        printf("A_%d_%d = %d\n", k, t, A[k][t]);

    printf("\n");
    printf("Transposed column\n");
    printf("\n");

    int C[size];
    for (int m = 0; m < size; ++m)
    {
        C[m] = A[m][k];
        // printf("C_%d = %d\n", m, C[m]);
    }

    // printf("\n");

    int P[size];
    for (int q = 0; q < size; ++q)
    {
        P[q] = A[k][q];
        // printf("P_%d = %d\n", q, P[q]);
    }

    // printf("\n");

    for (int i = 0; i < size; ++i)
            A[i][k] = P[i];

    for (int i = 0; i < size; ++i)
        printf("A_%d_%d = %d\n", i, k, A[i][k]);

    printf("\n");

    for (int j = 0; j < size; ++j)
            A[k][j] = C[j];

    for (int j = 0; j < size; ++j)
        printf("A_%d_%d = %d\n", k, j, A[k][j]);
}





