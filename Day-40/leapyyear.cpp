// #include<iostream>
// using namespace std;
// int main()
// {
//     int input_number,n;
//     input_number=n;
//     cout<<"Enter a Year for check it out a Leap year or not!"<<endl;
//     cin>>n;
//     if (n%400==0)
//     {
//     cout<<n<<" is a Leap year!";
//     }
//     else if (n%100==0)
//     {
//     cout<<n<<" is not a Leap year:(";
//     }
//     else if(n%4==0)
//     {
//     cout<<n<<" is a Leap year!";
//     }
//     else
//     cout<<" Invalid Input!!!Give a Year in int Number...Zzz";
//     return 0;
// }
#include <iostream>
using namespace std;

int main() {
    int year;
    cout << "Enter a Year to check if it is a Leap Year or not: " << endl;
    cin >> year;

    if (year <= 0) {
        cout << "Invalid Input! Please enter a positive integer representing a year." << endl;
    } else {
        if (year % 400 == 0) {
            cout << year << " is a Leap Year!" << endl;
        } else if (year % 100 == 0) {
            cout << year << " is not a Leap Year." << endl;
        } else if (year % 4 == 0) {
            cout << year << " is a Leap Year!" << endl;
        } else {
            cout << year << " is not a Leap Year." << endl;
        }
    }
    
    return 0;
}
