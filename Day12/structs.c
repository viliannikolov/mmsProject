#include <stdio.h>
 #include <stdint.h>
 //#pragma pack(1)//pravi programata po bavna (pack(2),pack(4) Kratni na 4)
typedef struct 
{
    char a;
    char b;
    char c;
} str_a;

typedef struct 
{
    int a;
    int b;
    int c;
} str_b;

typedef struct 
{
    char a;
    int b;
    char c;
} str_c;

typedef struct 
{
    char a;
    char b;
    int c;
} str_d;

typedef struct 
{
    char a;
    double b;
    int c;
    char d;
    char e;
    char f;
} str_e;


typedef struct 
{
    int a;
    int* b;
    char c;
    uint16_t d;
    float f;

} str_g;




typedef struct 
{
    char *s; //ukazateli 8byte
    int a;
} str_f;


typedef struct 
{
    int a;
    char b[10]; // char b1, char b2 ... char b10  kato da deklarirame 10 reda char po 1 byte (i za int c[10] vse edno deklarirame 10 reda int s razmeri 4byte vseki)
} str_h;



typedef struct 
{
    char *s; //ukazateli 8byte
    int a;
} str_i;

typedef struct 
{
    str_i a;
    int a;
} str_j;




int main(void)
 {
 printf("Size of str_a: %lu B\n", sizeof(str_a));
 printf("Size of str_a: %lu B\n", sizeof(str_b));
  printf("Size of str_a: %lu B\n", sizeof(str_c));
   printf("Size of str_a: %lu B\n", sizeof(str_d));
    printf("Size of str_a: %lu B\n", sizeof(str_e));
     printf("Size of str_a: %lu B\n", sizeof(str_f));
      printf("Size of str_a: %lu B\n", sizeof(str_g));
       printf("Size of str_a: %lu B\n", sizeof(str_h));
    return 0;
 }