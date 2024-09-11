#include <iostream>

#include<string>
#include <cassert>

using namespace std;


const int ROW_COUNT = 3; 

char theGrid[ROW_COUNT][3] =
{
    {'a', 'b', 'c'}, //1st row
    {'d', 'e', 'f'},
    {'g', 'h', 'i'}
};

//char currentPlayer = 'X';

void printTheGrid()
{
    for (int currentRow = 0; currentRow < ROW_COUNT; currentRow++ ) //rows ("outer loop")
    {
        for (size_t currentColumn = 0; currentColumn < 3; ++currentColumn) //columns ("inner loop")
        {
         
            cout << theGrid[currentRow][currentColumn];
        }

        cout << "\n";
    }
}

void promptAndUpdateGrid(string playerID)
{
    cout << "Enter a position (in row, column order) at which to put your character: \n";
    //char selectedPosition; 

    //cin >> selectedPosition; //ex: 'a', 'd'

    int chosenRow, chosen_column;
    //getline()
    cin >> chosenRow >> chosen_column;

    assert(theGrid[chosenRow][chosen_column] != 'X');


    if (playerID == "P1")
    {
        theGrid[chosenRow][chosen_column] = 'X';
    }

    else
    {
        theGrid[chosenRow][chosen_column] = 'O';
    }
}



bool checkIfHorizontalWin()
{
    //bool gameWonHorizontally = false; 

    for (int currentRow = 0; currentRow < 3; ++currentRow)
    {
        if (theGrid[currentRow][0] == theGrid[currentRow][1]
            && 
            theGrid[currentRow][1] == theGrid[currentRow][2])
        {
            return true;
        }
    }

    return false; 

    

    //gameWonHorizontally = !gameWonHorizontally;
    //toggle    
    //Karnaugh maps (don't care) 
    // 
    //for (int currentColumn = 0; currentColumn < 3; ++currentColumn)
    //{
    //    if (theGrid[0][currentColumn] == currentPlayer)
    //    {
    //        gameWonHorizontally = true; 
    //    }
    //    

    //}
}

bool checkIfGameWon()
{
    return checkIfHorizontalWin();

    //add checks for vertical win 
    //check for a win on the "main" diagonal (i == j) and the secondary diagonal 

}

int main()
{
    bool gameIsWon = false; 

    //subject this program to "unit tests"
    while (!gameIsWon)
    {
        printTheGrid(); 

        string player1 = "P1";
        string player2 = "P2";

        promptAndUpdateGrid(player1);
        
        gameIsWon = checkIfGameWon();
        
        if (gameIsWon)
        {
            cout << "player 1 won\n";
        }
        //DRY -> don't repeat yourself 

        //cout << "\033[31m"; //makes the text RED
        printTheGrid(); 

        promptAndUpdateGrid(player2);
        gameIsWon = checkIfGameWon();
        if (gameIsWon)
        {
            "player TWO won\n";
        }

    }

    return 0;
}