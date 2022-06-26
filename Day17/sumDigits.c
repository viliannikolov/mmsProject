
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <time.h>



int main(){
    int n,count=0,sum=0;
    printf("Enter how many processes to make\n");

    scanf("%d", &n);
    printf("Enter (%i * 2) processes to sum\n", n);
    for (int i = 0; i < n; i++)
    {
        pid_t pid = fork();
            if (-1 == pid)
            {
                perror("fork");
                return EXIT_FAILURE;
            }

            if (0==pid)
            {
                //child
                //atoi
                
                char number[len];
                int len=strlen(number);
                scanf("%d", &number);
                
                for (int j = 0; j < len; j++)
                {
                    sum = sum+number[j];
                }
                printf("Sum of child1 is: %d", sum);
                // if(sum > 9 )
                // {
                //     sum
                // }
                
              
                //  while(number!=0)  
                //     {  
                //         number=number/10;  
                //         count++;  
                //     }  


                    // for (int j = 0; j < count; j++)
                    // {
                    //     scanf("%d", &number);

                    //     sum = sum+number;
                    // }
                    
            }
            else
            {
                //parent
            }

    }
    
    


    for (int i = 0; i < n; i++){
        pid_t pid = fork();
        if (-1 == pid){
            perror("fork");
            return EXIT_FAILURE;
        }
        if (0 == pid){
            srand(time(NULL) + i);
            // code in child
            int num = rand() % 10;
            for (int i = 0; i < 15; i++){
                printf("My number is %d\n", num);
                sleep(1);
            }
            exit(EXIT_SUCCESS);
        }
    }
    for (int i = 0; i < N; i++){
        wait(NULL);
    }
    return EXIT_SUCCESS;
}