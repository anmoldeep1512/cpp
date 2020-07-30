#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int arr[1000], n;

void majorityE(int arr[], int n){
    int maj = arr[n/2 + 1];
    int c =0;
    for(int i = 0; i< n; ++i){
        if(arr[i] == maj ) ++c;
    }
    if(c >= n/2 +1){
        cout<<"\nMajority element is "<<maj<<" and appears "<<c<<" times";
    }
    else {
        cout<<"No Majority element";
    }
}

int main(){
    cin>>n;

    for(int i = 0; i<n; ++i){
        cin>>arr[i];
    }

    sort(arr+0, arr+n);
    majorityE(arr, n);

    return 0;
}
