#include <stdio.h>
#include <math.h>
int main()
 {
 double BMInew=0,BMI=0,height=0,weight=0;
printf("Enter your weight (in KG): \n");
 scanf("%lf", &weight);

 printf("Now, enter your height(in Meters): \n");
 scanf("%lf", &height);
 
 printf("Processing...\n");
//BMI old
 BMI = weight/(height*height);
 printf("Your body mass index is: %.2lf\n", BMI);

double two = 2.5;
//BMI new
BMInew = 1.3*((weight)/pow(height,two)); //for pow() func you need to compile with -lm at the end so you connect the library math.h, for example ->   gcc zad1ab -o zad1ab -lm
printf("Your NEW body mass index is: %.2lf\n", BMInew);

    return 0;
 }