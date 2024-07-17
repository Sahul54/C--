#include<bits/stdc++.h>
using namespace std;

class Customer
{
    string name;
    int balance, account_no;

    public:
    Customer(string name, int balance, int account_no){
        this->name = name;
        this->balance = balance;
        this->account_no= account_no;
    }

    void deposit(int amount){
        if(amount>0){
            balance += amount;
            cout<<amount<<" Rs created is successfully\n";
        }
        else{
            throw runtime_error ("Amount enter should be grater then 0\n");
        }
    }

    void Withdraw(int amount){
        if(amount>0 && amount<=balance){
            balance -= amount;
            cout<<amount<<" Rs Debited is sucessfully\n";
        }
        else if(amount >= balance){
            throw runtime_error ("Your balance is low \n");
        }
        else{
            throw runtime_error ("Amount enter should be grater then 0 \n");
        }
    }
};

int main(){
    Customer C1("Rohit", 200, 123);
    try{
        C1.deposit(100);
        C1.Withdraw(100);
        C1.Withdraw(100);
        C1.Withdraw(100);
        C1.Withdraw(100);
        C1.Withdraw(-303);
    }

    // catch(const char *e){
    //     cout<<"Exception Occures: "<<e;
    // }

    catch(const runtime_error &e){
        cout<<"Exception Occures: "<<e.what();
    }
  return 0;
}
