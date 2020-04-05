#include "sudoku.h"
int main(){
    Sudoku ques;
    ques.s_input_Sudoku_2D();
    //copy

    
    if (!ques.s_number_of_zero())
    {//number of zero
        cout << "2" << endl;
        return 0;
    }
    //fill what number can be put

    ques.s_human_solution();
   //copy
    /*for (int a = 0; a < NUM_SUDOKU; ++a)
        for(int b=0;b<10;++b)
            ques._trans_3D_sudoku[a / 9][a % 9][b]=ques._3D_sudoku[a / 9][a % 9][b];
    */
    int temp= ques.s_searchFirstZero();
    if(temp==81){
        cout << "1" << endl;
        ques.s_output_Sudoku_2D();
    }
    //no solution
    if(ques.s_solve(0))
        cout<<"1"<<endl;
    else
        cout << "0" << endl;
    return 0;
}