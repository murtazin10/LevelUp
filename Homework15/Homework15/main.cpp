#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[254] = {"And Rohan will answer"};
    int word_max_len;
    word_max_len = 5;
    printf("Theoden said: %s\n\n", str);

    int a;
    a = strlen(str);
    printf("strlen = %d\n\n", a);

    //char short_str[254] = {};
    printf("Short phrase: %s\n");

    for (int i = 0; i < a;)
    {
        char word[word_max_len];
        sscanf(str + i, "%s", word);
        // printf("%s\n", str);
        //printf("%s\n", word);
        i += strlen(word) + 1;

        if (strlen(word) % 2 == 0)
            printf("%s\n", word);
    }
    //printf("\n");
    //printf("Short phrase: %s\n\n", short_str);
}
