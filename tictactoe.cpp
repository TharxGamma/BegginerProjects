#include <iostream>
#include <string>

char Player = 'X';
int AllPossibleMoves = 0;

char Board[3][3] = {
    {'1', '2', '3'},
    {'4', '5', '6'},
    {'7', '8', '9'}
};

void PrintBoard()
{
    std::cout << "Hello and welcome to my game of Tic Tac Toe!" << std::endl;
    std::cout << Player << "'s time to play" << std::endl;
    for(int i = 0; i < 3; i++)
    {
        std::cout << std::endl;

        for(int j = 0; j < 3; j++)
        {
            std::cout << Board[i][j];
            std::cout << " ";
        }
    }

    std::cout << std::endl;

} 

void Input()
{

    int PlayersChoice = 0;
    std::cout << "Please enter where you would like to play: ";
    std::cin >> PlayersChoice;

    if(PlayersChoice == 1)
    {
        if(Board[0][0] == '1')
        {
            Board[0][0] = Player;
        }
        else
        {
            std::cout << "Position is already in use try again!" << std::endl;
            Input();
        }
    } 
    else if (PlayersChoice == 2)
    {
        if(Board[0][1] == '2')
        {
            Board[0][1] = Player;
        }
        else
        {
            std::cout << "Position is already in use try again!" << std::endl;
            Input();
        }
        
    }
    else if (PlayersChoice == 3)
    {
        if(Board[0][2] == '3')
        {
            Board[0][2] = Player;
        }
        else
        {
            std::cout << "Position is already in use try again!" << std::endl;
            Input();
        }
    }
    else if (PlayersChoice == 4)
    {
        if(Board[1][0] == '4')
        {
            Board[1][0] = Player;
        }
        else
        {
            std::cout << "Position is already in use try again!" << std::endl;
            Input();
        }
    }
    else if (PlayersChoice == 5)
    {
        if(Board[1][1] == '5')
        {
            Board[1][1] = Player;
        }
        else
        {
            std::cout << "Position is already in use try again!" << std::endl;
            Input();
        }
    }
    else if (PlayersChoice == 6)
    {
        if(Board[1][2] == '6')
        {
            Board[1][2] = Player;
        }
        else
        {
            std::cout << "Position is already in use try again!" << std::endl;
            Input();
        }
    }
    else if (PlayersChoice == 7)
    {
        if(Board[2][0] == '7')
        {
            Board[2][0] = Player;
        }
        else
        {
            std::cout << "Position is already in use try again!" << std::endl;
            Input();
        }
    }
    else if (PlayersChoice == 8)
    {
        if(Board[2][1] == '8')
        {
            Board[2][1] = Player;
        }
        else
        {
            std::cout << "Position is already in use try again!" << std::endl;
            Input();
        }
    }
    else if (PlayersChoice == 9)
    {
        if(Board[2][2] == '9')
        {
            Board[2][2] = Player;
        }
        else
        {
            std::cout << "Position is already in use try again!" << std::endl;
            Input();
        }
    }  
   
}

void TogglePlayer()
{

    if(Player == 'X')
    {
        Player = 'O';
    } 
    else
    {
        Player = 'X';
    }
    
}

char WinCondition()
{
    //first player
    if (Board[0][0] == 'X' && Board[0][1] == 'X' && Board[0][2] == 'X')
        return 'X';
    if (Board[1][0] == 'X' && Board[1][1] == 'X' && Board[1][2] == 'X')
        return 'X';
    if (Board[2][0] == 'X' && Board[2][1] == 'X' && Board[2][2] == 'X')
        return 'X';
 
    if (Board[0][0] == 'X' && Board[1][0] == 'X' && Board[2][0] == 'X')
        return 'X';
    if (Board[0][1] == 'X' && Board[1][1] == 'X' && Board[2][1] == 'X')
        return 'X';
    if (Board[0][2] == 'X' && Board[1][2] == 'X' && Board[2][2] == 'X')
        return 'X';
 
    if (Board[0][0] == 'X' && Board[1][1] == 'X' && Board[2][2] == 'X')
        return 'X';
    if (Board[2][0] == 'X' && Board[1][1] == 'X' && Board[0][2] == 'X')
        return 'X';
 
    //second player
    if (Board[0][0] == 'O' && Board[0][1] == 'O' && Board[0][2] == 'O')
        return 'O';
    if (Board[1][0] == 'O' && Board[1][1] == 'O' && Board[1][2] == 'O')
        return 'O';
    if (Board[2][0] == 'O' && Board[2][1] == 'O' && Board[2][2] == 'O')
        return 'O';
 
    if (Board[0][0] == 'O' && Board[1][0] == 'O' && Board[2][0] == 'O')
        return 'O';
    if (Board[0][1] == 'O' && Board[1][1] == 'O' && Board[2][1] == 'O')
        return 'O';
    if (Board[0][2] == 'O' && Board[1][2] == 'O' && Board[2][2] == 'O')
        return 'O';
 
    if (Board[0][0] == 'O' && Board[1][1] == 'O' && Board[2][2] == 'O')
        return 'O';
    if (Board[2][0] == 'O' && Board[1][1] == 'O' && Board[0][2] == 'O')
        return 'O';
 
    return '/';
}

void main()
{
    while(true)
    {
        PrintBoard();
        Input();
        if(WinCondition() == 'X')
        {
            std::cout << "X has won the game!";
            break;
        } 
        else if(WinCondition() == 'O')
        {
            std::cout << "O has won the game";
            break;
        }
        else if (WinCondition() == '/' && AllPossibleMoves == 9)
        {
            std::cout << "It's a draw!";
            break;
        }

        TogglePlayer();
        
    }
}   

