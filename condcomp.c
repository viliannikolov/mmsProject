#include <stdio.h>
 
#define N 2
#define OS 1
#define DEBUG
int main()
 {
 /*
 //1=true 0=false
#if N == 2 // ne raboti za celi chisl, samo za int raboti
printf("MMS C CAMP\n");
#else
printf("print else \n");
#endif*/

#if OS == 1
    printf("Linux\n");
    #elif OS == 2
    printf("Windows\n");
    #else
    printf("MacOS\n");
#endif

#ifdef DEBUG //ifndef == if not defined
{
    //statement
}
#endif
    return 0;
 }