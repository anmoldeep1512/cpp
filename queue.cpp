#include <bits/stdc++.h>
using namespace std;

int Queue[1000],bInd,fInd;

void push(int x){
    ++bInd;
    Queue[bInd] = x;
}

void pop(){
    Queue[fInd] = 0;
    ++fInd;
}

bool isEmpty(){
    if(bInd < fInd) return true;
    else return false;
}

int Front(){
    return Queue[fInd];
}

int main(){
    fInd = 0;
    bInd = -1;

    push(1);
    push(2);
    push(3);
    if(!isEmpty())
         cout<<Front()<<" ";

    pop();
    if(!isEmpty())
         cout<<Front()<<" ";

    pop();
    pop();

    return 0;
}
