#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// #include <ncurses.h>

int main()
{
    int seconds;
    seconds = time(NULL);

    constexpr int delta = 30;
    constexpr int size_X = 50;
    constexpr int size_Y = 83;

    char hedgehog = '*';
    char M[size_X][size_Y + delta] = {{},{}};

    for (int i = 0; i < size_X; ++i)
    {
        M[i][0 + delta] = M[i][size_Y + delta - 1] = hedgehog;
    }

    int card_mid = size_Y / 2 + 1;
    for (int i = size_X - 4; i < size_X; ++i)
    {
        if ((i == size_X - 4) || (i == size_X - 2))
            M[i][0 + delta + card_mid] = 'X';
        if ((i == size_X - 3) || (i == size_X - 1))
            M[i][0 + delta + card_mid] = M[i][0 + delta + card_mid - 1] = M[i][0 + delta + card_mid + 1] = 'X';
    }

    for (int i = 0; i < size_X; ++i)
    {
        for (int j = 0; j < size_Y + delta; ++j)
        {
            printf("%c", M[i][j]);
        }
        printf("\n");
    }

//    initscr();
//    int ch = getch();
//    switch(ch)
//    {
//    case KEY_LEFT:
//
//    }
}













