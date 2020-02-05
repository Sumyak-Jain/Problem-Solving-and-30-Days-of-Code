#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
            long long int p,q,i,j,s,x,z,t,r;
            cin>>p;
            cin>>q;
            r = 0;
            for(i=p;i<=q;i++)
            {
                        s = i*i;
                        x = 1;
                        t = i;
                        while(t>0)
                        {
                                    x = x*10;
                                    t = t/10;
                        }
                        z = s%x;
                        s = s/x;
                        if(i == z + s)
                        {
                                    r++;
                                    cout<<i<<" ";
                        }
            }
            if(r==0)
            {
                        cout<<"INVALID RANGE"<<endl;
            }
    return 0;
}
