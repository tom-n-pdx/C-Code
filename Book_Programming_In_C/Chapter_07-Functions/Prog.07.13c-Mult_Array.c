//
// Prog 7.12 Sort An Array
// Modified to use variable sized rows
#include <stdio.h>

int main (void) {

  void displayMatrix (int nCol, int nRow, int matrix[nRow][nCol]);
  void scalarMultiply (int nCol, int nRow, int matrix[nRow][nCol], int scalar);

  int nCol   = 5;
  int nRow  = 3;

//  int matrix[nRow][nCol] = {
//    { 7,16,55,13,12}, 
//    {12,10,52, 0, 7}, 
//    {-2, 1, 2, 4, 9}
//  };

  int matrix[nRow][nCol];

  int temp = 1;
  for (int i = 0; i < nCol; i++)
    for (int j  = 0; j < nRow; j++)
    matrix[j][i] = temp++;

  printf ("Orginal Matrix:\n");
  displayMatrix(nCol, nRow, matrix);
  printf("\n");

  scalarMultiply(nCol, nRow, matrix, 2);

  printf ("Matrix multuplied by 2:\n");
  displayMatrix(nCol, nRow, matrix);
  printf("\n");

}

//
// Function to display a Matrix
//
void displayMatrix (int nCol, int nRow, int matrix[nRow][nCol]){
  
  int row, column;

  for(row=0; row< nRow; ++row){
    for ( column = 0; column < nCol; ++column )
      printf ("%5i", matrix[row][column]);
    printf("\n");
    }
}


//
// Function to multiply a 3 x 5 array by a scalar
//
void scalarMultiply (int nCol, int nRow, int matrix[nRow][nCol], int scalar) {
  int row, column;

  for(row=0; row<3; ++row)
    for ( column = 0; column < nCol; ++column )
      matrix[row][column] *= scalar;
}











