#include <bits/stdc++.h>

using namespace std;
int a=0,b=0;
void cal(int x,int y)
{
     if(x>y)
        a++;
    else if(x<y)
        b++;
}

int main() {
    int a0;
    int a1;
    int a2;
    cin >> a0 >> a1 >> a2;  
    int b0;
    int b1;
    int b2;
    cin >> b0 >> b1 >> b2;
   cal(a0,b0);
    cal(a1,b1);
    cal(a2,b2);
   
   cout<<a<<" "<<b;
    

    return 0;
}
