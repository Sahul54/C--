#include<bits/stdc++.h>
#include<fstream>
using namespace std;

int main(){

    vector<int> arr(5);
    cout<<"Enter the input in 5 size: ";
    for(int i=0; i<5; i++){
        cin>>arr[i];
    }

    // file open
    ofstream fout;
    fout.open("FileSort.text");

    fout<<"Original data: ";
    for(int i=0; i<5; i++){
        fout<<arr[i]<<" ";
    }

    fout<<"\nSorted data: ";
    sort(arr.begin(), arr.end());
     for(int i=0; i<5; i++){
        fout<<arr[i]<<" ";
    }

    fout.close();
  return 0;
}