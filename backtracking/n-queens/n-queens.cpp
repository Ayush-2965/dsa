#include <iostream>
using namespace std;

const int N = 4;
int count=0;
int board[N][N];

bool isSafe(int row, int col)
{
    // no need for extra horizontal check as we are already placing queens row wise

    // horizontal
    // for (int i = 0; i < col; i++)
    // {
    //     if (board[row][i] == 1)
    //         return false;
    // }

    // vertical
    for (int i = 0; i < row; i++)
    {
        if (board[i][col] == 1) return false;
    }

    // upper right daigonol
    for (int i = row, j = col; i >= 0 && j < N; i--, j++)
    {
        if (board[i][j] == 1) return false;
    }

    // upper left daigonal
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
    {
        if (board[i][j] == 1) return false;
    }

    return true;
}

void printBoard()
{
    cout<<"Solution" <<count<<"\n";
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << (board[i][j] ? "Q " : ". ");
        }
        cout << "\n";
    }
    cout << "\n";
}

void nQueens(int row)
{
    if (row == N)
    {   
        count++;
        printBoard();
        exit(0); //for only 1 solution

        // return; //for all solution
    }

    for (int col = 0; col < N; col++) // column wise
    {

        if (isSafe(row, col))
        {
            board[row][col] = 1;
            nQueens(row + 1);
            board[row][col] = 0;
        }
    }
}

int main()
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            board[i][j] = 0;
        }
    }
    nQueens(0);

    return 0;
}