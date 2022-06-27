// sums all positive array elements
#include <stdio.h>
 

unsigned sumArrayDigits(const int* arr, size_t n)
{
    for (int i = 0; i < n; i++)     
    {printf("%d ", arr[i]);}     // PRINT ARRAY  
    putchar('\n'); 
    int sum =0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>0)
        {
            sum+=arr[i];
        }
    }  
    return sum;
}


int main()
 {
 int arr[] = {4,5,4,5,4};
 int size = (sizeof(arr) / sizeof(arr[1]));
//  printf("%d\n",size);
unsigned sum = sumArrayDigits(arr,size);
 printf("The sum of positive numbers in arr[] is : %u\n", sum);
    return 0;
 }