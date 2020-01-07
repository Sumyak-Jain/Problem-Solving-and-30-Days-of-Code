#include<iostream>
using namespace std;
int main()
{
    int arr[100], i,j,size,pos=0,neg=0,zero=0,p,n,z;
    cin>>size;
    for(i=0;i<size;i++)
    {
        cin>>j;
        arr[i]=j;

    }
    for(i=0;i<size;i++)
    {
        if(arr[i]>0)
        {
        pos++;}
        else if(arr[i]<0)
        {neg++;}
        else
        {zero++;}
    }

 float p1=(float)  pos++/(size);
 float p2= (float) neg++/(size);
float  p3=(float) zero++/(size);
    cout<<p1<<endl;
    cout<<p2<<endl;
    cout<<p3<<endl;
    return 0;
    
}
