import java.io.*;
import java.util.*;

public class prime {

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int a=sc.nextInt();
        int arr[]=new int[a];
        for(int i=0;i<a;i++){
            arr[i]=sc.nextInt();
        }
        for(int j=0;j<a;j++){
             boolean flag = false;
             
        for(int k = 2; k <= arr[j]/2; k++)
        {
            if(arr[j]==1){
                 continue;
            }
            else if(arr[j] % k == 0)
            {
                flag = true;
                break;
            }
        }
        if(arr[j]==1){
               System.out.println("Not prime"); 
               break; 
             }

        else if (!flag)
            System.out.println("Prime");
        else
            System.out.println("Not prime");
        }

    }
}
