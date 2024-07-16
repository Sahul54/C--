#include<bits/stdc++.h>
using namespace std;

class Person
{
    public:
    string name;

    public:
    void introduce(){
        cout<<"Hello ji mera naam hai "<<name<<endl;
    }
};

class Employee: public Person
{
    protected:
    int salary;

    public:
    void monthly_salary(){
        cout<<"Mera salary hai "<<salary;
    }
};

class Manager: public Employee
{
    public:
    string dept;

    Manager(string name, int salary, string dept){
        this-> name = name;
        this->salary = salary;
        this->dept = dept;
    }
    void work(){
        cout<<"Mera kam hai lead krna "<<dept<<endl;
    }
};

int main(){
   Manager M1("Sahul", 10000, "Finance");
   M1.monthly_salary(); 
  return 0;
}