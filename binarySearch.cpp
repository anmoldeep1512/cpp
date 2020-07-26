#include <iostream>
#include <bits/stdc++.h>
using namespace std;

ifstream f("data.in");
ofstream g("data.out");
int A[1000], num; //array and total number of elements

int Search(int x){
    int left = 1, right = num, mid;

    while(left <= right){
        mid = (left +right) / 2;
        if (x == A[mid]) return mid;
        else if(x<A[mid]) right = mid-1;
        else left = mid+1;
    }
    return -1;
}

int main(){
    f>>num;
    int a;
    // A is sorted in ascending order.
    for(int i=1; i<=num;++i)
        f>>A[i];
    cout<<"Enter the number to be searched: ";
    cin>>a;
    cout<<Search(a);
    return 0;
}
