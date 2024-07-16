#include<bits/stdc++.h>
using namespace std;

class Engineer
{
    public:

    Engineer(){
        cout<<"I am Engineer"<<endl;;
    }
    string  stream;

    void work(){
        cout<<"My stream is : "<<stream<<endl;
    }
};

class Youtuber
{
    public:
    Youtuber(){
        cout<<"I am Youtuber"<<endl;;
    }
    int subscribers;

    void contentcreater(){
        cout<<"My Subscriber is : "<<subscribers<<endl;
    }
};

class CodeTeacher: public Engineer, public Youtuber
{
    public: 
    CodeTeacher(){
        cout<<"I am CodeTeacher"<<endl;
    }
    string name;

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

    //  CodeTeacher A1;
  return 0;
}