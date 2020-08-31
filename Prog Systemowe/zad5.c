#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<unistd.h>

int main(){
    FILE *new;
    pid_t fork_pid;
    fork_pid = fork();
    if(fork_pid == -1){
        fprintf(stderr, "Fork failed\n");
        return 1;
    }
    if(fork_pid == 0){
        //kiddo
        if((new = fopen("liczby9-99.txt", "w")) == NULL){
            fprintf(stderr, "Blad przy tworzeniu pliku\n");
            return 1;
        }
        for(int i = 9; i <= 99; i++){
            if(i%3 == 0){
                fprintf(new, "%d\n", i);
                continue;
            }
            i++;
        }
        fclose(new);
        exit(0);
    }
    if(fork_pid > 0){
        int status;
        wait(&status);
        if(WIFEXITED(status)){
            printf("Program dziecka zakonczyl sie ze statusem: %d \n", WEXITSTATUS(status));
        }
        printf("Done\n");
        return 0;
    }
}
