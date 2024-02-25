#include <iostream>

bool isPrime(int number) {
    if (number <= 1) {
        return false;
    }

    for (int i = 2; i * i <= number; ++i) {
        if (number % i == 0) {
            return false; // It's divisible by a number other than 1 and itself
        }
    }

    return true;
}

int main() {
    int num;

    // Input from the user
    std::cout << "Enter a number: ";
    std::cin >> num;

    // Check if the entered number is prime
    if (isPrime(num)) {
        std::cout << num << " is a prime number." << std::endl;
    } else {
        std::cout << num << " is not a prime number." << std::endl;
    }

    return 0;
}