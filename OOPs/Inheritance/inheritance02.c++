#include<bits/stdc++.h>
using namespace std;

class Human
{
    string religion, color;
    public:
    string name;
    int age;
};

class Student: protected Human
{
    int roll_no, fee;

    public:
    Student(string name, int age, int roll_no, int fee)
    {
        this->name = name;
        this->age = age;
        this->roll_no = roll_no;
        this->fee = fee;
    }

    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Roll no: "<<roll_no<<endl;
        cout<<"Fees: "<<fee<<endl;
    }
   
};

class Teacher: protected Human{
    int id, salary;

    public:
    Teacher(string name, int age, int id, int salary)
    {
        this->name = name;
        this->age = age;
        this->id = id;
        this->salary = salary;
    }

    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Id no: "<<id<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
};
int main(){
    Student A("Sahul", 22, 1, 2000);
    A.display();
    Teacher T("Rohit", 28, 123, 10000);
    T.display();
    return 0;
}