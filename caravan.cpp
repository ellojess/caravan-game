#include <iostream>
#include <ctime>

void PrintIntroduction(int Difficulty)
{
    // print welcome message to terminal 
    std::cout << "\n\nHello there traveler... \n";
    std::cout << "You need to answer correctly to continue on your journey or risk staying here at level " << Difficulty;
    std::cout << " forever... \n\n";
}

bool PlayGame(int Difficulty)
{   
    PrintIntroduction(Difficulty);

    // declare 3 number code 
    const int CodeA = rand() % Difficulty + Difficulty;
    const int CodeB = rand() % Difficulty + Difficulty;
    const int CodeC = rand() % Difficulty + Difficulty;

    int CodeSum = CodeA + CodeB + CodeC;
    int CodeProduct = CodeA * CodeB * CodeC;

    // print sum and product to terminal 
    std::cout << "+ There are 3 numbers in the problem";
    std::cout << "\n+ The numbers add up to " << CodeSum;
    std::cout << "\n+ The product comes out to " << CodeProduct << std::endl;

    // Store user guesses -- users can answer with guesses on the same line w/ spaces or different lines 
    int GuessA, GuessB, GuessC;
    std::cin >> GuessA >> GuessB >> GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    // Check if player guesses are correct
    if (GuessSum == CodeSum && GuessProduct == CodeProduct) 
    {
        std::cout << "\nYou got it, you may continue on your journey";
        return true;
    } 
    else 
    {
        std::cout << "\nYour may not continue on your journey. Try again if you wish to continue...";
        return false;
    }

}

int main() 
{
    srand(time(NULL)); // create new random sequence based on time of day
    int LevelDifficulty = 1;
    int MaxDifficulty = 7; 

    while (LevelDifficulty <= MaxDifficulty) // loop until all levels are completed
    {
        bool LevelComplete = PlayGame(LevelDifficulty);
        std::cin.clear(); // clears any errors
        std::cin.ignore(); // discards the buffer

    if (LevelComplete)
    {
        //increase level difficulty 
        ++LevelDifficulty;
    }

    }
    std::cout << "\nCongratulations! You made it to your destination\n";
    return 0;
}