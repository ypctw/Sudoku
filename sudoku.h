#ifndef SUDOKU_H
#define SUDOKU_H
#include <iostream>
#include <cstdio>
using namespace std;
#define NUM_SUDOKU 81
#define SUDOKU_9 9
/***************************************************
 * Finish your .cpp according to this header file. *
 * You can modify this file if needed.             *
 ***************************************************/

class Sudoku
{
public:
    Sudoku();
    int _sudoku[NUM_SUDOKU];
    int _temp_sudoku[NUM_SUDOKU];

    //print table
    void print_table();

    // generate
    void generate();

    // transform
    void input_Sudoku_table();
    void transform();
    void move_to_temp();
    void move_from_temp();

    void swapNum(int x, int y);
    void swapRow(int x, int y);
    void swapCol(int x, int y);
    void rotate(int x);

    void flip(int x);
    void ud_flip();
    void lr_flip();

    // solve
    int _3D_sudoku[SUDOKU_9][SUDOKU_9][10];
    void s_input_Sudoku_2D();
    void s_output_Sudoku_2D();
    bool s_solve(int num);
    bool s_check(int num, int x, int y);
    bool s_number_of_zero();
    int s_searchFirstZero();
    void s_human_solution();
    void s_fill_in(int x, int y);
    void s_find_the_only();

    int count;

private:
};
#endif // SUDOKU_H
