#include<iostream>
using namespace std;
int main()
{int matrix[100][100],size,j,i,sum1=0,sum2=0,diff;
cin>>size;
for(i=0;i<size;i++)
{
    for(j=0;j<size;j++)
    {
        cin>>matrix[i][j];
    }
}

for(i=0;i<size;i++)
{
    for(j=0;j<size;j++)
    {
        if(i==j)
        sum1+=matrix[i][j];
        if((i+j)==(size-1))
        sum2+=matrix[i][j];
        
        
    }
    
}
    if(sum1>sum2)
diff=sum1-sum2;
else
diff=sum2-sum1;    
cout<<diff;
return 0;

}
