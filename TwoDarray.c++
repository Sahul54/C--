#include<bits/stdc++.h>
using namespace std;

bool findTaget(int arr[][3], int row, int col, int target){
    bool flag = false;

    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            if(arr[i][j] == target){
                flag = true;
            }
        }
    }
    return flag;

}

int findMin(int arr[][3], int row, int col){
    int min = INT_MAX;

    for(int i = 0; i<row; i++){
        for(int j =0; j<col; j++){
            if(arr[i][j] < min){
                min=arr[i][j];
            }
        }
    }
    cout<<"MIN: "<<min;
}

int findMax(int arr[][3], int row, int col){
    int max = INT_MIN;

    for(int i = 0; i<row; i++){
        for(int j =0; j<col; j++){
            if(arr[i][j] > max){
                max=arr[i][j];
            }
        }
    }
    cout<<"Max: "<<max;
}

int findSumRow(int arr[][3], int row, int col){
    for(int i = 0; i<row; i++){
        int sum = 0;
        for(int j =0; j<col; j++){
            sum +=arr[i][j];
        }
        cout<<"Row"<<i+1 <<": "<<sum<<endl;
    }
    
}

int findSumCol(int arr[][3], int row, int col){
    for(int i = 0; i<col; i++){
        int sum = 0;
        for(int j =0; j<row; j++){
            sum +=arr[j][i];
        }
        cout<<"Col"<<i+1 <<": "<<sum<<endl;
    }
    
}

void transpose(int arr[][3], int row, int col){
     for(int i = 0; i < row; i++){
        for(int j = i; j < col; j++){
            swap(arr[i][j], arr[j][i]);
        }
    }

    // Print the transposed matrix
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
int main(){
    int arr[][3] = {
                    {1,2,3},
                    {4,5,6},
                    {7,8,9}
                };
    int row = 3;
    int col = 3;
    int target = 11;

    // findMin(arr, row, col);
    // findMax(arr, row, col);

    findSumRow(arr, row, col);
    findSumCol(arr, row, col);

    transpose(arr, row, col);

    // bool ans = findTaget(arr, row, col, target);

    // if(ans){
    //     cout<<"Target is found"<<endl;
    // }
    // else{
    //     cout<<"Target is not fiund"<<endl;
    // }
  return 0;
}