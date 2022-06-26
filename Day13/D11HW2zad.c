#include <stdio.h>
 #include <stdlib.h>
 #include <time.h>
int main()
 {
 
    int n,m;
    double array[n];
    printf("Enter size of array(n):\n");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        array[i]= (rand()%1.00) * 0.9+0.1; 
    }
    for (int i = 0; i < n; i++)
    {
        printf("%lf ", array[i]);
    }

    
    return 0;
 }