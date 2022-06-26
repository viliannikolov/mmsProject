//IMPORTANT the rule for command line argument is note realized 
// the input stays as usual and its (not being passed when called after running program as an argument)

#include <stdio.h>
#include <math.h>
int triangle(double a,double b,double c,double *S,double *P)
{
double s;
   
        if(a <= 0 || b <= 0 || c <= 0)
        {
            fprintf(stderr,"\n--Invalid triangle sides!\n");
            return -1;
        }
        else if((a+b) <= c || (b+c) <= a || (a+c) <= b)
        {
            fprintf(stderr,"\n--Sum of each 2 sides must be greater than 3rd side (error gives -nan or S = 0) \n");
            return -1;
        }

  *P = a+b+c;
  s = *P / 2;
  *S = sqrt(s * (s - a) * (s - b) * (s - c));
  return 0;
}

int main()
 {
    double a,b,c,S=0,P=0;
    putchar('\n');
    putchar('\n');

    while(fscanf(stdin,"%lf %lf %lf", &a,&b,&c) != EOF)
    {
    
    fprintf(stdout,"---------------------------------------------------------");
    triangle(a,b,c,&S,&P);
    fprintf(stdout,"\nP = %.2lf\nS = %.2lf \n", *(&P) , *(&S));

    S = 0;
    P = 0;
    fprintf(stdout,"---------------------------------------------------------");
    putchar('\n');
    putchar('\n');
    putchar('\n');

 if(triangle(a,b,c,&S,&P) == -1)
 {
    fprintf(stderr, "--ERROR returned -1\n");
 }
 else if (triangle(a,b,c,&S,&P) == 0)
 {
    fprintf(stdout, "++COMPLETE returned 0\ncontinue\n\n");

 }
    }
    
    return 0;
 }