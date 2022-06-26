#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define COUNT 10

int main()
 {
 
 srand(time(NULL));

int* array = malloc(sizeof(int)*COUNT*10);
//*array-> array[0], *(array+1) -> array[2], *(array+2) -> array[2].......
//int* array = calloc(COUNT*sizeof(int)*C);
for(int i=0;i<COUNT; i++)
{
    array[i]=rand() %10;
}
for(int i=0;i<COUNT; i++)
{
    printf("%d ",array[i]);
}
putchar('\n');

array = realloc(array,COUNT*2 *sizeof(int));
for(int i=0;i<COUNT*2; i++)
{
    array[i]=rand() %10;
}
for(int i=0;i<COUNT*2; i++)
{
     printf("%d ",array[i]);
}
putchar('\n');
free(array);


// int* *counters = malloc(sizeof(int)*COUNT);
// for(int i=0;i<COUNT; i++)
// {
//     counters[i]=0;
// }

//int* array = calloc(COUNT,sizeof(int)); //sets to zero also (slower than malloc)
//malloc();
//calloc();
//realloc(); resize the size of ptr (contents wont be changed)
    return 0;
 }