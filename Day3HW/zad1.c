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

long unsigned int dec_bin(int num);
long unsigned int bin_dec(int num);
long long int hex_dec(int num);
long long int dec_hex(int num);
long unsigned int bin_hex(int num);
    long unsigned int ternary_quaternary(int num);

int main()
 {
    //DEC <-> BIN
int opt;//rem=(num%2),quot=(num/2)
unsigned int num;
int flag=1;
while(flag==1){
 printf("\n1. DEC -> BIN\n2. BIN -> DEC\n3. DEC -> HEX\n4. HEX -> DEC\n5. HEX -> BIN\n6. BIN -> HEX\n7. DEC -> OCT\n8. OCT -> DEC\n9. TERNARY -> QUATERNARY\n10.EXIT\n Enter option:\n");

 scanf("%d", &opt);
putchar('\n');
 if(opt == 1) // DEC -> BIN
   {
      scanf("%u", &num); 
      printf("%u(10) = %lu (2)\n", num, dec_bin(num)); 
   }
      else if(opt == 2) //BIN -> DEC
         {
            scanf("%u", &num);
            printf("%u(2) = %lu(10)\n", num,bin_dec(num)); 
            putchar('\n');
                  
         }
      else if(opt == 3) //DEC -> HEX
         {
            scanf("%u", &num);
            printf("%u(10) = %x(16)\n", num,num);
            putchar('\n');
         }
      else if(opt == 4) //HEX -> DEC
         {
            scanf("%x", &num);
            printf("%x(16) = %u(10)\n",num,num);
            putchar('\n');
         }
      else if(opt == 5) //HEX -> BIN
         {
            scanf("%x", &num);
            printf("%x(16) = %lu(2)\n", num,dec_bin(num)); 
                  putchar('\n');

         }
      else if(opt == 6) //BIN -> HEX
         {
            scanf("%u", &num);
            printf("%u(2) = %lx(16)\n", num,bin_hex(num));
                  putchar('\n');

         }
      else if(opt == 7) //DEC -> OCT
         {
            scanf("%d", &num);
            printf("%u(10) = %o(8)\n", num,num);
            putchar('\n');
         }
      else if(opt == 8) //OCT -> DEC
         {
            scanf("%o", &num);
            printf("%o(8) = %u(10)\n", num,num);
            putchar('\n');
         }
      else if (opt == 9) //TERNARY -> QUATERMERY
         {
            scanf("%d", &num);
            printf("%d(3) = %lu(4)\n", num,ternary_quaternary(num));
            putchar('\n');
         }
      else if (opt == 10)
      {
         flag = 0;
      }
     else {printf("\n Wrong option! Exiting...\n");
     putchar('\n');
               return 0;
            }
 }
 }

 //DEC => BIN
 long unsigned int dec_bin(int num)
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
 long unsigned int bin_dec(int num)
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

 //DEC => HEX



 //HEX => DEC


 //BIN => HEX
 long unsigned int bin_hex(int num){
   long int binary=num,hexadecimal=0,i = 1, remainder;
     while (binary != 0)

    {

        remainder = binary % 10;

        hexadecimal = hexadecimal + remainder * i;

        i = i * 2;

        binary = binary / 10;

    }
    return hexadecimal;
    }






    //TERNARY TO QUATERNARY
    long unsigned int ternary_quaternary(int num)
    {
      if(num != 0){  
      int ternary = num;                                 // to decimal
      int tempdecimal =0,i=0,remainder;                  //
      while(ternary != 0)                                //
         {                                               //
            remainder = ternary % 10;                    //
            ternary /= 10;                               //
            tempdecimal += remainder * pow(3, i);        //
            ++i;                                         //
         }                                               //



      int quaternary=0;
      remainder = 0;
      
      while(tempdecimal > 0)                    //turning decimal to quaternary
      {
         remainder = tempdecimal % 4;
         tempdecimal /= 4;
        quaternary =quaternary*10+remainder; //this is the quaternary result of the reminder
      }
   
   int reverse=0;
      while(quaternary != 0)              //now just need to reverse it
      {
         remainder = quaternary%10;
         reverse = reverse * 10 + remainder;
         quaternary /=10;
      }     
    return reverse;
    }

    else {return;}
}

