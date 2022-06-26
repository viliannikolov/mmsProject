#include <stdio.h>
#include <stdint.h>

typedef union{
char a;
int b1;
int c;
int h;
double b;
uint64_t uns;
uint8_t uns2;

} unA;


 void printBits(uint64_t num1)
 {
for (int i=63;i>0;i--)
{
    printf("%llu", (num1 & (1ull << i)) >> i);
}
putchar('\n');
 }

void printBitsD(double num)
 {
    union u{
        uint64_t a;
        double b;
    } u;
u.b = num;
for (int i=63;i>0;i--)
{
    printf("%llu", (u.a & (1ull << i)) >> i);
}
putchar('\n');
 }

union byteAccess4B
{
    uint32_t num;
    uint8_t a[4];
    // uint8_t b1;
    // uint8_t b2; ne stavat
    // uint8_t b3;
    // uint8_t b1;

};




int main(void)
 {

  uint64_t num1= -12;
  double num=2334.45;
  printBits(num1);
  printBitsD(num);
    return 0;
 }

 //for  the main
//    unA u1;
//     u1.a = 20;
//     u1.b = 21;
//     u1.c = 30;
//     u1.uns = 1065;
//     u1.uns2 = 10;
//     printf("u1.a = %d\n", u1.a);
//     printf("u1.b = %f\n", u1.b);
//      printf("size of u1.a= %lu\n", sizeof(u1.a));
//       printf("size of u1.b= %lu\n", sizeof(u1.b));
//        printf("size of u1.c= %lu\n", sizeof(u1.c));
//         printf("size of u1.uns= %lu\n", sizeof(u1.uns));
//         printf("size of u1.uns2= %lu\n", sizeof(u1.uns2));
//     printf("size of u1= %lu\n", sizeof(u1));
//      printf("size of uint64_t %lu\n", sizeof(uint64_t));
//      printf("size of uint32_t %lu\n", sizeof(uint32_t));
//      printf("size of uint16_t %lu\n", sizeof(uint16_t));
//      printf("size of uint8_t %lu\n", sizeof(uint8_t));