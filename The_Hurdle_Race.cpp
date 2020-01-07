#include<iostream>
using namespace std;
int main()
{int i,j;
    cin>>i>>j;
     int k,a,arr[i];
for(k=0;k<i;k++)
{
    cin>>a;
    arr[k]=a;
}
int max=arr[0];
for(k=0;k<i;k++)
{
    if(arr[k]>max)
    {
     max=arr[k] ;
    }
}
if(j<max){
cout<<abs(max-j);}
else{
cout<<"0";
}
return 0;

}
