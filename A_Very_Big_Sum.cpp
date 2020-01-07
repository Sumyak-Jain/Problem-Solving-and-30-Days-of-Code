#include<iostream>
using  namespace std;
int main(){
   long int arr[100],size,i,j,sum=0;
    cin>>size;
    for(i=0;i<size;i++)
    {
        cin>>j;
        arr[i]=j;

    }

 for(i=0;i<size;i++)
    {
        sum=sum+arr[i];

    }
    cout<<sum;
    return 0;
}
