#include<bits/stdc++.h>
#include<fstream>
using namespace std;

int main(){
    // print-> 2 3 4 5 6
    // short->
    // print->

    // ofstream fout;
    // fout.open("SortPrint.txt");

    // write
    ofstream fout("SortPrint.txt");
    fout << "3 4 5 6 1";
    fout.close();

    // Read
    ifstream fin("SortPrint.txt");
    vector<int> arr;
    int num;

    while (fin >> num)
    {
        arr.push_back(num);
    }
    fin.close();

    cout<<"Before sort: ";
    for(int i: arr){
        cout<<i<<" ";
    }

    // sorted
    sort(arr.begin(), arr.end());
    
    cout<<"\nAfter sort: ";
    for(int i: arr){
        cout<<i<<" ";
    }
  return 0;
}