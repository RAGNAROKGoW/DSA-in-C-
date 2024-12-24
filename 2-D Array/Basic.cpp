#include<iostream>
using namespace std;

void printColumnWise(int arr[][4], int row, int col){
    for(int i=0; i<col; i++){
        for(int j=0; j<row; j++){
            cout<<arr[j][i]<<" ";
        }
    }
}

int main(){
    // Create 2-D array :
    int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};

    // Print all the value in array row-wise :
     for(int row=0; row<3; row++){
        for(int col=0; col<4; col++){
            cout<<arr[row][col]<<" ";
        }
     }
    cout<<endl;
    //  Print all the value in array column-wise : (Function call)
    printColumnWise(arr, 3, 4);
}