#include<iostream>
using namespace std;
int main()
{
    int d,m,y,f,d1,m1,y1;
    cin>>d>>m>>y;
    cin>>d1>>m1>>y1;
    if(d==d1||d<d1&&y<y1)
    {
        f=0;
    }
    else if(d>d1&&m==m1)
    {
        f=15*(d-d1);
    }
    else if(d==d1&&m>m1&&y==y1)
    {
        f=500*(m-m1);
    }
   
    else if(d!=d1&&m>m1&&y==y1)
    {
        f=500*(m-m1);
    }
    else if(d!=d1&&m!=m1&&y>y1)
    {
        f=10000;
    }
    
    cout<<f;
    return 0;
}
