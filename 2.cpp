#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,value;
    cout<<"enter no. of elements in array: ";
    cin>>n;
    cout<<"enter value: ";
    cin>>value;
    vector<int>v(n);
    cout<<"enter array elements: ";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    for(int i=0;i<n-1;i++){
        if(v[i]==value){
            v.erase(v.begin()+i);
        }
    }

    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}