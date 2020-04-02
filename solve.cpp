#include "sudoku.h"
bool many_answer(Sudoku ques);
int main()
{
    Sudoku ques;
    
    ques.input_Sudoku_table();
    ques.before_recursive();

    if (ques.solve(ques))
    {
        ques.anti_solve(ques);
        if (many_answer)
        {
            cout << "1\n";
            ques.print_table();
        }
        else
            cout << "2\n" << endl;
    }
    else
        cout << "0\n" << endl;
    ques.print_table();
    return 0;
}
bool many_answer(Sudoku ques)
{
    for (int a = 0; a < NUM_SUDOKU; a++)
    {
        if (ques.solve_answer[a] != ques.solve_compare[a])
        {
            return false;
        }
    }
    return true;
}
