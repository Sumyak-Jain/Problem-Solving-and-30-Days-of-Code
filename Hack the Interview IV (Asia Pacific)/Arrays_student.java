import java.util.Arrays;
import java.util.Scanner;
public class Arrays_student{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int a=sc.nextInt();
        for(int i=0;i<a;i++){
            int b=sc.nextInt();
           int girl[]=new int[b]; 
            int boi[]=new int[b];
            int c=b*2;
            int classe[]=new int[c];
            
            for(int j=0;j<b;j++){
                boi[j]=sc.nextInt();
            }
             for(int k=0;k<b;k++){
                girl[k]=sc.nextInt();
            }
             Arrays.sort(boi);
             Arrays.sort(girl);
             if(boi[0]>girl[0]){
                  classe[0]=girl[0];
                  int size=0;
                    for(int w=1;w<c;w += 2){
                        classe[w]=boi[size];
                        size=size+1;
             }
                    int si=1;
                    for(int z=2;z<c;z +=2){
                        classe[z]=girl[si];
                        si=si+1;
                    }
                    
              
             }
             else if(boi[0]<girl[0]){
                
                 classe[0]=boi[0];
                   int siz=0;
                    for(int f=1;f<c;f += 2){
                        classe[f]=girl[siz];
                        siz=siz+1;
             }
                    int s=1;
                    for(int g=2;g<c;g +=2){
                        classe[g]=boi[s];
                        s=s+1;
                    }
               
             }
             boolean sorted = true;
             String ans="YES";
              for(int r=0;r<c-1;r++){
                  if(classe[r]>classe[r+1]){
                      sorted = false;
                      ans="NO";
                        break;
                  }
        }
              System.out.println(ans);
        }
       
    }
}
