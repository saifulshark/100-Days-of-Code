#include <stdio.h>

int isPrime(int number) {
    if (number <= 1) {
        return 0;  // 0 and 1 are not prime numbers
    }

    for (int i = 2; i * i <= number; ++i) {
        if (number % i == 0) {
            return 0;  // If it has a divisor other than 1 and itself, it's not prime
        }
    }

    return 1;  // If no divisors other than 1 and itself, it's a prime number
}

int main() {
    int num;

    // Input from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the entered number is prime
    if (isPrime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
