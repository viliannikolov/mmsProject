#include <stdio.h>
 #include<stdlib.h>

int* getNum()
{
    printf("Address of a: %p\n", a);
int a= malloc(sizeof(int));// moje
*a = 10;
return a;
}

int main()
 {
 /*//if program works 3days and it still does stuff the dynamic mem will fill and 
int* number = malloc(sizeof(int)); //(int*)malloc(sizeof(int)); if in c++ // in c its implicit (inside cast) no need to cast
*number = 50;
printf("%d\n", *number);

char* sym = malloc(sizeof(char));
*sym = 'z';
printf("%c\n", *sym);
free(number); //so theres no memory leaks
free(sym);*/
int *p = getNum();
printf("%d\n",*p); //segmentation fault 
printf("Address of p: %p\n", p);
free(p);

    return 0;
 }