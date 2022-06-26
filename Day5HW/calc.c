#include <stdio.h>
 
int main()
 {
 
   int calcRun;
   char sign;
   double num1=0, num2=0,res=0;
   while((fscanf(stdin,"%lf %c %lf", &num1, &sign, &num2)) != EOF)
   {
      //fscanf(stdin,"%lf %c %lf", &num1, &sign, &num2);
      if(sign == '+')
      {
         res = num1 + num2;
      }
      else if(sign == '-')
      {
         res = num1 - num2;
      }
      else if(sign == '*')
      {
         res = num1 * num2;
      }
      else if(sign == '/')
      {
         res = num1 / num2;
      }
      else
      {
         fprintf(stderr,"\n---Wrong expression (check number or sign)---\n");
      }

      fprintf(stdout,"\nresult = %.2lf\n", res);
   }
   printf("\n-EOF-\n");
    return 0;
 }