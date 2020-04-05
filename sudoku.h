#ifndef SUDOKU_H
#define SUDOKU_H

#include <cstdio>

#include <iostream>
#include <algorithm>

#define NUM_SUDOKU 81
#define SUDOKU_9 9

using namespace std;
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

    //solve
    int _3D_sudoku[SUDOKU_9][SUDOKU_9][10];
    //int _trans_3D_sudoku[SUDOKU_9][SUDOKU_9][10];

    //step 1 : fill in
    void s_input_Sudoku_2D();

    //step 2 : number of zero
    bool s_number_of_zero();
    
    //step 3 : before recursive
    void s_human_solution();
    int s_LastZero();
    bool s_find_col(int row, int col);
    bool s_find_row(int row, int col);
    bool s_find_cube(int row, int col);
    void update(int num, int row, int col);

    //step 4 : check should we go into the recursive function?
    int s_searchFirstZero();
    void s_fill_in(int x, int y);
    void s_while();
    bool s_find_the_only();
    bool s_find_3_way();
    
    //step 5 :recursive
    bool s_solve(int num);
    bool s_check(int num, int x, int y);

    //step 6 : print the table
    void s_output_Sudoku_2D();

    //useless
    bool s_trans_s_solve(int num);
    bool s_double_solution();

private:
};
#endif // SUDOKU_H
