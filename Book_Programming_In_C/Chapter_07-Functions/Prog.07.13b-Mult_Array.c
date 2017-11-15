//
// Prog 7.12 Sort An Array
// Modified to use variable sized rows
#include <stdio.h>



int main (void) {

  void displayMatrix (int matrix[][5], int nCol);
  void scalarMultiply (int matrix[][5], int nCol, int scalar);

  int nCol = 5;

  int matrix[3][5] = {
    { 7,16,55,13,12}, 
    {12,10,52, 0, 7}, 
    {-2, 1, 2, 4, 9}
  };



  printf ("Orginal Matrix:\n");
  displayMatrix(matrix, nCol);
  printf("\n");

  scalarMultiply(matrix, nCol, 2);

  printf ("Matrix multuplied by 2:\n");
  displayMatrix(matrix, nCol);
  printf("\n");

}

//
// Function to display a Matrix
//
void displayMatrix (int matrix[][5], int nCol){
  
  int row, column;

  for(row=0; row<3; ++row){
    for ( column = 0; column < nCol; ++column )
      printf ("%5i", matrix[row][column]);
    printf("\n");
    }
}


//
// Function to multiply a 3 x 5 array by a scalar
//
void scalarMultiply (int matrix[][5], int nCol, int scalar) {
  int row, column;
  for(row=0; row<3; ++row)
    for ( column = 0; column < nCol; ++column )
      matrix[row][column] *= scalar;
}











