#include<bits/stdc++.h>
using namespace std;

class Human
{
    private:
    int a;
    protected:
    int b;
    public:
    int c;

    void fun()
    {
    a = 10;
    b = 20;
    c = 30;
    }
};
int main(){
    Human Rohit;
    // Can not be access external class 
    // Rohit.a;
    // Rohit.b;
    Rohit.c;
    Rohit.fun();
  return 0;
}