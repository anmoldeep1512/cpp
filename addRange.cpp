#include <iostream>
#include <bits/stdc++.h>
using namespace std;

ifstream f("data.in");
int A[1000], B[1000];

int main(){
    int left, right, x, num, qnum, b=0;
    f>>num;
    for(int i = 1; i<=num; ++i){
        f>>A[i];
    }

    f>>qnum;
    for(int j=1; j<=qnum; ++j){
        f>>left>>right>>x;
        B[left] += x;
        B[right+1] -= x;
    }
    for(int i=1; i<=num; ++i){
        b+=B[i];
        A[i]+=b;
        cout<<A[i]<<" ";
    }
    return 0;
}
