#include <iostream>

int main() {
    // print welcome message to terminal 
    std::cout << "Hello there traveler...";
    std::cout << std::endl;
    std::cout << "You need to answer correctly to continue on your journey...";
    
    // declare 3 number code 
    int a = 4;
    int b = 3;
    int c = 2;

    int sum = a + b + c;
    int product = a * b * c;

    // print sum and product to terminal 
    std::cout << std::endl;
    std::cout << "+ There are 3 numbers in the problem" << std::endl;
    std::cout << "+ The numbers add up to " << sum << std::endl;
    std::cout << product << std::endl;

    return 0;
}