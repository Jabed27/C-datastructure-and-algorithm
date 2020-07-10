#include<bits/stdc++.h>
using namespace std;
#define n 4
int board[n][n];
int row ,col;
void printingsolution(int board[n][n])
{
    cout<<"Printing in a matrix"<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++){
            cout << board[i][j] << " ";
        }

        cout << endl;
    }
}
bool check(int board[n][n], int row, int col)
{
    for (int i = 0; i < col; i++)
    {
        if (board[row][i])
            return false;
    }
    for (int i=row, j=col; i>=0 && j>=0; i--, j--)
    {
        if (board[i][j])
            return false;
    }
    for (int i=row, j=col; j>=0 && i<n; i++, j--)
    {
        if (board[i][j])
        {
            return false;
        }
    }

    return true;
}
bool possitioningqueen(int board[n][n], int col)
{
    if (col >= n)
    {
        return true;
    }
    for (int i = 0; i < n; i++)
    {
        if (check(board, i, col) )
        {
            board[i][col] = 1;
            if ( possitioningqueen(board, col + 1))
                return true;

            board[i][col] = 0;
        }
    }
    return false;

}
int main()
{


    for(int i =0; i<n; i++)
    {
        for(int j =0; j<n; j++)
        {
            board[i][j] = 0;
        }
    }
    if ( possitioningqueen(board, 0) == false )
    {
        cout << "Solution does not exist";
        return false;
    }
    printingsolution(board);
    return true;
}
