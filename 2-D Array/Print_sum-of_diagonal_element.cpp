#include<iostream>
using namespace std;

void printDigSum(int arr[][4], int row, int col){
    int first=0;
    for(int i=0; i<row; i++){
        first += arr[i][i];
    }
    int second=0, i=0, j=col-1;
    while(j>=0){
        second += arr[i][j];
        i++, j--;
    }
    cout<<"Sum of first diagonal : "<<first<<endl;
    cout<<"Sum of second diagonal : "<<second;
}

int main(){
    int arr[4][4]={3,4,7,18,2,8,3,9,5,4,2,2,7,3,0,8};
    printDigSum(arr, 4, 4);
}