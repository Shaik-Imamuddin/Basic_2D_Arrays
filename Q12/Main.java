import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);

        int row=sc.nextInt();
        int col=sc.nextInt();

        int[][] arr=new int[row][col];

        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                arr[i][j]=sc.nextInt();
            }
        }

        for(int j=0;j<col;j++){
            int minValue=arr[0][j];

            for(int i=1;i<row;i++){
                if(arr[i][j]<minValue){
                    minValue=arr[i][j];
                }
            }

            System.out.println(minValue);
        }
    }
}