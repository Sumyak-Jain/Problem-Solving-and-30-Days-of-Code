#include <iostream>
using namespace std;
int main() {
    int T, N, i;
    cin >> T;// enter the test cases
    while(T--) {
        cin >> N;//taking number of days
        long long int s = 1;
        for (i = 1; i <= N; i++) {
            if(i % 2 == 0)//for even days i.e summer increasing height by one
                s++;
            else
                s = 2*s;//for odd days i.e spring double the height 
        }
        cout << s << endl;
    }
    return 0;
}
