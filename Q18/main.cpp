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

    int res[col][row];

    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            res[i][j]=arr[j][i];
        }
    }

    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}