#include<iostream>
using namespace std;
int main(){
    int d1,m1,y1;
    cin>>d1>>m1>>y1;
    int d2,m2,y2;
    cin>>d2>>m2>>y2;
    int fine;
   if(y2==y1){
        if(m2==m1){
            if(d1<d2)
            cout<<0;
            else
            cout<<(15*(d1-d2));
        }
        else{
             if(m1<m2)
            cout<<0;
            else
            cout<<(500*(m1-m2));
        }
    }
    else{
         if(y1<y2)
            cout<<0;
        else
        cout<<(10000*(y1-y2));
    }
    return 0;
}
