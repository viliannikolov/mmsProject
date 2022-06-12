#include <stdio.h>
 /*
 1. reads from stdin(standart input / user input / keyboard) and..
 2. prints it into file numbers.txt   
 3. reads nums from numbers.txt
 4. then finds max of nums in numbers.txt and..
 5. sends it to stdout and writes in max.txt
*/

int main()
 {
 double num1=0,num2=0,num3=0;

FILE *fnums,*fmax;
fnums = fopen("numbers.txt", "w+");
fmax = fopen("max.txt", "w+");
   printf("Please enter 3 numbers, separated by spaces or the (Enter key). \n \n");
   scanf("%lf %lf %lf", &num1,&num2,&num3);        //1.
   fprintf(fnums,"%lf %lf %lf", num1, num2, num3);     //2.
   printf("\n The numbers found in the file (numbers.txt) are:\n %.2lf \n %.2lf \n %.2lf\n", num1, num2, num3); //output found nums in numbers.txt file
   fscanf(fnums,"%lf %lf %lf", &num1,&num2,&num3);    //3.
   
   if(num1>num2 && num1>num3)                                              // 4.  start 
      {
         
         fprintf(stdout, "The largest num is: num1 = %.2lf\n", num1);
         fprintf(fmax, "The largest num is: num1 = %.2lf\n", num1);      //max print 5.
      }
    else if (num2>num1 && num2>num3)
      {
         
         fprintf(stdout, "The largest num is: num2 = %.2lf\n", num2);
         fprintf(fmax, "The largest num is: num2 = %.2lf\n", num2);      //max print 5.
      }
    else if (num3>num1 && num3>num2)
      {
         
         fprintf(stdout, "The largest num is: num3 = %.2lf\n", num3);  
         fprintf(fmax, "The largest num is: num3 = %.2lf\n", num3);      //max print 5.
      }                                                                     //4. end


   fclose(fnums);
   fclose(fmax);
    return 0;
 }