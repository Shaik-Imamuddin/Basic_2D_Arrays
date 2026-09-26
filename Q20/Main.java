import java.util.*;

public class Main{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);

        int row,col;
        row=sc.nextInt();
        col=sc.nextInt();

        int[][] arr=new int[row][col];

        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                arr[i][j]=sc.nextInt();
            }
        }

        int[][] res=new int[col][row];

        for(int i=0;i<col;i++){
            for(int j=0;j<row;j++){
                res[i][j]=arr[j][i];
            }
        }

        for(int i=0;i<col;i++){
            for(int j=0;j<row;j++){
                if(res[i][j]!=arr[i][j]){
                    System.out.println("Not a Symmetric matrix");
                    return;
                }
            }
        }

        System.out.println("Symmetric matrix");
    }
}