#include <iostream>

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
    const int CodeA = 4;
    const int CodeB = 3;
    const int CodeC = 2;

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
        std::cout << "\nYour journey ends here";
        return false;
    }

}

int main() 
{
    int LevelDifficulty = 1;
    while(true)
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

    return 0;
}