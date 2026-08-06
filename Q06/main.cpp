#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n][n];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    int rd=0,ld=0;
    for(int i=0;i<n;i++){
        rd+=arr[i][i];
        ld+=arr[i][n-i-1];
    }
    cout<<rd<<"\n"<<ld;
    return 0;
}