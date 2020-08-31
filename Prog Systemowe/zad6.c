#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<unistd.h>

int main(){
    pid_t fork_pid;
    fork_pid = fork();
    if(fork_pid == -1)
    {
        fprintf(stderr, "fork failed \n");
        return 1;
    }
    if(fork_pid == 0){
        //kiddo
        execlp("ls", "ls", "-l", NULL);
        exit(0);
    }
    if(fork_pid > 0){
        int status;
        wait(&status);
        return 0;
    }


}