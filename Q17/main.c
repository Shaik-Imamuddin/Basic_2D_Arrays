#include<stdio.h>
int main(){
    int row1,col1;
    scanf("%d%d",&row1,&col1);
    int arr1[row1][col1];
    for(int i=0;i<row1;i++){
        for(int j=0;j<col1;j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    
    int row2,col2;
    scanf("%d%d",&row2,&col2);
    int arr2[row2][col2];
    for(int i=0;i<row2;i++){
        for(int j=0;j<col2;j++){
            scanf("%d",&arr2[i][j]);
        }
    }
    int res[row1][col2];

    for(int i=0;i<row1;i++){
        for(int j=0;j<col2;j++){
            res[i][j]=0;
            for(int k=0;k<col1;k++){
                res[i][j]+=(arr1[i][k]*arr2[k][j]);
            }
        }
    }

    for(int i=0;i<row1;i++){
        for(int j=0;j<col2;j++){
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }
    return 0;
}