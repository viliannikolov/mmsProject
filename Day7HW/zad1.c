#include <stdio.h>
#define LEN 5

 int secondMax(int* arr, size_t n, int* secondMax)
 {
   
   
   
   //    //method for counting the times a number is repeating
   //    int count=0;
   //    for(int i=0;i<n; i++)
   //    {
   //       if(arr[1] == arr[i])
   //       {
   //          count++;
   //       }
   //    }
   //    if(count == n)
   // {
      
   //    return -3; //all elements are the same
   // }

   //    else if(sizeof(arr) < 1)
   //    {
   //       return -1;//empty arr
   //    }
   //    else if(sizeof(arr) == 1)
   //    {
   //       return -2; //only one elem
   //    }

 for(int i=0;i<n;i++)
    {
      printf("%d ", arr[i]); //printing array
    }
    putchar('\n');
   int firstmax = 0;
   int secondmax = 0;

    for(int i=0;i<n;i++) //finding max running from 0 to n
    {
      if(arr[i] > firstmax)
      {
         firstmax = arr[i];
      }
    }
    for(int i = 0;i<n;i++)//finding secondmax running from 0 to n
    {
       if(arr[i]>secondmax && arr[i] != firstmax)
         {
            secondmax = arr[i];  
         }
    }


   *secondMax = secondmax;
   printf("first max is: %d\n", firstmax);
   return *secondMax;

 }

int main()
 {
  
   int arr[LEN];
   int scndMax=0;
   // int len =(sizeof(*&arr)/sizeof(arr[0]));
   
   printf("Enter %d elements to the array: \n", LEN);
   for(int i=0; i<LEN;i++)
   {
      scanf("%d", &arr[i]);
      putchar('\n');
   }
// if(secondMax(&arr,LEN, &scndMax) == -1)
// {
//    fprintf(stderr,"-EMPTY ARR-\n");
//    return 0;
// }
// else if(secondMax(&arr,LEN, &scndMax) == -2)
// {
//    fprintf(stderr,"-ARR HAS ONLY ONE ELEMENTS-\n");
// return 0;
// }
// else if(secondMax(&arr,LEN, &scndMax) == -3)
// {
//    fprintf(stderr,"-ALL ARR ELEMENTS ARE THE SAME-\n");
// return 0;
// }
//    else{
   printf("second max is %d\n", secondMax(arr,LEN, &scndMax));
    return 0;
   //  }
 }