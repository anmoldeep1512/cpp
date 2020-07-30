#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int arr[1000];
int x, n;

int binaryS(int arr[], int n, int x, bool first){
    int left = 0,mid;
    int right = n-1;
    int result = -1;
    while(left<=right){
        mid = (left+right)/2;
        if(x==arr[mid]){
                if(first == true){
                    result = mid;
                    right = mid - 1;
                }
                else {
                    result = mid;
                    left = mid + 1;
                }

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

    int firstOcc = binaryS(arr, n, x, true);
    int lastOcc = binaryS(arr, n, x, false);
    int numOcc = lastOcc - firstOcc + 1;

    cout<<"Number of Occurences: "<<numOcc;
    return 0;
}
