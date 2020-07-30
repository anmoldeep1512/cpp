#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Student{
    int ID, year;
    char name[20];

    Student(){
        ID = 6; year = 2019;

        memset(name, 0, sizeof(name));     //NULL
    }

    Student(int newYear){
        year = newYear;
    }

    Student(char newName[], int newID, int newYear){
        ID = newID;
        year = newYear;
        memset(name, 0, sizeof(name));
        strcpy(name, newName);
    }

}student1;

int main(){
    cout<<student1.ID<<" "<<student1.year<<" "<<student1.name<<"\n";

    Student student2;
    cout<<student2.ID<<" "<<student2.year<<" "<<student2.name<<"\n";

    Student student3(2018);
    cout<<student3.ID<<" "<<student3.year<<" "<<student3.name<<"\n";

    Student student4("tom", 23, 2007);
    cout<<student4.ID<<" "<<student4.year<<" "<<student4.name<<"\n";

    return 0;
}
