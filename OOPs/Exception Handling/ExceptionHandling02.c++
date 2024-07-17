#include<bits/stdc++.h>
using namespace std;
int main(){
    try{
        int *p = new int[10000000000];
        cout<<"Memory allocated Successfully"<<endl;
        delete[] p;
    }
    catch(const exception &e)
    {
        cout<<"Exception Occured Due to line 5"<<e.what()<<endl;
    }
  return 0;
}