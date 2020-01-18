#include<iostream>
using namespace std;

int main() {
    int T;
    cin >> T;//take input of no. of test cases
    int x;
    int N, k, sum;
    for (int i = 0; i < T; i++) {
        sum = 0;
        cin >> N >> k;//take input of number of students and minimum no. of student should be absent
        for(int i = 0; i < N; i++) {
            cin >> x;
            if (x <= 0) {
                sum++;
            }
        }
        if (sum < k) {
            cout << "YES" << endl;//yes for class is canceled 
        } else {
            cout << "NO" << endl;//no for not the class is not canceled
        }
    }
    return 0;
}
