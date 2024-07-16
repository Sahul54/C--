#include<bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int age; 
    int roll;
};


int main(){
    Student S1;
    S1.name = "Rahul";
    S1.age = 12;
    S1.roll = 42;

    cout<<S1.name<<" "<<S1.age<<" "<<S1.roll;
  return 0;
}