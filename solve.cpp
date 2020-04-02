#include "sudoku.h"
bool solve(Sudoku question,Sudoku & answer);
int getFirstZeroIndex();
void setElement(int index,int value);

int main()
{
    Sudoku ques;
    Sudoku ans;
    ques.input_Sudoku_table();
    ques.before_recursive();

    if(solve(ques,ans)==true)
    {
        cout <<"1\n";
        ans.print_table();
    }
    else
        cout <<"0\n";
    return 0;
}
