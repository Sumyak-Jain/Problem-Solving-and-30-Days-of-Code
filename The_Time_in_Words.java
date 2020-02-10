import java.util.Scanner;
public class sol{
    static void words(int h,int m){
         
        String nums[] = { "zero", "one", "two", "three", "four", 
                            "five", "six", "seven", "eight", "nine", 
                            "ten", "eleven", "twelve", "thirteen", 
                            "fourteen", "fifteen", "sixteen", "seventeen", 
                            "eighteen", "nineteen", "twenty", "twenty one", 
                            "twenty two", "twenty three", "twenty four", 
                            "twenty five", "twenty six", "twenty seven", 
                            "twenty eight", "twenty nine", 
                        }; 
                         if (m == 0) 
            System.out.println(nums[h] + " o' clock "); 
      
        else if (m == 1) 
            System.out.println("one minute past " +  
                                            nums[h]); 
      
        else if (m == 59) 
            System.out.println("one minute to " +  
                            nums[(h % 12) + 1]); 
      
        else if (m == 15) 
            System.out.println("quarter past " + nums[h]); 
      
        else if (m == 30) 
            System.out.println("half past " + nums[h]); 
      
        else if (m == 45) 
            System.out.println("quarter to " +  
                                nums[(h % 12) + 1]); 
      
        else if (m <= 30) 
            System.out.println( nums[m] + " minutes past " + 
                                                    nums[h]); 
      
        else if (m > 30) 
            System.out.println( nums[60 - m] + " minutes to " +      
                                                nums[(h % 12) + 1]); 
    } 
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int h=sc.nextInt();
        int m=sc.nextInt();
        words(h,m);

    }
    }

