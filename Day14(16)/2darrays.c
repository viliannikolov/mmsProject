#include <stdio.h>
#include <stdlib.h>

#define N 5
#define M 8

int main()
 {
 
 int** array = malloc(N*sizeof(int*));
for(int i = 0; i<N;i++)
{
    for (int j = 0; i < M; j++)
    {
        printf("%d ",array[i][j]);
    }
    putchar('\n');
}

printf("%d %d\n", array[0][0],**array);
printf("%d %d\n", array[0][1],*(*array+1));


//free(array)//samo shte osvobodi edinq array i drugite shte sa neizpolzvaemi i memory leak
for(int i =0;i<N;i++)
{
free(array[i]);
}
free(array);
    return 0;
 }