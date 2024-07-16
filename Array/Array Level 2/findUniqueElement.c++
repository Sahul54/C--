#include<bits/stdc++.h>
using namespace std;

int findUnique(int arr[], int n){
    int ans = 0;

    for(int i = 0; i<n; i++){
        ans ^= arr[i];
    }
    return ans;
}
int main(){
    int arr[] = {1, 2, 3, 4, 5, 5, 3, 2, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
  

    cout<<findUnique(arr, n);
   
  return 0;
}