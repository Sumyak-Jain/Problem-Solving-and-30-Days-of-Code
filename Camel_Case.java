import java.util.Scanner;
public class CamelCase{
    public static void main(String args[]){
        int count=1;//initialize count to 1
        Scanner sc=new Scanner(System.in);
        String line=sc.nextLine();//take input of the string and save it to line
        char[] ch=new char[line.length()];//declare a char array of the size length of the string
        for(int i=0;i<line.length();i++){
            ch[i]=line.charAt(i);//convert string to char array
        }
        for(int i=0;i<line.length();i++){
            //check when the uppercase letter appear and count++
             if (ch[i] >= 'A' && ch[i] <= 'Z') {
                 count++;
             }
        }
        System.out.println(count);
        
    }
}
