//VERTICAL CYLINDER LIQUID VOLUME
#include <stdio.h>
#include <math.h>
int main()
 {
 double radius=0,liquidlevel=0,liquidvolume=0,pi=M_PI; //liquidlevel is the height of the liquid in meters 
printf("\nEnter radius of the vertical cylinder's surface (in meters): \n");
scanf("%lf", &radius);
printf("\nEnter the liquid level, filled in the cylinder (height in meters): \n");
scanf("%lf", &liquidlevel);

liquidvolume = pi*pow(radius,2)*liquidlevel;
printf("\n%.3lf m^3\n", liquidvolume);
    return 0;
 }