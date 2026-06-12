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

    int res[col][row];

    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            res[i][j]=arr[j][i];
        }
    }

    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            if(res[i][j]!=arr[i][j]){
                printf("Not a Symmetric matrix");
                return 0;
            }    
        }
    }
    printf("Symmetric matrix");
    return 0;
}