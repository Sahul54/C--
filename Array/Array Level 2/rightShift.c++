#include<bits/stdc++.h>
using namespace std;

void rightShift(int arr[], int n){
    //1. copy last element
    int temp = arr[n-1];

    //2. right sift
    for(int i = n-1; i>=1; i--){
        arr[i] = arr[i-1];
    } 

    arr[0] = temp;

    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

void leftShift(int arr[], int n){
    //1. copy last element
    int temp = arr[0];

    //2. left sift
    for(int i = 0; i<n-1; i++){
        arr[i] = arr[i+1];
    } 

    arr[n-1] = temp;

    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[] = {10,20,30,40,50,60};
    int n = 6;

    // rightShift(arr, n);
    cout<<endl;
    leftShift(arr, n);
  return 0;
}