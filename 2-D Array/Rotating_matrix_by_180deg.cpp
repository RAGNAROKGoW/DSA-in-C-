#include<iostream>
using namespace std;

int main(){
    int matrix[3][3]={1,2,3,4,5,6,7,8,9};   // row=3, col=3.

    for(int row =0; row<3/2; row++){        // 3/2 => row/2.
        for(int col=0; col<3; col++){       // swapping columns.
            swap(matrix[col][row], matrix[col][2-row]);
        }
    }

    for(int row=0; row<3; row++){          
        for(int col=0; col<3; col++){
            cout<<matrix[row][col]<<" ";
        }
    }
    cout<<endl<<endl;

    for(int row =0; row<3/2; row++){        // swapping rows.
        for(int col=0; col<3; col++){
            swap(matrix[row][col], matrix[2-row][col]);
        }
    }

    for(int row=0; row<3; row++){
        for(int col=0; col<3; col++){
            cout<<matrix[row][col]<<" ";
        }
    }

}