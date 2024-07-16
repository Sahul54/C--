#include<bits/stdc++.h>
using namespace std;
class Human
{
protected: 
string name;
int age;

public:

Human(string name, int age){
    this->name = name;
    this->age = age;
}
void display(){
    cout<<"Name: "<<name<<" "<<"age: "<<age;
}
void work(){
    cout<<"I am working";
}
};

class Student: public Human
{
    int roll_no, fees;

    public:
    Student(string name, int age, int roll_no, int fees): Human(name, age)
    {
        this->roll_no = roll_no;
        this->fees = fees;
    }
    void display(){
        cout<<"Name: "<<name<<" "<<"age: "<<age<<" "<<"Roll No: "<<roll_no<<" "
        
        <<"Age: "<<age;
    }
    void work(){
        cout<<"Student is working";
    }
};

int main(){
    Student S1("Rahul", 22, 12, 4000);
    S1.display();
  return 0;
}