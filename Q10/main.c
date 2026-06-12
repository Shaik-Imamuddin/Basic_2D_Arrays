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
    for(int i=0;i<row;i++){
        int max = arr[0][i];
        for(int j=0;j<col;j++){
            if(arr[j][i]>max){
                max = arr[j][i];
            }
        }
        printf("%d\n",max);
    }
    return 0;
}