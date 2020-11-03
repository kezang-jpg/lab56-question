#include <stdio.h>
 
int main()
{
  int m, n, c, d, matrix[10][10], transpose[10][10];
 
  printf("Enter the number of rows of a matrix:");
  scanf("%d",&m);
  printf("enter the number of column of a matrix:");
  scanf("%d",&n);
  printf("Enter the element \n");
  for (c = 0; c < m; c++)
    for (d = 0; d < n; d++)
      scanf("%d", &matrix[c][d]);
  for(int i=0;i<m;i++)
  {
    for(int j=0;j<n;j++)
    {
      printf("%d   ",matrix[i][j]);
      if(j == n -1)
      {
        printf("\n");
      }
    }
  }
 
  for (c = 0; c < m; c++)
    for (d = 0; d < n; d++)
      transpose[d][c] = matrix[c][d];
 
  printf("Transpose of the matrix:\n");
 
  for (c = 0; c < n; c++) {
    for (d = 0; d < m; d++)
      printf("%d\t", transpose[c][d]);
    printf("\n");
  }

  return 0;
}