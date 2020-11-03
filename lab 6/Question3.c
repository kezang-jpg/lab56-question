#include <math.h>
#include <stdio.h>
float sum = 0.0, mean, SD = 0.0;
int i,n;
float data[10];
//to calculate Standard deviation
float StandardDeviation(float data[]) {
    
    for (i = 0; i < n; ++i) {
        sum += data[i];
    }
    mean = sum / n;
    for (i = 0; i < n; ++i)
        SD += pow(data[i] - mean, 2);
    return sqrt(SD / n);
}
//print mean
int Mean(){
    printf("Mean = %.2f\n", mean);

}
//to calculate product
int product(){
    int result = 1; 
    for (int i = 0; i < n; i++) 
        result = result * data[i]; 
    printf("Product = %d \n",result );
}

//main function to call all the function
int main() {
    int i;
    printf("Enter the number of element to enter:");
    scanf("%d",&n);
    printf("Enter %d elements: \n",n);
    for (i = 0; i < n; ++i)
        scanf("%f", &data[i]);
  
    printf("Standard Deviation = %.6f \n", StandardDeviation(data));
    Mean();
    product();
    return 0;
}