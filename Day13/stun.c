#include <stdio.h>
 #include<stdint.h>
#include <stdbool.h> 



typedef struct {
    uint8_t data;
    struct{
        uint8_t bit0 :1;
        uint8_t bit1 :1;
        uint8_t bit2 :1;
        uint8_t bit3 :1;
        uint8_t bit4 :1;
        uint8_t bit5 :1;
        uint8_t bit6 :1;
        uint8_t bit7 :1;
    };

} Reg;


int main()
 {




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

