#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <math.h>
#include <time.h>

#include "car.h"
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