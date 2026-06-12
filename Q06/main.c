#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n][n];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int rd=0,ld=0;

    for(int i=0;i<n;i++){
            rd+=arr[i][i];
            ld+=arr[i][n-i-1];
    }
    printf("%d\n%d",rd,ld);
    return 0;
}