#include <iostream>

int main() {
    // print welcome message to terminal 
    std::cout << "Hello there traveler...";
    std::cout << std::endl;
    std::cout << "You need to answer correctly to continue on your journey...";
    
    // declare 3 number code 
    const int CodeA = 4;
    const int CodeB = 3;
    const int CodeC = 2;

    int sum = CodeA + CodeB + CodeC;
    int product = CodeA * CodeB * CodeC;

    // print sum and product to terminal 
    std::cout << std::endl;
    std::cout << "+ There are 3 numbers in the problem" << std::endl;
    std::cout << "+ The numbers add up to " << sum << std::endl;
    std::cout << "+ The product comes out to " << product << std::endl;

    // users can answer with guesses on the same line w/ spaces or different lines 
    int GuessA, GuessB, GuessC;
    std::cin >> GuessA;
    std::cin >> GuessB;
    std::cin >> GuessC;
    std::cout << "You entered: " << GuessA << GuessB << GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    return 0;
}