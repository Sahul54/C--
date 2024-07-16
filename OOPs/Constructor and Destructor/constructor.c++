#include<bits/stdc++.h>
using namespace std;

// A constructor is a special member function that is automatically called when an object of that class is created. 
// Its main purpose is to initialize the object's data members.

class Customer
{
    string name;
    int accountNo;
    int balance;
    int *arr;

    public: 
    // Default Constructor
    Customer()
    {
        name = "Sonu";
        accountNo = 1234;
        balance = 1000;
        arr = new int[100];
    }

    // Parameterized Constructor
    // Customer(string name, int accountNo, int balance)
    // {
    //     this->name = name;
    //     this->accountNo = accountNo;
    //     this->balance = balance;
    // }

    // Overloading
    Customer(string name, int accountNo)
    {
        this->name = name;
        this->accountNo = accountNo;
    }

    // Inline Constructor
    inline Customer(string a, int b, int c): name(a), accountNo(b), balance(c)
    {

    }

    // Copy Constructor

    Customer(Customer &A){
        name = A.name;
        accountNo = A.accountNo;
        balance = A.balance;
    }

    void display()
    {
        cout<<name<<" "<<accountNo<<" "<<balance<<endl;
    }
};
int main(){
  Customer A1;
  A1.display();
  Customer A2("Rohit", 123, 100);
  A2.display();
  Customer A3("Rohit", 123);
  A3.display();

  // Copy Constructor call
  Customer A4(A1);
  A4.display();

    return 0;
}