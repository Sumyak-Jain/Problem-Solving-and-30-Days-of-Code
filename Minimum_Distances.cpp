#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int arr[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    int min=1000;
    for(int k=0;k<a;k++){
        for(int j=k+1;j<a;j++){
            if(arr[k]==arr[j]){
                if(min>(j-k)){
                    min=(j-k);
                }
                
            }
            
        }
    }
    if(min==1000){
        cout<<"-1";
    }
    else{
        cout<<min;
    }
    return 0;

}
