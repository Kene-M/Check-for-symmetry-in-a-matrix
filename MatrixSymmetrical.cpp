#include <iostream>
using namespace std;
const int MAXROWS = 5;
const int MAXCOLS =5;

void display(int [MAXROWS][MAXCOLS]);
int main()
{


    int A[MAXROWS][MAXCOLS];



    int row, col, tmp, rowelem = 4, cnt=0;

/*
    // initialize the matrix
    for (row = 0; row < MAXROWS; row++){
        for (col = 0; col < MAXCOLS; col++){
            A[row][col] = cnt++;
            cout << A[row][col] << " ";
        }
        cout << endl;
    }
    cout << endl;*/

    // initialize the matrix symmetrically
    for (row = 0; row < MAXROWS; row++){
            cnt = rowelem;
        for (col = 0; col < MAXCOLS; col++){
            //A[row][col] = cnt + 1;

            A[row][col] = cnt;
            cnt = cnt +2;
            cout << A[row][col] << " ";
        }
        cout << endl;
        rowelem  = rowelem + 1;
       // rowelem++;
    }
    cout << endl;

    // code to find if matrix is symmetrical
    for (row = 0; row < MAXROWS; row++){
        for (col = 0; col < MAXCOLS; col++){

           if( A[row][col] != A[col][row])
           {
            cout << "The matrix is not symmetrical." << endl;
            return(0);
           }

        }
    }
    cout << "The matrix is  symmetrical." << endl;

}
