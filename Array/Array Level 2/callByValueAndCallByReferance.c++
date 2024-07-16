#include<bits/stdc++.h>
using namespace std;
// Call by value  -> is me copy value ban jata hai
void solve(int a){
    a++;
    cout<<"Call By Value : "<<a<<endl;
    return;
}

// call by Referance -> is me a k location mai ja k value chance haota hai
void solve1(int &a){
    a++;
    cout<<"Call By Refarance : "<<a<<endl;
}
int main(){
    int a  = 7;
    // solve(a);
    solve1(a);
    cout<<a<<endl;

  return 0;
}