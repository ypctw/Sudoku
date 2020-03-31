#include "sudoku.h"

Sudoku::Sudoku()
{
    for (int i = 0; i < NUM_SUDOKU; i++)
    {
        Sudoku::_sudoku[i] = 0;
    }
}

void Sudoku::generate()
{
    int gen_sudoku[NUM_SUDOKU] = {
        0, 4, 0, 2, 1, 0, 0, 0, 0,
        8, 0, 7, 0, 0, 0, 0, 9, 0,
        2, 0, 0, 8, 0, 0, 4, 0, 1,
        3, 0, 0, 0, 0, 2, 9, 0, 5,
        0, 0, 5, 7, 0, 8, 6, 0, 0,
        7, 0, 6, 5, 0, 0, 0, 0, 4,
        5, 0, 1, 0, 0, 4, 0, 0, 9,
        0, 6, 0, 0, 0, 0, 7, 0, 8,
        0, 0, 0, 0, 2, 7, 0, 5, 0};
    for (int n = 0; n < NUM_SUDOKU; n++)
    {
        printf("%d ", gen_sudoku[n]);
        if ((n + 1) % 9 == 0)
            printf("\n");
    }
}

void Sudoku::input_Sudoku_table()
{
    for (int i = 0; i < 9; i++)
    {
        int k = i * 9;
        cin >> _sudoku[k] >> _sudoku[k + 1] >> _sudoku[k + 2] >> _sudoku[k + 3] >> _sudoku[k + 4] >> _sudoku[k + 5] >> _sudoku[k + 6] >> _sudoku[k + 7] >> _sudoku[k + 8];
    }
}

void Sudoku::transform()
{
    int judge[3];
    while (1)
    {
        cin >> judge[0];
        /* >> judge[1] >> judge[2];
        int x = judge[1];
        int y = judge[2];
        */
        if (judge[0] == 0)
        {
            for (int n = 0; n < NUM_SUDOKU; n++)
            {
                printf("%d ", _sudoku[n]);
                if ((n + 1) % 9 == 0)
                    printf("\n");
            }
        }
        switch (judge[0])
        {
        case 1:
            cin >> judge[1] >> judge[2];
            Sudoku::swapNum(judge[1], judge[2]);
            break;
        case 2:
            cin >> judge[1] >> judge[2];
            Sudoku::swapRow(judge[1] , judge[2];
            break;
        case 3:
            cin >> judge[1] >> judge[2];
            Sudoku::swapCol(judge[1] , judge[2]);
            break;
        case 4:
            cin >> judge[1];
            Sudoku::rotate(judge[1]);
            break;
        case 5:
            cin >> judge[1];
            Sudoku::flip(judge[1]);
            break;
        default:
            break;
        }
    }
}

void Sudoku::swapNum(int x, int y)
{
    for (int sN = 0; sN < NUM_SUDOKU; sN++)
    {
        if (_sudoku[sN] == x)
            _sudoku[sN] = y;
        if (_sudoku[sN] == y)
            _sudoku[sN] = x;
    }
}
void Sudoku::swapRow(int x, int y)
{
    x = x - 1;
    y = y - 1;
    int temp;
    for (int sR = 0; sR < 9; sR++)
    {
        temp = _sudoku[x + 9 * sR];
        _sudoku[x + 9 * sR] = _sudoku[y + 9 * sR];
        _sudoku[y + 9 * sR] = temp;
    }
}
void Sudoku::swapCol(int x, int y)
{
    x = x - 1;
    y = y - 1;
    int temp;
    for (int sC = 0; sC < 9; sC++)
    {
        temp = _sudoku[x + sC];
        _sudoku[x + sC] = _sudoku[x + 9 * y];
        _sudoku[x + 9 * y] = temp;
    }
}
void Sudoku::rotate(int x)
{
}
void Sudoku::flip(int x)
{
}