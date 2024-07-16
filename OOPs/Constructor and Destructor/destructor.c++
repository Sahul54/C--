#include<bits/stdc++.h>
using namespace std;

// A destructor is a special member function that is automatically called 
// when an object goes out of scope or is explicitly deleted. 
// Its main purpose is to release resources that the object may have acquired during its lifetime.

class Customer
{
  string name;
  int *data;

  public:

  Customer()
  {
    name= "4";
    cout<<"Cunstructor is "<<name<<endl;
  }
  Customer(string name)
  {
    this-> name = name;
    cout<<"Constructor is "<<name<<endl;
  }

  ~Customer()
  {
    cout<<"Destructor is "<<name<<endl;
  }


};
int main(){
  Customer A1("1"), A2("2"), A3("3");
  Customer *A4 = new Customer;
  delete A4;  // memory relase
  return 0;
}