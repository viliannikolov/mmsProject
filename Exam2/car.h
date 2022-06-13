
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
