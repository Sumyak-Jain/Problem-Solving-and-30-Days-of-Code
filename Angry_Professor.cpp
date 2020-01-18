#include<iostream>
using namespace std;

int main() {
    int a;
    cin >> a;//take input of no. of test cases
    int x;
    int m, k, count;
    for (int i = 0; i < T; i++) {
        count = 0;
        cin >> m >> k;//take input of number of students and minimum no. of student should be absent
        for(int i = 0; i < m; i++) {
            cin >> x;
            if (x <= 0) {
                count++;
            }
        }
        if (count < k) {
            cout << "YES" << endl;//yes for class is canceled 
        } else {
            cout << "NO" << endl;//no for not the class is not canceled
        }
    }
    return 0;
}
