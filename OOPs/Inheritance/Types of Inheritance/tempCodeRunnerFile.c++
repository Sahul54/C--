#include<bits/stdc++.h>
using namespace std;

class Human
{
    protected:
    string name;
    int age;

    public:
    // Human(){

    // }

    Human(string name, int age){
        this->name = name;
        this->age = age;
    }

    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};

class Student: public Human
{
    int roll_no, fee;

    public: 
    Student(string name, int age, int roll_no, int fee): Human(name, age){
        this->roll_no = roll_no;
        this->fee = fee;
    }

    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Roll no: "<<roll_no<<endl;
        cout<<"Fee: "<<fee<<endl;
    }
};


class Teacher: public Human
{
    int salary;
    public:
    Teacher(int salary, string name, int age): Human(name, age){
        this->salary = salary;
    
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
};
int main(){
   Student S1("sahul", 22, 1, 2000);
    S1.display();
    cout<<endl;
    Teacher T1("Rohit", 26, 5000);
    T1.display();
  return 0;
}