#include <stdio.h>
#include <math.h>

// build-in compare operator                                    //bad way of comparing real numbers
int floatCompare1(float a, float b){
    return a == b;
}

// fixed epsilon
int floatCompare2(float a, float b){                             //another way to compare double type, but still not very accurate for float type  (not accurate comparison for float type numbers !)
    return fabs(a - b) < 1.0e-5f;
}

// adaptive epsilon                                             // best way to compare real numbers (most accurate way to compare both(float and double types))
int floatCompare3(float a, float b){
    return fabs(a - b) < 1.0e-5f * fmax(fabs(a), fabs(b));      
}

int main(void){
    float a = 1000.0f * 0.1f;
    float b = 0.0f;
    float epsilon = 1.0e-5f;
    printf("\nEPSILON IS: %f \n\n", epsilon); //print epsilon
    for (int i = 0; i < 1000; i++, b += 0.1f);
    printf("%f == %f\n", a,b);                                              //
    if (floatCompare1(a, b)){
        printf("(a == b) Equals\n\n");
    } else {
        printf("(a == b) Not equals\n\n");
    }
     printf("(%f - %f) < 0.0001\n", a,b);                                   //
    if (floatCompare2(a, b)){
        printf("fixed E: Equals\n\n");
    } else {
        printf("fixed E: Not equals\n\n");
    }
     printf("(%f - %f) < 0.0001 * %f \n", a,b,fmax(fabs(a),fabs(b)));       //
    if (floatCompare3(a, b)){
        printf("Adaptive E: Equals\n\n");
    } else {
        printf("Adaptive E: Not equals\n\n");
    }
    return 0;
}