#include "sudoku.h"
int main(){
    Sudoku ques;
    ques.s_input_Sudoku_2D();
    //number of zero
    if (!ques.s_number_of_zero()){
        cout << "2" << endl;
        return 0;
    }
    //fill what number can be put
    /*
    ques.s_human_solution();
    */
    int temp= ques.s_searchFirstZero();
    if(temp==81){
        cout << "1" << endl;
        ques.s_output_Sudoku_2D();
    }
    /*
    if (ques.s_solve(temp)){
        cout << "1" << endl;
        ques.s_output_Sudoku_2D();
    }
    else
        cout << "0" << endl;
    cout<<ques.count<<endl;
    */
    ques.s_solve(temp-1);
    printf("i am here\n");
    return 0;
}


