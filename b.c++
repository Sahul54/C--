// // #include<bits/stdc++.h>
// // using namespace std;

// // void extreamArray(int arr[], int s){
// //     int start = 0;
// //     int end = s - 1;

// //     while (start <= end)
// //     {
// //         if(start == end){
// //             cout<<start;
// //         }
// //         else{
// //             cout<<arr[start]<<" ";
// //             cout<<arr[end]<<" ";
            
// //         }
// //         start++;
// //         end--;
// //     }
    
// // }
// // int main(){
// //     int arr[] = {10, 20, 30, 40, 50, 60};
// //     int n = sizeof(arr)/ sizeof(arr[0]);
    
// //     extreamArray(arr, n);
// //   return 0;
// // }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     // int a= 5;
//     // int *ptr = &a;
//     // int *q =ptr;
//     // cout<<*ptr;
//     // cout<<*q;

//      int a = 3 > 2 ? 0 ? 0 : 1 : 5; 
//      cout<<a;
//   return 0;
// }


#include <iostream>
using namespace std;

int main() {
    // Declare variables to hold the values of a, b, and c
    int a, b;

    // Accept input values for a, b, and c
    cout << "Enter the values of a, b, and c: ";
    cin >> a >> b;

    // Compute the result of the equation a^3 + a^2b + 2a^2b + 2ab^2 + ab^2 + b^3
    int result = a*a*a + a*a*b + 2*a*2*b + 2*a*2*b + a*b*b + b*b*b;

    // Output the result
    cout << "The result of the equation is: " << result << endl;

    return 0;
}
