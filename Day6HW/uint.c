#include <stdio.h>
#include <stdint.h>
int main()
 {
    uint32_t arr[] = { 1, 3, 5, 7, 9, 8,12};
    uint32_t *ptr = arr;
    uint32_t num = 5;

    printf("%u\n", *(ptr + num));

    return 0;
 }