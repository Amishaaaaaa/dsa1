#include<iostream>
using namespace std;

int main(){
    int n,target,flag=0;
    cout<<"enter no. of elements in array: ";
    cin>>n;
    cout<<"enter target: ";
    cin>>target;
    int array[n];
    cout<<"enter array elements: ";
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n;j++){
            if((array[i]+array[j])==target){
                cout<<i<<" "<<j;
                flag=1;
                break;
            }
        }
        if(flag==1){
            break;
        }
    }
    return 0;
}