#include<iostream>
using namespace std;

int main(){
    int row,col;
    cin>>row>>col;

    int arr1[row][col];
    int arr2[row][col];

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr1[i][j];
        }
    }

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr2[i][j];
        }
    }

    int res[row][col];

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            res[i][j]=arr1[i][j]+arr2[i][j];
        }
    }

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}