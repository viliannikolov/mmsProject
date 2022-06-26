#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> //fork()
#include <sys/wait.h> //wait(NULL)
#include <sys/types.h> //pid_t

int main()
 {
 
    // pid_t pid1 = fork();
    // pid_t pid2 = fork();
    // printf("Hello\n");

    pid_t pid1 = fork();
    if(-1 ==pid1)
    {
        perror("fork");
        return EXIT_FAILURE;
    }




    
    return EXIT_SUCCESS;
 }