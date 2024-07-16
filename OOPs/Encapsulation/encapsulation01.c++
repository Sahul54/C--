#include<bits/stdc++.h>
using namespace std;

class Customer
{
    string name;
    int account_no, balance;
    int age;

    public:
    
    Customer(string name, int account_no, int balance, int age)
    {
        this->name = name;
        this->account_no = account_no;
        this->balance = balance;
        this->age = age;
    }

    void deposit(int amount)
    {
        if(amount > 0){
            balance += amount;
        }
        else{
            cout<<"Invalid amount"<<endl;
        }

    }
    
    void withdraw(int amount){
        if(amount <= balance && amount > 0  ){
             balance -= amount;
        }
        else{
            cout<<"Invalid amount"<<endl;
        }
    }

    void updateAge(int age){
        if(age>0 && age<100){
            this->age = age;
        }
        else{
            cout<<"Invalid Age"<<endl;
        }
    }

    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Account No: "<<account_no<<endl;
        cout<<"Balance: "<<balance<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<endl;
        
    }
};
int main(){
    Customer A1("sahul", 123, 1000, 22);
    A1.display();
    A1.deposit(100);
    A1.display();
    A1.withdraw(100);
    A1.display();
    A1.updateAge(23);
    A1.display();


  return 0;
}