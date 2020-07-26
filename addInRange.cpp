#include <iostream>
#include <bits/stdc++.h>
using namespace std;

char arr[1000];


void add(int left, int right, int x){
    for(int i=left-1; i<=right-1; i++){
        arr[i] = int(arr[i]) + x;
    }
}

int main(){

    cin>>arr;
    int left,right,x;
    cin>>left>>right>>x;

    add(left,right,x);
    cout<<arr;
    return 0;
}
