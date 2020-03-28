#include<stdio.h>
#include<math.h>
int main()
{
int t;
scanf("%d\n",&t);//take  number of test cases
for(int i=1;i<=t;i++)
{
int e;
scanf("%d\n",&e);//take the number
int p=e;//store the number in other variable p
int d,c=0;
while(p>0)//till p > 0
{
d=p%10;//modulus 10 to get tenth place digit
if(d!=0 && e%d==0)//check the condition
c++;//increment
p=p/10;//after spliting one digit we have to split other,This can be achieved by dividing the number by 10 and take the modulo 10.

}
printf("%d\n",c);
}
return 0;
}
