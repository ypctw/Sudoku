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
    int _unique_fill[SUDOKU_9][SUDOKU_9][10];

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
    int solve_answer[NUM_SUDOKU];
    int solve_compare[NUM_SUDOKU];

    void before_recursive();
    void unique_solution();
    void setElement(int index, int value);
    void move_to_3D_array();
    bool solve(Sudoku question);
    bool anti_solve(Sudoku question);
    bool check(int index,int num);

    int getFirstZeroIndex();

private:
};

#endif // SUDOKU_H
