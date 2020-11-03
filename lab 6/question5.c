#include <stdlib.h> 
#include<stdio.h> 
int main() 
{ 
  
    // This pointer will hold the base address of the block created 
    int* ptr; 
    int n, i; 
  
    // Get the number of elements for the array  
    printf("Enter number of elements: ");
    scanf("%d", &n); 
  
    // Dynamically allocate memory using malloc() 
    ptr = (int*)malloc(n * sizeof(int)); 
  
    // Check if the memory has been successfully 
    // allocated by malloc or not 
    if (ptr == NULL) { 
        printf("Memory not allocated.\n"); 
        exit(0); 
    } 
    else { 
  
        // Memory has been successfully allocated 
        printf("Memory successfully allocated\n"); 
  
        // Get the elements of the array 
        printf("Enter the elements: \n");
        int a;
        for (i = 0; i < n; ++i) { 
            scanf("%d", &a);
            ptr[i] = a; 
        } 
  
        // Print the elements of the array 
        printf("The elements of the array are: "); 
        for (i = 0; i < n; ++i) { 
            printf("%d, ", ptr[i]); 
        } 
        printf("\n");
    } 
  
    return 0; 
} 