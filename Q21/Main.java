import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        
        Scanner sc=new Scanner(System.in);
        
        int n=sc.nextInt();
        int[][] arr=new int[n][n];
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                arr[i][j]=sc.nextInt();
            }
        }
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if((i==j&&arr[i][j]!=1)||(i!=j&&arr[i][j]!=0)){
                    System.out.print("Not an Identity Matrix");
                    return;
                }
            }
        }
        System.out.print("Identity Matrix");
    }
}