#include <iostream>
using namespace std;

const int N = 4;
int count = 0;
int board[N][N];

int rowup;
int colleft;
int colright;

bool isSafe(int row, int col)
{
    rowup = row - 2;
    colleft = col - 2;
    colright = col + 2;

    if (rowup >= 0)
    {
        if (board[rowup][col + 1] == 1 || board[rowup][col - 1] == 1)
            return false;
    }
    if (colleft >= 0)
    {
        if (board[row - 1][colleft] == 1)
            return false;
    }

    if (colright <= N)
    {
        if (board[row - 1][colright] == 1)
            return false;
    }

    return true;
}

void printBoard()
{
    cout << "Solution" << count << "\n";
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << (board[i][j] ? "K " : ". ");
        }
        cout << "\n";
    }
    cout << "\n";
}

void nKnights(int row)
{
    if (row == N)
    {
        count++;
        printBoard();
        // exit(0); //for only 1 solution

        return; // for all solution
    }

    for (int col = 0; col < N; col++) // column wise
    {

        if (isSafe(row, col))
        {
            board[row][col] = 1;
            nKnights(row + 1);
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
    nKnights(0);

    return 0;
}