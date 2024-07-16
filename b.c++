#include<bits/stdc++.h>
using namespace std;

void extreamArray(int arr[], int s){
    int start = 0;
    int end = s - 1;

    while (start <= end)
    {
        if(start == end){
            cout<<start;
        }
        else{
            cout<<arr[start]<<" ";
            cout<<arr[end]<<" ";
            
        }
        start++;
        end--;
    }
    
}
int main(){
    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = sizeof(arr)/ sizeof(arr[0]);
    
    extreamArray(arr, n);
  return 0;
}