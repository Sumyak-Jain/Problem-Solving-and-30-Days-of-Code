#include<iostream>
using namespace std;
int main(){
    int a,b,count=0;
    cin>>a>>b;
    int arr[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    for (int i=0;i<a;i++)
{
    for (int j=i+1;j<a;j++)
    {
        if ((arr[j] - arr[i])==b)
        {
            for (int k=j+1;k<a;k++)
                if ((arr[k]-arr[j]) ==b) count ++;
        }
    }

}
    cout<<count;
    return 0;
}
