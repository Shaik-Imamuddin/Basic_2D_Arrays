#include<stdio.h>
int main(){
    int row,col;
    scanf("%d%d",&row,&col);

    int arr[row][col],sum=0;

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&arr[i][j]);
            sum+=arr[i][j];
        }
    }
    printf("%.2f",(float)sum/(row*col));
    return 0;
}