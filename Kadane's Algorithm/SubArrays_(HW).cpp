#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;

int main(){
    vector<int> arr = {4,3,7,2};
    cout<<"1-Size -> ";
    for(int i=0; i<arr.size(); i++){
        if(i+1<arr.size())
            cout<<arr[i]<<", ";
        else
            cout<<arr[i];
    }
    cout<<endl<<"2-Size -> ";
    for(int i=0; i<arr.size()-1; i++){
        if(i+2<arr.size())
            cout<<arr[i]<<" "<<arr[i+1]<<", ";
        else
            cout<<arr[i]<<" "<<arr[i+1];
    }
    cout<<endl<<"3-Size -> ";
    for(int i=0; i<arr.size()-2; i++){
        if(i+3<arr.size())
            cout<<arr[i]<<" "<<arr[i+1]<<" "<<arr[i+2]<<", ";
        else
            cout<<arr[i]<<" "<<arr[i+1]<<" "<<arr[i+2];
    }
    cout<<endl<<"4-Size -> ";
    for(int i=0; i<arr.size()-3; i++){
        if(i+4<arr.size())
            cout<<arr[i]<<" "<<arr[i+1]<<" "<<arr[i+2]<<" "<<arr[i+3]<<", ";
        else
            cout<<arr[i]<<" "<<arr[i+1]<<" "<<arr[i+2]<<" "<<arr[i+3];
    }
}