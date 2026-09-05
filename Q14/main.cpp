#include<iostream>
using namespace std;

int main(){
    int row,col;
    cin>>row>>col;

    int arr[row][col];

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }

    int minsum = 0;
    int minrow = 0;

    for(int i=0;i<row;i++){
        int sum = 0;
        for(int j=0;j<col;j++){
            sum += arr[i][j];
        }

        if(sum<minsum){
            minsum = sum;
            minrow = i;
        }
    }

    for(int j=0;j<col;j++){
        cout<<arr[minrow][j]<<" ";
    }
    return 0;
}