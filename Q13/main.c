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
    int maxsum=0,maxrow=0;
    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<col;j++){
            sum+=arr[i][j];
        }
        if(sum>maxsum){
            maxsum=sum;
            maxrow=i;
        }
    }
    for(int i=0;i<row;i++){
        printf("%d ",arr[maxrow][i]);
    }
    
    return 0;
}