//counts how many 1's are in the given mask

#include <stdio.h>
#include <stdint.h>
long unsigned onesCount(uint64_t mask)
{
   long unsigned count=0, search=0;
   for(int bit = sizeof(mask)*8-1; bit >= 0; bit--)
   {
     search = (mask & (1<<bit))>>bit;
     if(search == 1)
     {
      count++;
     }

   }
   return count;
}

int main()
 {
   uint64_t list = 0;
   printf("Enter number (int):\n");
   scanf("%lu", &list);
   printf("the 1's in %lu is/are : %lu\n" , list, onesCount(list));
   
    return 0;
 }