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

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

/*

1234

n/10
n%10

Syntax:

    for(intialization;condition;increment/decrement){
        statement-block;
    }

    while(condition){
        statement-block;
    }

    do{
        statement-block;
    }while(condition);

*/