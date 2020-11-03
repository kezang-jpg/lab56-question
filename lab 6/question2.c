#include<stdio.h>
#include<stdlib.h>

int main(int argc, char* argv[])
{
  int rows = 0;
  int cols = 0;
  int height = 0;
  int ***array;
  int r, c, h;


  printf ("Enter 3D Array rows : ");
  scanf ("%d", &rows);

  printf ("Enter 3D Array columns : ");
  scanf ("%d", &cols);

  printf ("Enter 3D Array Layer : ");
  scanf ("%d", &height);

  array = (int ***) calloc (height,sizeof(int ***));
  for (h = 0; h < height; h++){
    array[h] = (int **) calloc(rows,sizeof(int*));
    for (r = 0; r < rows; r++){
      array[h][r] = (int *) calloc(cols,sizeof(int));
    }
  }

  for (h = 0; h < height; h++) {
    for (r = 0; r < rows; r++) {
      for (c = 0; c < cols; c++) {
        printf ("Enter Array Element of [%d][%d][%d] : ", h, r, c);
        scanf ("%d", &array[h][r][c]);
      }
    }
  }

  printf("Displaying 3D Array:\n");

  for (h = 0; h < height; h++) {
    printf("Layer %d\n", h);
    for (r = 0; r < rows; r++) {
      for (c = 0; c < cols; c++) {
        printf("%.2d ", array[h][r][c]);
      }
      printf("\n");
    }
    printf("\n");
  }
  
  return 0;
}