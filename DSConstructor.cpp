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

void print(Student student){
    cout<<student.ID<<" "<<student.year<<" "<<student.name<<"\n";
}

int main(){
    print(student1);

    Student student2;
    print(student2);

    Student student3(2018);
    print(student3);

    Student student4("tom", 23, 2007);
    print(student4);

    return 0;
}
