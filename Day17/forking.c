#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> //fork()
#include <sys/wait.h> //wait(NULL)
#include <sys/types.h> //pid_t
int main()
 {
    // printf("MMS C Camp 15\n");
    // fork(); // copy processes below (2)
    // fork(); // 4
    // fork(); // 8

    // printf("Hello my PID is %d\n", getpid());

    // //2
    // while(1)
    // {
    //    printf("Hello my 2 PID is %d\n", getpid()); 
    //    sleep(1);
    // }


    //3
//  int pid = fork();
 pid_t pid = fork();

 if(-1 == pid)
 {
    perror("fork");
    return EXIT_FAILURE;
 }
 if(0== pid)
 {
    //code for child
    // for(int i = 0; i<5; i++)
    // {
    // printf("Hello! Im child process!\n");
    // sleep(1);
    // }
       printf("Child: My PID: %d\n", getpid());
    printf("Child: My PPID: %d\n",getppid());
 }
 else
 {
    //code for parent
    //  for(int i = 0; i<5; i++)
    // {
    // printf("Hello! Im parent process!\n");
    // //sleep(10);//ne raboti vinagi
    // }
    printf("Parent: My PID: %d\n",getpid());
    printf("Parent: My Child PID: %d\n", pid);

    wait(NULL);
    printf("Bye\n");
 }
    return EXIT_SUCCESS;
 }