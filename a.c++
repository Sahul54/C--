#include<bits/stdc++.h>
using namespace std;
void count(int arr[], int size){
    int zero =0;
    int one =0;
    for(int i =0; i<size; i++){
        if(arr[i] == 0){
            zero++;
        }
        else{
            one++;
        }
    }
    // cout<<zero<<" "<<one;
}


void minNo(int arr[], int size){
    int min = INT_MAX;

    for(int i = 0; i<size; i++){
        if(min>arr[i]){
            min = arr[i];
        }
    }
    cout<<min<<endl;
}

void maxNo(int arr[], int size){
    int max = INT_MIN;

    for(int i = 0; i<size; i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    cout<<max<<endl;
}


void reverse(int arr[], int size){
    int start = 0;
    int end = size-1;

    

    while (start <= end)
    {
        // 01. ---------swap-----------
        // swap(arr[start], arr[end]);
        // start++;
        // end--;

        // 02. -----Swap without third vairable------
        // arr[start] = arr[start] + arr[end];
        // arr[end] = arr[start] - arr[end];
        // arr[start] = arr[start] - arr[end];
        // start++;
        // end--;

        

        
    }

    // 03. -----Revcerse Function-------- 
    reverse(arr, arr + size);
    
    for(int i = 0; i< size; i++){
        cout<<arr[i]<< " ";
    }
    
}
int main(){
    int arr[] = {2,7,1,8,6,4,900,5};
    int size = sizeof(arr)/ sizeof(arr[0]);
    // cout<<size;
    // int a =9;
    // int  b =5;
    // cout<<max(a,b);

    // reverse(arr, arr + size);

    // for(int n : arr){
    //    cout<<n<<" ";
    // }

    reverse(arr, size);

    // minNo(arr, size);
    // maxNo(arr, size);

    // count(arr, size);
  return 0;
}