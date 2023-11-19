#include <iostream>
 
using namespace std;
 
// N is the size of the 2D matrix N*N
#define N 9
 
/* A utility function to print grid */
void print(int arr[N][N])
{
for (int i = 0; i < N; i++)
{
for (int j = 0; j < N; j++)
cout << arr[i][j] << " ";
cout << endl;
}
}
 
// Checks whether it will be
// legal to assign num to the
// given row, col
bool isSafe(int grid[N][N], int row,
int col, int num)
{

// Check if we find the same num
// in the similar row , we
// return false
for (int x = 0; x <= 8; x++)
if (grid[row][x] == num)
return false;
 
// Check if we find the same num in
// the similar column , we
// return false
for (int x = 0; x <= 8; x++)
if (grid[x][col] == num)
return false;
 
// Check if we find the same num in
// the particular 3*3 matrix,
// we return false
int startRow = row - row % 3,
startCol = col - col % 3;
 
for (int i = 0; i < 3; i++)
for (int j = 0; j < 3; j++)
if (grid[i + startRow][j +
startCol] == num)
return false;
 
return true;
}