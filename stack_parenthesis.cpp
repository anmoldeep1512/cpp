#include <iostream>
#include <bits/stdc++.h>
using namespace std;

char input[1000];
int Stack[100], ind;

void push(int x){
    ++ind;
    Stack[ind] = x;
}

bool isEmpty(){
    if(ind >= 1) return false;
    else return true;
}

void pop(){
    Stack[ind] = 0;
    ind--;
}

int top(){
    return Stack[ind];
}

bool verify(char input[]){
    ind = 0;
    int n = strlen(input);

    for(int i = 0; i<n; i++){
        if(input[i] == '(') push(1);
        if(input[i] == '{') push(2);
        if(input[i] == '[') push(3);

        if(input[i] == ')'){
            if(isEmpty() || Stack[ind] != 1) return false;
            else {
                pop();
            }
        }

         if(input[i] == '}'){
            if(isEmpty() || Stack[ind] != 2) return false;
            else {
                pop();
            }
        }

         if(input[i] == ']'){
            if(isEmpty() || Stack[ind] != 3) return false;
            else {
                pop();
            }
        }

    }
    if(isEmpty()) return true;
    else return false;
}

int main(){

    cin>>input;
    cout<<verify(input);

    return 0;
}
