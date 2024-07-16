#include<bits/stdc++.h>
using namespace std;

void printZeroOne(int arr[], int n){
    int s =0;
    int e = n-1;

    while(s<=e){
        if(s==0) s++;
        if(e==1) e--;

        if(s==1 && e==0){
            swap(arr[s], arr[e]);
            s++;
            e--;
        }
        
    }

    for(int i =0; i<n; i++){
        cout<<arr[i]<<" ";
    }


    // int zero = 0;
    // int one = 0;

    // for(int i=0; i<n; i++){
    //     if(arr[i] == 0){
    //         zero++;
    //     }
    //     else{
    //         one++;
    //     }
    // }

    // for(int i =0; i<zero; i++){
    //     cout<<"0 ";
    // }
  
    // for(zero; zero<n; zero++){
    //     cout<<"1 ";
    // }

    // while (zero--)
    // {
    //     cout<<"0 ";
    // }

    // while (one--)
    // {
    //     cout<<"1 ";
    // }
    

}
int main(){
    int arr[] = {0,1,0,1,0,1,1,0};
    int n = sizeof(arr)/ sizeof(arr[0]);

    printZeroOne(arr, n);
  return 0;
}