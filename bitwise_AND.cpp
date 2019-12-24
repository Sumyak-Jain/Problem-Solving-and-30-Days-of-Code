#include <iostream>
using namespace std;

int main()
{    
 int T, n, k, i, j, val;
 cin>>T;
    
 while(T>0)
    {    
        int maximum = 0;
        cin>>n>>k;
        
        for (i=1;i<n-1;i++) 
 {
            for (j=i+1;j<=n;j++) 
 {
                val=i&j;
                           
 if (val>maximum&&val<k) 
                    maximum = val;                    
            }    
        }
            cout<<maximum<<endl;
        T--;
    }
 return 0;
}
