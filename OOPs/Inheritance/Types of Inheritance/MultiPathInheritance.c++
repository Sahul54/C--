#include<bits/stdc++.h>
using namespace std;

class Human
{
    public:
    string name;
     
    void display(){
        cout<<"I am human";
    }
};

class Engineer: virtual public Human
{
    public:

    string  stream;

    void work(){
        cout<<"My stream is : "<<stream<<endl;
    }
};

class Youtuber: virtual public Human
{
    public:
    int subscribers;
    void contentcreater(){
        cout<<"My Subscriber is : "<<subscribers<<endl;
    }
};

class CodeTeacher: public Engineer, public Youtuber
{
    public: 
    CodeTeacher(string name, string stream, int subscribers)
    {
        this->name = name;
        this->stream= stream;
        this->subscribers = subscribers;
    }

    void showCase(){
        cout<<"My name is: "<<name<<endl;
        work();
        contentcreater();
    }
};

int main(){
    CodeTeacher A1("Sahul", "CSE", 10);
    A1.showCase();
    A1.display();
  return 0;
}