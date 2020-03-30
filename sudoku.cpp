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

