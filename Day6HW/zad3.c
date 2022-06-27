#include <stdio.h>
#include <stdint.h>

#define TINT 1
#define TCHAR 2
#define TDOUBLE 3
#define TFLOAT 4
#define TUINT8 5
#define TUINT16 6
#define TUINT32 7
#define TUINT64 8





void printValue(const void* valuePtr, uint8_t flag)
{
if(flag==1)
{
fprintf(stdout,"casting void ptr to int:\t %d\n", *(int*)valuePtr);
}
else if (flag == 2)
{
fprintf(stdout,"casting void ptr to char:\t %c\n", *(char*)valuePtr);
}
else if (flag == 3)
{
fprintf(stdout,"casting void ptr to double:\t %lf\n", *((double*)valuePtr));
}
else if (flag == 4)
{
fprintf(stdout,"casting void ptr to float:\t %f\n", *((float*)valuePtr));
}
else if (flag == 5)
{
fprintf(stdout,"casting void ptr to uint8:\t %u\n", *((uint8_t*)valuePtr));
}
else if (flag == 6)
{
fprintf(stdout,"casting void ptr to uint16:\t %u\n", *((uint16_t*)valuePtr));
}
else if (flag == 7)
{
fprintf(stdout,"casting void ptr to uint32:\t %u\n", *((uint32_t*)valuePtr));
}
else if (flag == 8)
{
fprintf(stdout,"casting void ptr to uint64:\t %lu\n", *((uint64_t*)valuePtr));
}
// fprintf(stdout,"The ptr points towards : %d\n", (testing));
}


int main()
 {
    int num1 = 23;  
    char symbol = 'A';
    double num2 = 3.14159265359;
    float num3 = 3.14159265359;
    uint8_t  mask8  = 0b00001111;
    uint16_t mask16 = 0b0000000000001101;
    uint32_t mask32 = 0b00000000000000000000000000000011;
    uint64_t mask64 = 0b0000000000000000000000000000000000000000000000000000000000010001;




    void* ptr = &symbol; //points to one of 
printValue( &num1,TINT);
printValue( &symbol,TCHAR);
printValue( &num2,TDOUBLE);
printValue( &num3,TFLOAT);
printValue( &mask8,TUINT8);
printValue( &mask16,TUINT16);
printValue( &mask32,TUINT32);
printValue( &mask64,TUINT64);


    return 0;
 }