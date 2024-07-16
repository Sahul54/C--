#include<bits/stdc++.h>
using namespace std;

// They are atterbutes of classes or class member

class Customer
{
    string name;
    int account_no; 
    int balance;
    static int total_account;

public:
    Customer(string name, int account_no, int balance)
    {
        this->name = name;
        this->account_no = account_no;
        this->balance = balance;
        total_account++;
    }
    
    void display() const
    {
        cout << name << " " << account_no << " " << balance << " " << total_account << endl;
    }
};

int Customer::total_account = 0;

int main(){
    Customer A1("Rothit", 1, 100);
    Customer A2("Mohit", 2, 200);
    A1.display();
    A2.display();
  return 0;
}