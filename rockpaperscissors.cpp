#include <iostream>
#include <time.h>
#include <string>


int main()
{
    srand ( time(NULL) ); //initialize the random seed

    std::string PlayerChoice;

    // What are the choices the computer can choose, store this in a array(?) or store the choices individually.
    int ComputerChoices[3] = {1 , 2, 3};
    int RandomIndex = rand() % 3; // Generates a random number between 0 and 3

    std::string ComputersChoice;

    // Display what the choices are as numbers. 1. Rock 2. Paper 3. Scissors
    // Enter the users choice and store it 
    std::cout << "Please choose from the following options: 1. Rock, 2. Paper or 3. Scissors" << std::endl;
    std::cout << "Please enter your choice: ";
    std::cin >> PlayerChoice;
    std::endl (std::cout);  

    // Set the random 
    if(RandomIndex == 1)
    {
        ComputersChoice = "rock";
    } 
    else if(RandomIndex == 2) 
    {
        ComputersChoice = "paper";
    } 
    else 
    {
        ComputersChoice = "scissors";
    }

   for (int i=0; i < PlayerChoice.length(); i++)
   { 
        PlayerChoice[i] = tolower(PlayerChoice[i]);
   }

    while(PlayerChoice != "rock" && PlayerChoice != "paper" && PlayerChoice != "scissors")
    {
        std::cout << "Please enter a valid word: ";
        std::getline (std::cin, PlayerChoice); 
        
        for (int i=0; i < PlayerChoice.length(); i++)
        { 
            PlayerChoice[i] = tolower(PlayerChoice[i]);
        }
    }

    return 0;
}
