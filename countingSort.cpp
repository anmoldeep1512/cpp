#include <iostream>
#include <bits/stdc++.h>

using namespace std;

ifstream f("data.in");
ofstream g("data.out");

int A[100];
int main()
{
    int n;
    f>>n;

    for(int i = 1; i<=n; ++i){
        int x;
        f>>x;
        ++A[x];
    }

    for(int i = 1; i<=n; ++i){
            int count = 0;
        if(A[i] > 1 ){
            count = A[i];
            while(count){
                g<< i<<" ";
                count --;
            }
        }
        else if(A[i]==1) {
            g<<i<<" ";
        }
    }

    return 0;
}
