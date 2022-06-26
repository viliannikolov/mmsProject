#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 

int printArr(int matrix[][3]) //zaduljitelno [][j]
{
    printf("%lu\n",(size_t)matrix);
    printf("%lu\n",(size_t)matrix+1);
    printf("%d\n", abs((size_t)matrix - (size_t)(matrix + 1)));


}

int main()
 {
    int matrix[][3] = {
        {3,4,5},
        {1,2,3},
        {5,67,5},
        {-5,23,45},

    };

printArr(matrix);

    return 0;
 }