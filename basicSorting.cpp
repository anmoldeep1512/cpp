#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int arr[1000], n;
void basicS(int arr[], int n){
    for (int i = 0; i < n; ++i){
        for(int j = i+1; j < n; ++j){
            if(arr[i]>arr[j]) swap(arr[i], arr[j]);
        }
    }
}

int main(){
    cin>>n;

    for(int i= 0; i<n;++i){
        cin>>arr[i];
    }
    basicS(arr, n);
    for(int i= 0; i<n;++i){
        cout<<arr[i]<<" ";
    }
    return 0;
}
