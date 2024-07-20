#include<bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int age; 
    int roll;

    // void fun(){
    //   cout<<name<<" "<<age<<" "<<roll;
    // }
};


int main(){
    Student S1;
    S1.name = "Rahul";
    S1.age = 12;
    S1.roll = 42;

    // S1.fun();

    cout<<S1.name<<" "<<S1.age<<" "<<S1.roll;
  return 0;
}