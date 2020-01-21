#include <cmath>
#include <cstdio>
#include <vector>//header files to include sort method
#include <iostream>
#include <algorithm>
using namespace std;


int main() {  
    int a,c;
    cin >> a;//take input of number of elements
    int arr[a];//declaring array of the size of number of elements
    for (int i = 0; i < a; i++) {
        cin >> arr[i];
    }

    sort(arr, arr+a); //sort the array in increasing order

    c = a;//storing the variable a i.e number of elements in c
    cout << c << endl;

    int short1 = arr[0];//arr[0] will have the sortest element
    for (int i = 1; i < a; i++) {
        if (arr[i] != short1) {//checking if that element of array is not equal to shortest
            short1 = arr[i];//store that array element in short1
            c = a - i;//remaining elements
            cout << c << endl;
        }
    }

    return 0;
}
