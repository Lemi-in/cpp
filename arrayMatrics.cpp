#include <iostream>
using namespace std;
#define MAX_ROWS 10
#define MAX_COLS 10
int main()
{
    int mat1[MAX_ROWS][MAX_COLS];
    int mat2[MAX_ROWS][MAX_COLS];
    int res_mat[MAX_ROWS][MAX_COLS];
    int i, j, rows, cols;
    cout << "Enter 1st Matrix: \n " "Enter no.of rows : ";
         cin >>rows;
    cout << "Enter no. of cols: ";
    cin >> cols;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            // user input element of row x col
            cout << "Enter value for ROW " << i << " , "
                 << "COL " << j << " : ";
            cin >> mat1[i][j];
        }
    }
    cout << "\nEnter 2nd Matrix: \n Enter no.of rows: ";
    cin >> rows;
    cout << "Enter no. of cols: ";
    cin >> cols;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            // user input element of row x col
            cout << "\nEnter value for ROW" << i << ","
                 << "COL" << j << ":";
            cin >> mat2[i][j];
        }
    }
    // Display the two matrices
    cout << "Generated table......\n/***** Matrix One *****/\n";
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            cout << mat1[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "/***** Matrix Two *****/\n";
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            cout << mat2[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\nThe Result Matrix is: \n";
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            res_mat[i][j] = mat1[i][j] + mat2[i][j];
            cout << res_mat[i][j];
        }
        cout << "\n";
    }
    return 0;
}
