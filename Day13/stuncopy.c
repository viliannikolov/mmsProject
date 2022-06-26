#include <stdio.h>
 #include<stdint.h>
#include <stdbool.h> //can use bool/true/false otherwise you can't use bool in c

//
/*struct bytes
{
    uint8_t byte1;
    uint8_t byte2;
    uint8_t byte3;
    uint8_t byte4;

};


union intchar{
uint32_t numi;
uint8_t numc[4];
};

union intchar2 ic2{
uint32_t numi;
uint8_t numc[4];
};

union intchar3{
uint32_t numi;
uint8_t numc[4];
};*/

typedef struct {
uint8_t data;
struct{ //moje i dostupvane s pobitovi operacii
    uint8_t bit0 :1;
    uint8_t bit1 :1;
    uint8_t bit2 :1;
    uint8_t bit3 :1;
    uint8_t bit4 :1;
    uint8_t bit5 :1;
    uint8_t bit6 :1;
    uint8_t bit7 :1;
};

}Reg;

// typedef struct{ //union can also be used
//     uint8_t u : 3; //only need 3 bits so : 3
//     uint8_t g : 3; //bitfield only on int / char (celi chisla)
//     uint8_t o : 3;
// } perm;

int main()
 {

// perm p1;
// printf("%lu\n", sizeof(p1));
// p1.u = 0;
// for(int i = 0; i<20; i++)
// {
//     printf("%d\n", p1.u);
//     p1.u++;
// }
//  union intchar ic;
//  ic.numi = 0x11223344;
//  printf("%x\n", ic.numc[0]);
//  printf("%x\n", ic.numc[1]);
//  printf("%x\n", ic.numc[2]);
//  printf("%x\n", ic.numc[3]);


// bool isRain = true;
// printf("%ld\n", sizeof(bool)); // cant show  bits because processor can only access bytes but theres bitfields


Reg reg1;
reg1.data = 0b0000001;
reg1.bit0 = 1;
reg1.bit1 = 1;
reg1.bit2 = 1;
reg1.bit3 = 1;
reg1.bit4 = 1;
reg1.bit5 = 1;
reg1.bit6 = 1;
reg1.bit7 = 1;

printf("%d\n",reg1.data);
    return 0;
 }

 //pobitovi operacii rabotqt bez znachenie ot endian
