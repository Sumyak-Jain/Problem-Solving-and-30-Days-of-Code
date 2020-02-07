#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int arr[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    for(int j=0;j<a;j++){
        for(int k=j+1;k<a;k++){
        if(arr[j]>arr[k]){
            swap(arr[j],arr[k]);
        }}
    }
    for(int i=0;i<a;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
