import java.util.Scanner;
public class CamelCase{
    public static void main(String args[]){
        int count=1;
        Scanner sc=new Scanner(System.in);
        String line=sc.nextLine();
        char[] ch=new char[line.length()];
        for(int i=0;i<line.length();i++){
            ch[i]=line.charAt(i);
        }
        for(int i=0;i<line.length();i++){
            
             if (ch[i] >= 'A' && ch[i] <= 'Z') {
                 count++;
             }
        }
        System.out.println(count);
        
    }
}
