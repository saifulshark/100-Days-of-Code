/*
press 1=0
press 2=1
press 3=1
press 4=2
press 5=3
press 6=5
press 7=8
press 8=13
*/
#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter a number to see its fibonacci output:" << endl;
    cin >> n;

    int fibo[n+1];  // Declare an array to store Fibonacci sequence

    fibo[1] = 0;
    fibo[2] = 1;

    for (int i = 3; i <= n; i++) {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }

    // Output the Fibonacci sequence
    for (int i = 1; i <= n; i++) {
        cout << "press " << i << "=" << fibo[i] << endl;
    }

    return 0;
}
