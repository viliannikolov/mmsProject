#include <stdio.h>
#include <math.h>
 //NUMBER SYSTEM - CONVERTER 
 /*
 bin = 0,1                 [0/1]                            %
 oct = 01234567            [0-7]                            %
 dec = 0123456789          [0-9]                            %d
 hex = 0123456789ABCDEF    [0-F] 0-9 , (10-15 = A-F)        %x
 
 ...
 ternary = 0,1,2           [0-2]
 quaternary = 0,1,2,3      [0-3]
 */

// DEC -> BIN =(N/2)

//

long long int dec_bin(int num);
long long int bin_dec(int num);

int main()
 {
    //DEC <-> BIN
int opt,num;//rem=(num%2),quot=(num/2)
 printf("1. DEC -> BIN\n2. BIN -> DEC\n3. DEC -> HEX\n4. HEX -> DEC\n5. HEX -> BIN\n6. BIN -> HEX\n7. DEC -> OCT\n8. OCT -> DEC\n Enter option:\n");

 scanf("%d", &opt);

 if(opt == 1) // DEC -> BIN
   {
      scanf("%d", &num); 
      printf("%d(10) = %lld(2)\n", num, dec_bin(num)); 
   }
      else if(opt == 2) //BIN -> DEC
         {
            scanf("%d", &num);
            printf("%d(2) = %lld(10)\n", num,bin_dec(num)); 
                  
         }
      else if(opt == 3) //DEC -> HEX
         {
            scanf("%d", &num);
            printf("%d(10) = %x(16)\n", num,num);
         }
      else if(opt == 4) //HEX -> DEC
         {
            scanf("%d", &num);
            printf("%x(16) = %d(10)\n", num,num);
         }
      else if(opt == 5)
         {
            // scanf("%d", &num);
            // printf("%d(10) = %o(8)\n", num,num); ---------------------------------------
                  printf("WAIT\n");

         }
      else if(opt == 6)
         {
            // scanf("%d", &num);
            // printf("%d(10) = %o(8)\n", num,num); ---------------------------------------
                  printf("WAIT\n");

         }
      else if(opt == 7) //DEC -> OCT
         {
            scanf("%d", &num);
            printf("%d(10) = %o(8)\n", num,num);
         }
      else if(opt == 8) //OCT -> DEC
         {
            scanf("%o", &num);
            printf("%o(8) = %d(10)\n", num,num);
         }
    
    return 0;
 }



 //DEC => BIN
 long long int dec_bin(int num)
 {
    long long int binNum = 0;
    int power = 0;

    while (num > 0)
    {
       int rem = num%2;
       long long int temp = pow(10, power);
       binNum += rem * temp;
       power++;
       num/=2;

    }
   return binNum;
 }

//BIN => DEC
 long long int bin_dec(int num)
 {
    int biNum = 0,decNum = 0, base = 1, rem;

      biNum = num;
      while(num>0)
      {
         rem = num%10;
         decNum = decNum + rem * base;
         num = num/10;
         base = base*2;
      }

   return decNum;
 }