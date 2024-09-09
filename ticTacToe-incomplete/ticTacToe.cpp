#include <iostream>

#include<string>

using namespace std;


const int ROW_COUNT = 3; 

char theGrid[ROW_COUNT][3] =
{
    {'a', 'b', 'c' }, //1st row
    {'d', 'e', 'f'},
    {'g', 'h', 'i'}
};

char currentPlayer = 'X';

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
    bool gameWonHorizontally = false; 



    for (int currentColumn = 0; currentColumn < 3; ++currentColumn)
    {
        if (theGrid[0][currentColumn] == currentPlayer)
        {
            gameWonHorizontally = true; 
        }
        

    }
}

bool checkIfGameWon()
{
    checkIfHorizontalWin(); 
}

int main()
{
    bool gameIsWon = false; 

    while (!gameIsWon)
    {
        printTheGrid();

        string player1 = "P1";
        string player2 = "P2";
        promptAndUpdateGrid(player1);

        cout << "\033[31m"; //makes the text RED
        printTheGrid(); 

        promptAndUpdateGrid(player2);

        gameIsWon = checkIfGameWon();

    }

    
    //minimalist space approach (can be "unsafe") 

    //vector<vector<char>> dynamicTicTacToeGrid


    return 0;
}