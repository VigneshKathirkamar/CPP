#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

// Array for board
char board [3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
// variable declaration
int choice=0;
int row=0, column=0;
char turn = 'X';
bool draw = false;

// Function to show current status of board
void display_board()
{
    cout<<"\t\t PLAYER-1 gets 'X' and PLAYER-2 gets 'O' \n\n";
    cout<<"\t\t     |       |       \n";
    cout<<"\t\t "<<board[0][0]<<"   |   "<<board[0][1]<<"   |   "<<board[0][2]<<"\n";
    cout<<"\t\t_____|_______|_______\n";
    cout<<"\t\t     |       |       \n";
    cout<<"\t\t "<<board[1][0]<<"   |   "<<board[1][1]<<"   |   "<<board[1][2]<<"\n";
    cout<<"\t\t_____|_______|_______\n";
    cout<<"\t\t     |       |       \n";
    cout<<"\t\t "<<board[2][0]<<"   |   "<<board[2][1]<<"   |   "<<board[2][2]<<"\n";
    cout<<"\t\t     |       |       \n\n";
}

// Function to get player input and update the board
void player_turn()
{
    if (turn=='X')
    {
        cout<<"\n\t\t Player-1 turn: ";
    }
    if (turn=='O')
    {
        cout<<"\n\t\t Player-2 turn: ";
    }

    // Taking input from user
    // updatting the board according to choice 

    cin >> choice;
    cout<<"\n\n";

    // switch case to get which row and column needs to be updated
    switch (choice)
    {
        case 1: row=0; column=0; break;
        case 2: row=0; column=1; break;
        case 3: row=0; column=2; break;
        case 4: row=1; column=0; break;
        case 5: row=1; column=1; break;
        case 6: row=1; column=2; break;
        case 7: row=2; column=0; break;
        case 8: row=2; column=1; break;
        case 9: row=2; column=2; break;
    default:
        cout<<"Invalid move"<<endl;
        break;
    }

    if (turn == 'X' && board[row][column]!='X' && board[row][column]!='O')
    {
        board[row][column] = 'X';
        turn = 'O';
    }
    else if (turn == 'O' && board[row][column]!='X' && board[row][column]!='O')
    {
        board[row][column] = 'O';
        turn = 'X';
    }
    else
    {
        cout<<"Board already occupied"<<endl;
        player_turn();
        // gameover();
    }
display_board();
}

// Function to get the game status

bool gameover()
{
    // checking row wise and column wise win condition
    for(int i=0;i<=2;i++)
    {
        if (board[i][0]==board[i][1] && board[i][0]==board[i][2] || board[0][i]==board[1][i] && board[0][i]==board[2][i])
        return false;
    }

    // checking for win in both diagonal
    if (board[0][0]==board[1][1] && board[0][0]==board[2][2] || board[2][0]==board[1][1] && board[2][0]==board[0][2])
    {
        return false;
    }

    // checking if the game is in continue mode or not
    for (int i=0;i<=2;i++)
    {
        for (int j=0;j<=2;j++)
        {
            if (board[i][j]!='X' && board[i][j]!='O')
            {   
                return true;
            }

        }
    }

    // checking if the game already draw
    draw = true;
    return false;
    
}

//Main method

int main()
{
    cout<<"\n\n\t\t\t Tick Tack Toe game for 2 players \t\t\t\n\n"<<endl;
    // cout<<"\t\t\t     for 2 players \t\t\t"<<endl;
    while (gameover())
    {
        display_board();
        player_turn();
        gameover();
    }

    if (turn=='X' and draw==false)
    {
        cout<<"\n\n\t\t *** Player-2 with 'O' has won ***"<<endl;
    }
    else if (turn=='O' and draw==false)
    {
        cout<<"\n\n\t\t *** Player-1 with 'X' has won ***"<<endl;
    }
    else if (draw==true)
    {
        cout<<"\t\t *** Draw game *** \n\n\n";
    }
}