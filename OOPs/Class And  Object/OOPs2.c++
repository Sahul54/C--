#include<bits/stdc++.h>
using namespace std;


class Student
{

private:
    string name;
    int age; 
    int roll;

// getter and setter
public: 
    void setName(string s){
        name = s;
    }

    void setAge(int a){
        age = a;
    }

    void getName(){
        cout<<name;
    }

    void getage(){
        cout<<age;
    }
};

int main(){
    Student S1;
    S1.setName("Rohit");
    S1.getName();
    S1.setAge(12);
    S1.getage();

  return 0;
}