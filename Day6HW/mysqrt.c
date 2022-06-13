#include <stdio.h>
 double root(double n)
 {
    float temp, sqrt; 
         sqrt = n/2;
         temp = 0;
         while(sqrt != temp)
            {
               temp = sqrt;
               sqrt = (n/temp + temp) / 2;
            }
         return sqrt;    
 }


int main()
 {
  int number = 0;
     printf("Enter number: \n");
     scanf("%d",&number);
     if(number < 0)
         {printf("THE SQRT OF (%d) IS = %fi\n", number, root(number));}
     else if(number > 0)
         {printf("THE SQRT OF (%d) IS = %f \n", number, root(number));}

    return 0;
 }