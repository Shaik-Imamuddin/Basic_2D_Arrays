#include<stdio.h>
int main(){
    int row,col;
    scanf("%d%d",&row,&col);

    int arr[row][col];

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int minsum=0,minrow=0;
    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<col;j++){
            sum+=arr[i][j];
        }
        if(sum<minsum){
            minsum=sum;
            minrow=i;
        }
    }
    for(int i=0;i<row;i++){
        printf("%d ",arr[minrow][i]);
    }
    return 0;
}