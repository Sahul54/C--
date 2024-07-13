#include<bits/stdc++.h>
using namespace std;

class Customer
{
    string name;
    int accountNo;
    int blance;
    int *arr;

    public: 
    // Default Constructor
    Customer()
    {
        name = "Sonu";
        accountNo = 1234;
        blance = 1000;
        arr = new int[100];
    }

    // Parameterized Constructor
    // Customer(string name, int accountNo, int blance)
    // {
    //     this->name = name;
    //     this->accountNo = accountNo;
    //     this->blance = blance;
    // }

    // Overloading
    Customer(string name, int accountNo)
    {
        this->name = name;
        this->accountNo = accountNo;
    }

    // Inline Constructor
    inline Customer(string a, int b, int c): name(a), accountNo(b), blance(c)
    {

    }

    // Copy Constructor

    Customer(Customer &A){
        name = A.name;
        accountNo = A.accountNo;
        blance = A.blance;
    }

    void display()
    {
        cout<<name<<" "<<accountNo<<" "<<blance<<endl;
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