#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

#define LAPTOPS_COUNT 5


typedef struct Laptop
{
    int serialID;
    char brand[100];
    int weight;
    int price;
} *laptop;

// int randint(int min, int max){
//     return min + rand() % (max - min + 1);
// }

// double randReal(double min, double max){
//     return min + ((double)rand() / RAND_MAX) * (max - min);
// }

// char* randombrand(char* name){
//     // [A-Z][a-z]{5,10} [A-Z][a-z]{5,10}
//     // Lenovo 
//     unsigned index = 0;
//     name[index++] = randint('A', 'Z');
//     int n = randint(5, 10);
//     for (int i = 0; i < n; i++){
//         name[index++] = randint('a', 'z');
//     }
//     name[index++] = ' ';
//     n = randint(5, 10);
//     name[index++] = randint('A', 'Z');
//     for (int i = 0; i < n; i++){
//         name[index++] = randint('a', 'z');
//     }
//     name[index] = '\0';
//     return name;
// }
void printLaptop(const laptop *l){
    printf("Printing Serial ID: %d\n", l->serialID);
    printf("Printting Brand name: %s\n", l->brand);
    printf("Printing Weight: : %d\n", l->weight);
    printf("Printing price: %d\n", l->price);
}


// struct Laptop laptops[LAPTOPS_COUNT];

int main()
 {
     srand(time(NULL));
    laptop *laptops  = calloc(LAPTOPS_COUNT, sizeof(laptop));
    if(NULL == laptops){
        fprintf(stderr, "Malloc error!\n");
        return EXIT_FAILURE;
    }
    
    for (int i = 0; i <LAPTOPS_COUNT; i++){
        scanf("%p", &laptops.serialID[i]);
        // *laptops[i].serialID = randint(0,10);
        // *laptops[i].brand = randombrand;
        // *laptops[i].weight = randReal(0.1,20.1);
        // *laptops[i].price = randint;
    }

     for (int i = 0; i <LAPTOPS_COUNT; i++){
        printf("%d ", laptops[i]);
    }
    
    putchar('\n');

    // array = realloc(array, LAPTOPS_COUNT * 2 * sizeof(int));

    // for(int i = 0; i<LAPTOPS_COUNT * 2; i++)
    // {
    //     array[i] = rand() % 10;
    // }

    // for(int i = 0; i<LAPTOPS_COUNT * 2; i++)
    // {
    //     printf("%d ", array[i]);
    // }
    // for(int i=0;i<LAPTOPS_COUNT; i++)
    // {
    //     free((array[i]));
    // }
    // free(array);


    return 0;
 }