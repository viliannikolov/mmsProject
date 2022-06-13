#include <stdio.h>
#include <math.h>

// build-in compare operator                                        //bad way of comparing real numbers
int doubleCompare1(double a, double b){
    return a == b;
}

// fixed epsilon
int doubleCompare2(double a, double b){                            //another way to compare double type, but still not very accurate for float type  (not accurate comparison for float type numbers !)
    return fabs(a - b) < 1.0e-5;
}

// adaptive epsilon                                                 // best way to compare real numbers (most accurate way to compare both(float and double types))
int doubleCompare3(double a, double b){
    return fabs(a - b) < 1.0e-5 * fmax(fabs(a), fabs(b));      
}

int main(void){
    double a = 1000.0 * 0.1;
    double b = 0.0;
    double epsilon = 1.0e-5;
    printf("\nEPSILON IS: %lf \n\n", epsilon);
    for (int i = 0; i < 1000; i++, b += 0.1);
    printf("%lf == %lf\n", a,b);                                              //
    if (doubleCompare1(a, b)){
        printf("(a == b) Equals\n\n");
    } else {
        printf("(a == b) Not equals\n\n");
    }
     printf("(%lf - %lf) < %lf\n", a,b,epsilon);                                   //
    if (doubleCompare2(a, b)){
        printf("fixed E: Equals\n\n");
    } else {
        printf("fixed E: Not equals\n\n");
    }
     printf("(%lf - %lf) < %lf * %lf \n", a,b,epsilon,fmax(fabs(a),fabs(b)));       //
    if (doubleCompare3(a, b)){
        printf("Adaptive E: Equals\n\n");
    } else {
        printf("Adaptive E: Not equals\n\n");
    }
    return 0;
}