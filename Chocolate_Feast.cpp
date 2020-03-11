/**n=total Rs.
  m=cost of one choclate
  p=no.s of wrraper required to get one more choclate**/
#include <iostream>
using namespace std;
void choc(int n,int m,int p)
{
    int total_choc=n/m;
    int output=total_choc;
    while(total_choc>=p){
        output++;
        total_choc=total_choc-p;
        total_choc++;
      
    }
    cout<<output<<endl;
}
int main(){
    int a;
    cin>>a;
    for(int i=0;i<a;i++){
        int n,m,p;
        cin>>n>>m>>p;
        choc(n,m,p);
    }
    return 0;
    
    }
