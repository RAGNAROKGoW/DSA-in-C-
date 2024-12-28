#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<vector<int>>matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    cout<<"Rows = "<<matrix.size()<<endl;
    cout<<"Columns = "<<matrix[0].size()<<endl;

    for(int row=0; row<matrix.size(); row++){
        for(int col=0; col<matrix[0].size(); col++){
            cout<<matrix[row][col]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    for(int col=0; col<matrix[0].size(); col++){
        if(col%2==0){
            for(int row=0; row<matrix.size(); row++){
                cout<<matrix[row][col]<<" ";
            }
            cout<<endl;
        }
        else{
            for(int row=matrix.size()-1; row>=0; row--){
                cout<<matrix[row][col]<<" ";
            }
            cout<<endl;
        }
    }
}