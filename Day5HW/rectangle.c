//IMPORTANT the rule for command line argument is note realized 
// the input stays as usual and its (not being passed when called after running program as an argument)
#include <stdio.h>
#include <math.h>
int rectangle(double a,double b,double *S,double *P)
{

   
        if(a <= 0 || b <= 0)
        {
            fprintf(stderr,"\n--Invalid rectangle sides!\n");
            return -1;
        }
        
        
  *P = (a+b)*2;
  *S = a*b;
  return 0;
}

int main(int argc,char* argv[])
 {
    double w,h,S=0,P=0;
    putchar('\n');
    putchar('\n');

    while(fscanf(stdin,"%lf %lf", &w,&h) != EOF)
    {
    
    fprintf(stdout,"---------------------------------------------------------");
    rectangle(w,h,&S,&P);
    fprintf(stdout,"\nP = %.2lf\nS = %.2lf \n", *(&P) , *(&S));

    
    fprintf(stdout,"---------------------------------------------------------");
    putchar('\n');
    putchar('\n');
    putchar('\n');

 if(rectangle(w,h,&S,&P) == -1)
 {
    fprintf(stderr, "--ERROR returned -1\n");
 }
 else if (rectangle(w,h,&S,&P) == 0)
 {
    fprintf(stdout, "++COMPLETE returned 0\ncontinue entering..\n\n");

 }
    S = 0;
    P = 0;
    }
    
    return 0;
 }