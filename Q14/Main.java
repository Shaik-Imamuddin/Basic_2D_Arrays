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

        int minsum=0;
        int minrow=0;

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

        for(int j=0;j<col;j++){
            System.out.print(arr[minrow][j]+" ");
        }
    }
}