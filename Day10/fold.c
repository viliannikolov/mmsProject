#include <stdio.h>
 
int sum2(int a, int b)
    {
        return a+b;
    }
int product2(int a,int b)
    {

    }
int min2(int a, int b)
    {

    }
int max2(int a, int b)
    {

    }
    int fold(int* arr,int n, int init/*initial_value*/, int(*op)(int,int))
        {
            int res = init;//initial_value
            for (int i = 0; i < n; i++)
            {
                printf("res: %d\n", res);
                res = op(res,arr[i]);
                //res = res + arr[i];
            }
            return res;
        }
int square_sum(int a,int b)
    {
        return a*a + b*b;

    }

int main()
 {
 int arr[] = {4,2,5,1,3},arrLen = 5;
 //1+2+3+4+5
 //1*2*3*4*5
/*
((((1+2)+3)+4)+5)
((((1*2)*3)*4)*5)
min(min(min(min(1,2),3),4),5)
max(max(max(max(1,2),3),4),5)
*/


    printf("sum = %d \n",fold(arr,arrLen,0,sum2));
    //(((((0+1)+2)+3)+4)+5)
    printf("sum = %d \n",fold(arr,arrLen,0,sum2)/(double)arrLen);

    printf("product = %d \n",fold(arr,arrLen,1,product2));
    //(((((0+1)+2)+3)+4)+5)

    printf("min = %d \n", fold(arr, arrLen, arr[0], min2));
    //min(min(min(min(1,2),3),4),5)
    printf("max = %d \n", fold(arr, arrLen, arr[0], max2));
    
    printf("sum sq = %d \n", fold(arr,arrLen,0,square_sum));
    // ((((0+1^2)^2 + 2^2)^2 + 3^2)^2 + 4^2)^2
    //(0+1^2)

 }