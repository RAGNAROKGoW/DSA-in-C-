#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;

int main(){
    vector<int> arr = {6,4,5,-3,2,8}, prefix(arr.size());
    prefix[0]=arr[0];
    for(int i=1; i<arr.size(); i++){
        prefix[i]=prefix[i-1]+arr[i];
    }
    cout<<"Prefix Sum : ";
    for(int i=0; i<arr.size(); i++){
        cout<<prefix[i]<<" ";
    }

    cout<<endl;

    vector<int> suffix(arr.size());
    suffix[arr.size()-1]=arr[arr.size()-1];
    for(int i=arr.size()-2; i>=0; i--){
        suffix[i]=arr[i]+suffix[i+1];
    }
    cout<<"Suffix Sum : ";
    for(int i=0; i<arr.size(); i++){
        cout<<suffix[i]<<" ";
    }
}