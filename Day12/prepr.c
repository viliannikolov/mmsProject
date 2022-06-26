#include <stdio.h>
#define MAX(a,b) ((a)>(b)?(a):(b))
#define PRINTNAME(name) printf("")//STRINGIZE
#define PRINTNUM(n) printf("%d'n", num##n)  //CONCATENATION//
#define PRINTVAL(num) printf("%s = %d\n", #num, num)
#define DEFINENUM(n,val) int num##n = val;

//vgradeni makrosi _DATE_ , __TIME__

//macros side effect

// #if !defined(COUNT) == #ifndef COUNT
#define A
#define B

#ifdef A        //=#if deined(A) && defined(b)
    #ifdef B       // #endif
    #endif          //cant be used in while for or other loop
#endif          //preprocessor


//

#ifdef A            //if defined(A) && 
    #if A>15    
    #endif
#endif

//CREATION OF OUR OWN ERROR
//#define COUNT 3
#define OS 1
int max(int,int);
int main(void)
 {
 #if !defined(OS) //#ifndef
    #error OS is not defined!
 #elif OS ==1
    printf("Windows.\n");
        #warning Windows OS is here! Be careful!
#elif OS == 2
    printf("Linux\n");
#elif OS == 3
    printf("MacOS\n");
#else
    #error OS IS NOT DEFINED    




/*printf("%s\n", __DATE__);
printf("%s\n", __TIME__);
printf("%s\n", __TIMESTAMP__);
printf("%d\n", __LINE__);
printf("%d\n", __STDC__);*/


/*//CREATION OF OUR OWN ERROR
ifndef COUNT
#error Count is too low!
#elif COUNT < 10
#warning Count is too low!
#endif
*/


//#pragma //give instructions/options -w for example //set compiler

   /* 
  int a=3,b=5;
  int num =MAX(a++,b++);
  printf("Num= %d \n",num);
      printf("A= %d \n",a);
        printf("B= %d \n)", b);*/
    return 0;
 }