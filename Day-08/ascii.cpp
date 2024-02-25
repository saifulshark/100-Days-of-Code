#include <iostream>

int main() {
    int integer;

    // Prompt user to enter a character
    std::cout << "Enter a integer: ";
    std::cin >> integer;

    // Display the ASCII value of the character
    std::cout << "Character value of '" << integer << "' is: " << static_cast<char>(integer) << std::endl;

    return 0;
}
