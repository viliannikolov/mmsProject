#include <stdio.h>
 // XOR (a^b)
 //the file that this program uses will be numbers2.txt instead of just numbers.txt(because numbers.txt is used by another program - zad1.c)


int main()
 {

     FILE *fp;
     fp = fopen("numbers2.txt","r");

     unsigned int a,b,c,d; //a,b,c = 3 inputs of either 1 or 0 value , d = output xor of a^b^c

     for(int i=0;i<8;i++) //8 rows in file numbers2.txt
     {
        fscanf(fp,"%d %d %d\n", &a,&b,&c);
        printf("(%d ^ %d ^ %d) = %d \n", a,b,c, (a ^ b ^ c));
     }

    return 0;
 }