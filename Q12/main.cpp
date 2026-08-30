#include <iostream>
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

    for(int j=0;j<col;j++){
        int minValue = arr[0][j];

        for(int i=1;i<row;i++){
            if(arr[i][j]<minValue){
                minValue = arr[i][j];
            }
        }
        cout<<minValue<<endl;
    }
    return 0;
}