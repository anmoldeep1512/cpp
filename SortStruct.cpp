#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Car {
    int speed, price;
}cars[100];

bool cmp(Car A, Car B)
{
    return (1.0*A.speed/A.price) > (1.0*B.speed/B.price);
}

void print(Car cars[], int i){
    cout<<cars[i].speed<<" "<<cars[i].price<<"\n";
}

int main(){
    cars[1].speed = 100; cars[1].price = 50;
    cars[2].speed = 200; cars[2].price = 30;
    cars[3].speed = 200; cars[3].price = 90;
    cars[4].speed = 140; cars[4].price = 130;
    cars[5].speed = 145; cars[5].price = 24;
    cars[6].speed = 90;  cars[6].price = 81;

    sort(cars+1, cars+7, cmp);

    for(int i = 1; i<7; ++i){
        print(cars,i);
    }
    return 0;
}
