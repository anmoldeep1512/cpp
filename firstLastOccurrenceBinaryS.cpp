#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int arr[1000];
int x, n;

int firstOcc(int arr[], int n, int x){
    int left = 0,mid;
    int right = n-1;
    int result = -1;
    while(left<=right){
        mid = (left+right)/2;
        if(x==arr[mid]){
            result = mid;
            right = mid - 1;
         }
         else if(x<arr[mid]) right = mid - 1;
         else left = mid + 1;
    }
    return result;
}

int lastOcc(int arr[], int n, int x){
    int left = 0,mid;
    int right = n-1;
    int result = -1;
    while(left<=right){
        mid = (left+right)/2;
        if(x==arr[mid]){
            result = mid;
            left = mid + 1;
         }
         else if(x<arr[mid]) right = mid - 1;
         else left = mid + 1;
    }
    return result;
}

int main(){
    cout<<"Enter number of elements of list: ";
    cin>>n;
    cout<<"\nEnter elements: ";
    for(int i= 0; i<n;++i){
        cin>>arr[i];
    }
    cout<<"\nEnter the number to find: ";
    cin>>x;

    cout<<"First Occurrence: "<<firstOcc(arr, n, x);
    cout<<"\nLast Occurrence: "<<lastOcc(arr, n, x);

    return 0;
}
