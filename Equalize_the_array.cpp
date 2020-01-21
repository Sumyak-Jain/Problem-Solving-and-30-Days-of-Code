#include<iostream>
using namespace std;
int main(){
    int a,max=0,m;//assuming max is to be zero i.e zero common elements
    cin>>a;//take input of number of numbers
    int arr[a];//declare array of size a
    for(int i=0; i<a;i++){
        cin>>arr[i];//store elements in an array
    }
    int count=0;
    for(int j=0; j<a;j++){
        m=0;
        for(int q=0;q<a;q++){
            if(arr[j]==arr[q])//checking wheather the element is common or not
                m++;//if yes increment
        }
         if(m>max)//common elements is greater then max
            max=m;
    }
    cout<<a-max;//printing total elements- max common elements because that would be equal to number of elements to be deleted to equalize the array
    return 0;
}
