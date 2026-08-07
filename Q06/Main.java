import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int arr[][] = new int[n][n];

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                arr[i][j] = sc.nextInt();
            }
        }

        int ld=0,rd=0;

        for(int i=0;i<n;i++){
            rd+=arr[i][i];
            ld+=arr[i][n-i-1];
        }

        System.out.println(rd+" "+ld);
    }
}