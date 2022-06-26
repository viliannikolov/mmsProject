#include <stdio.h>
 #define PI 3.14159
 #define TERMS 7

double power(double base, int exp) {
    if(exp < 0) {
        if(base == 0)
            return -0; // Error!!
        return 1 / (base * power(base, (-exp) - 1));
    }
    if(exp == 0)
        return 1;
    if(exp == 1)
        return base;
    return base * power(base, exp - 1);
}

int fact(int n) {
    return n <= 0 ? 1 : n * fact(n-1);
}

double sine(int deg) {
    deg %= 360; // make it less than 360
    double rad = deg * PI / 180;
    double sin = 0;

    int i;
    for(i = 0; i < TERMS; i++) { // That's Taylor series!!
        sin += power(-1, i) * power(rad, 2 * i + 1) / fact(2 * i + 1);
    }
    return sin;
}




int main()
 {
    int degreeVal=0;
    printf("Enter (int) to get the sin() of it:\n");
    scanf("%d", &degreeVal);
    printf("sin(%d) = %lf\n", degreeVal, sine(degreeVal));
    return 0;
 }