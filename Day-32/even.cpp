#include <iostream>

using namespace std;

int main() {
    int n;
    
    cout << "Enter a number: ";
    cin >> n;

    cout << "Using while loop:" << endl;
    int i = 1;
    while (i <= n) {
        if (i % 2 == 0) {
            cout << i << " ";
        }
        i++;
    }

    cout << "\nUsing do-while loop:" << endl;
    i = 1;
    do {
        if (i % 2 == 0) {
            cout << i << " ";
        }
        i++;
    } while (i <= n);

    return 0;
}
