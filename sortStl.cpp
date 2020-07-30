#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int arr[1000], n;

bool cmp(int X, int Y){
    return X < Y;    // X > Y for descending order
}

int main(){
    cin>>n;

    for(int i= 0; i<n;++i){
        cin>>arr[i];
    }

    sort(arr+0, arr+n, cmp);

    for(int i= 0; i<n;++i){
        cout<<arr[i]<<" ";
    }
    return 0;
}
