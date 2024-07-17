#include<bits/stdc++.h>
using namespace std;
// Student 
// Boy
// Girl
// Male
// Female

class Student
{   
    public:
    void print(){
        cout<<"I am Student"<<endl;
    } 
};

class Male
{
    public:
    void malePrint(){
        cout<<"I am male"<<endl;
    }
};

class Female
{
    public:
    void femalePrint(){
        cout<<"I am female"<<endl;
    }
};

class Boy: public Student, public Male
{
    public:
    void boyPrint(){
        cout<<"I am boy"<<endl;
    }
};

class Girl: public Student, public Female
{
    public:
    void girlPrint(){
        cout<<"I am Girl"<<endl;
    }
};

int main(){
    Boy B1;
    B1.print();
  return 0;
}