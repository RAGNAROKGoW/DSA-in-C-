#include<iostream>
using namespace std;

void printRowMax(int arr[][4], int row, int col){
    int maxSum=INT_MIN, index=-1;
    for(int i=0; i<row; i++){
        int total=0;
        for(int j=0; j<col; j++){
            total+=arr[i][j];

            if(total>maxSum){
                maxSum=total;
                index=i;
            }
        }
    }
    cout<<"Row "<<index+1<<" has maximum sum of "<<maxSum;
}

int main(){
    int arr1[5][4]={3,4,7,18,2,8,3,9,5,4,2,2,7,3,0,8,2,8,9,1};
    // int arr2[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    printRowMax(arr1, 5, 4);
}