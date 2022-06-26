#include <stdio.h>
 

enum Day{
    MONDAY = 10,
    TUESDAY,
    SATURDAY = 15,
    SUNDAY
};

typedef enum { // sizeof(enum x)%d == sizeof(int) %d
    ON=1,
    OFF=0,
    WAIT=3
} States;

int main()
 {
  enum Day days;
    days = MONDAY;
    if(days == TUESDAY)
        {
            printf("Its tuesday\n");
        }
        else{
            printf("Its not tuesday\n");
        }

    States MyMachine;
    MyMachine = WAIT;
    printf("%d\n", MyMachine);

        
    return 0;
 }