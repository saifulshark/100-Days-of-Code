#include <iostream>

using namespace std;

int main() {
    char ch = 'A';

    cout << "Capital and small letters:" << endl;
    
    while (ch <= 'Z') {
        cout << ch << " ";
        ch++;
    }

    ch = 'a';
cout << "\n";
    while (ch <= 'z') {
        cout<<ch << " ";
        ch++;
    }

    return 0;
}
