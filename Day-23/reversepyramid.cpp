#include<iostream>
using namespace std;

int main() {
    /*
*********
 *******
  *****
   ***
    *
    */
int n;
cout<<"Enter the value of n:";
cin>>n;
    for (int row = 1; row <= n; row++) {
        // Print leading spaces
        for (int space = 1; space < row; space++)
            cout << " ";

        // Print asterisks
        for (int asterisk = 1; asterisk <= 2 * (n - row) + 1; asterisk++)
            cout << "*";

        cout << endl;
    }
    return 0;
}