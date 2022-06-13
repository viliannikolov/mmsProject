#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include "car.h" //car.h

#define COUNT 10
#define RAND_MAX 20
//func
typedef int (*comparef_t)(const void*, const void*);

 typedef struct{
        char model[21];
        uint8_t maxspeed;
        double price;
     } Car;
//
    int randint(int,int); //speed
    double randReal(double,double); //price
    char* randomModel(char*); //model
// 
    int compModelDESC(const void*, const void*);
    int compModelASC(const void*, const void*);
    int compMaxSpeedASC(const void*, const void*);
    int compMaxSpeedDESC(const void*, const void*);
    int compPriceASC(const void*, const void*);
    int compPriceDESC(const void*, const void*);
    void printCar(const Car *c);


int main()
 {
    
      comparef_t compfunc[]  = {
        compMaxSpeedASC,
        compMaxSpeedDESC,
        compPriceASC,
        compPriceDESC,
        compPriceASC,
        compPriceDESC
    };
    // const Car c1 = {.model="Suzuki", .maxspeed=100, .price=340.23};
    //     printCar(&c1);
        
         srand(time(NULL));
    int opt;
    Car cars[COUNT];
    for (int i = 0; i < COUNT; i++){
        randomModel(cars[i].model);
        cars[i].maxspeed = randint(100, 300);
        cars[i].price = randReal(1000.0, 100000.0);
    }
    
    scanf("%d", &opt);
    qsort(cars, COUNT, sizeof(cars[0]), compfunc[opt]);

    for (int i = 0; i < COUNT; i++){
        printCar(cars + i);
    }
    return 0;


 }

 int compModelASC(const void* cp1, const void* cp2){
    Car* c1 = (Car*)cp1;
    Car* c2 = (Car*)cp2;
    return strcmp(c1->model, c2->model);
}

int compModelDESC(const void* cp1, const void* cp2){
    Car* c1 = (Car*)cp1;
    Car* c2 = (Car*)cp2;
    return strcmp(c2->model, c1->model);
}

int compMaxSpeedASC(const void* cp1, const void* cp2){
    Car* c1 = (Car*)cp1;
    Car* c2 = (Car*)cp2;
    return c1->maxspeed - c2->maxspeed;
}

int compMaxSpeedDESC(const void* cp1, const void* cp2){
    Car* c1 = (Car*)cp1;
    Car* c2 = (Car*)cp2;
    return c2->maxspeed - c1->maxspeed;
}

int compPriceASC(const void* cp1, const void* cp2){
    Car* c1 = (Car*)cp1;
    Car* c2 = (Car*)cp2;
    if (fabs(c1->price - c2->price) < 0.001){
        return 0;
    } else if (c1->price > c2->price){
        return 1;
    }
    return -1;
}

int compPriceDESC(const void* cp1, const void* cp2){
    Car* c1 = (Car*)cp1;
    Car* c2 = (Car*)cp2;
    if (fabs(c1->price - c2->price) < 0.001){
        return 0;
    } else if (c1->price < c2->price){
        return 1;
    }
    return -1;
}
void printCar(const Car *c){
    printf("Model: %25s ", c->model);
    printf("Maximum speed: %4u ", c->maxspeed);
    printf("Price: %4.2lf\n", c->price);
}

int randint(int min, int max){
    return min + rand() % (max - min + 1);
}

double randReal(double min, double max){
    return min + ((double)rand() / RAND_MAX) * (max - min);
}

char* randomName(char* name){
    // [A-Z][a-z]{5,10} [A-Z][a-z]{4,10}
    // Vitara
    unsigned index = 0;
    name[index++] = randint('A', 'Z');
    int n = randint(5, 10);
    for (int i = 0; i < n; i++){
        name[index++] = randint('a', 'z');
    }
    name[index++] = ' ';
    n = randint(5, 10);
    name[index++] = randint('A', 'Z');
    for (int i = 0; i < n; i++){
        name[index++] = randint('a', 'z');
    }
    name[index] = '\0';
    return name;
}
