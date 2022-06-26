#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 3
#define M (rand() % 10)


int main()
 {
    srand(time(NULL));
    int q=randint(1,2);

     int** array = malloc(N*sizeof(int*));
    for (int i = 0; i < N; i++)
    {
        *(array+i) = malloc(M*sizeof(int*));
    }
    
     for (int i = 0; i < N; i++){
        *(array+i) = q;
        for (int j = 0; j < M; j++){

           *(*(array+i)+j+1) = q;
        }
    }

for (int i = 0; i < N;i++){
        for (int j = 0; j < M+1; j++){
            printf("%d ", *(*(array+i)+j));
        }
        putchar('\n');
    }

for (int i = 0; i < N; i++){
       
        free(array[i]);
    }
    free(array);

    return 0;
 }