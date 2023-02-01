#include <stdio.h>
 
int main()
{   
    int num, i, sum = 0, n;
    float avg;
     
    printf("Please enter term of n numbers :- ");
 
    scanf("%d", &n);
 
    i = 1;
 
    while(i <= n)
    {
        printf("Number %d = ", i);
        scanf("%d", &num);
        sum = sum + num;
        i++;
    }
 
    avg = (float)sum / n;
 
    printf("\nThe Sum of n Numbers     = %d", sum); 
    printf("\nThe Average of n Numbers = %.2f\n", avg);
}
