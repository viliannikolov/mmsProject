//HORIZONTAL CYLINDER LIQUID VOLUME
#include <stdio.h>
#include <math.h>
int main()
 {
double cylinderLength=0,liquidlevel = 0,radius = 0,pi=M_PI;

printf("\nEnter length of the horizontal cylinder (in meters): \n");
scanf("%lf", &cylinderLength);
printf("\nNow, enter the radius of one of cylinder's surfaces (in meters): \n");
scanf("%lf", &radius);
printf("\nAnd lastly enter the liquid level filled in the laying cylinder (in meters): \n");
scanf("%lf", &liquidlevel); //liquid filled 

//circle properties
double diameter = radius*2;
double h= diameter - liquidlevel; // h is the distance from top of the cylinder (or highest point of circle) // OR DIAMETER - LIQUID LEVEL

printf("\n TRIANGLE AREA = %lf \n", cylinderLength);
printf("\n Radius = %lf , and Diameter = %lf \n", radius, diameter);
printf("\n Liquid level = %lf \n", liquidlevel);


//areas
double triangleArea = (radius-h)*sqrt(2*radius*h-pow(h,2));
printf("\n TRIANGLE AREA = %lf \n", triangleArea);
double sectorArea = pow(radius,2)*acos((radius-h)/radius);
printf("\n SECTOR AREA = %lf \n", sectorArea);
double circleArea = pi*pow(radius,2);
printf("\n CIRCLE AREA = %lf \n", circleArea);
// 
double liquidArea = circleArea - sectorArea + triangleArea; 
printf("\n LIQUID AREA = %lf \n", liquidArea);

double liquidvolume = liquidArea * cylinderLength;

printf("\nAnd the volume of the liquid, filled in the horizontal cylinder is: %lf m^3 \n", liquidvolume);

    return 0;
 }