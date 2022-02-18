#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{
    constexpr int size = 40;
    int M[size] = {};

    srand(time(NULL));
    for (int i = 0; i < size; ++i)
    {
        M[i] = int(pow(- 1, i + 1)) * rand();
        printf("M_%d = %d\n", i, M[i]);
    }
    printf("\n");

    int max_num;
    max_num = 0;
    int max_index;
    max_index = 0;
    int j;

    for(j = 0; j < size - 1; ++j)
        if (M[j + 1] > M[j] && M[j + 1] > max_num)
            {
            max_num = M[j + 1];
            max_index = j + 1;
            }
        else if (M[j] > max_num)
            {
            max_num = M[j];
            max_index = j;
            }

    printf("max_num = %d\n", max_num);
    printf("max_index = %d\n", max_index);

    int temp_max;
    temp_max = M[max_index];
    printf("temp_max = %d\n", temp_max);

    int last_neg;
    last_neg = 0;
    int k;
    k = 0;
    do
    {
        ++k;
        last_neg = M[size - k];
    } while (M[size - k] >= 0);
    printf("last_neg = %d\n", last_neg);
    printf("last_neg_index = %d\n\n", size - k);

    M[max_index] = last_neg;
    M[k] = temp_max;
    printf("M_%d = %d\n", max_index, M[max_index]);
    printf("M_%d = %d\n", size - k, temp_max);
}

