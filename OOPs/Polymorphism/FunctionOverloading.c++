#include<bits/stdc++.h>
using namespace std;

class Area
{
    public:
    float areaOfCricle(int r){   // function overloading
        return 3.14*r*r;
    }

    int areaOfRetangle(int l, int b){   // function overloading
        return l*b;
    }
};

int main(){
    Area A1;
    cout<<A1.areaOfCricle(2)<<endl;
    cout<<A1.areaOfRetangle(2,3);

  return 0;
}