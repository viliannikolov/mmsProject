//IMPORTANT the rule for command line argument is note realized 
// the input stays as usual and its (not being passed when called after running program as an argument)

#include <stdio.h>
#include <math.h>
int quadEq(double a, double b, double c, double* r1, double* r2, double* imagPart, double* realPart)
{
    int discriminant = b * b - 4 * a * c;
    // condition for real and different roots
     if (discriminant > 0)                                                  //returns 2
     {
        *r1 = (-b + sqrt(discriminant)) / (2 * a);
        *r2 = (-b - sqrt(discriminant)) / (2 * a);
        // printf("\n-TEST-\n");
        // printf("root1 = %.2lf and root2 = %.2lf\n", *r1, *r2);
        return 2;
    }

    // condition for real and equal roots
    else if (discriminant == 0) {                                            // returns 3
        *r1 = *r2 = -b / (2 * a);
        // printf("\n-TEST-\n");
        // printf("root1 = root2 = %.2lf\n", *r1);
        return 3;
    }

    // if roots are not real
    else {                                                                       //returns -1 but still finds the imaginary and real part
        *realPart = -b / (2 * a);
        *imagPart = sqrt(-discriminant) / (2 * a);
        // printf("\n-TEST-\n");
        // printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi\n", *realPart, *imagPart, *realPart, *imagPart);
        //fprintf(stderr,"No real roots\n");
        return -1;
    }



}


int main()    //*(&val) <==> val;
 {
    double a,b,c,root1,root2,realPart=0, imagPart=0;
    fprintf(stdout,"Enter a b c :\n");
    fscanf(stdin,"%lf %lf %lf", &a,&b,&c);
    // quadEq(a,b,c,&root1,&root2,&imagPart,&realPart);
    if( quadEq(a,b,c,&root1,&root2,&imagPart,&realPart) == 2 ) //condition for real and different roots
    {
         printf("root1 = %.2lf\nroot2 = %.2lf\n", *(&root1), *(&root2));
    }
    else if(quadEq(a,b,c,&root1,&root2,&imagPart,&realPart) == 3 ) // condition for real and equal roots
    {
        printf("root1 = %.2lf\nroot2 = %.2lf\n", *(&root1), *(&root2));
    }
    else if(quadEq(a,b,c,&root1,&root2,&imagPart,&realPart) == -1) // if roots are not real
    {
        printf("root1 = %.2lf+%.2lfi\nroot2 = %.2f-%.2fi\n", realPart, imagPart, realPart, imagPart);  // *(&val) == val;
        fprintf(stderr,"No real roots\n");
    }

    return 0;
 }