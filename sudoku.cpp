#include "sudoku.h"

Sudoku::Sudoku()
{
    for (int i = 0; i < NUM_SUDOKU; i++)
    {
        Sudoku::_sudoku[i] = 0;
    }
}

Sudoku Sudoku::generate()
{

    Sudoku::_sudoku[n] = {
        3, 0, 2, 0, 0, 5, 6, 9, 0,
        0, 4, 0, 0, 9, 6, 0, 3, 0,
        0, 5, 0, 0, 0, 8, 0, 0, 0,
        1, 9, 0, 0, 8, 0, 7, 0, 3,
        0, 0, 0, 0, 0, 0, 0, 0, 0,
        5, 0, 7, 0, 3, 0, 0, 6, 1,
        0, 0, 0, 8, 0, 0, 0, 2, 0,
        0, 8, 0, 9, 6, 0, 0, 7, 0,
        0, 6, 5, 7, 0, 0, 3, 0, 9};
    for (int n = 0; n < 81; n++)
    {
        cout << Sudoku::_sudoku[n] << " ";
        if ((n + 1) % 9 == 0)
            cout << endl;
    }
    return;
};
