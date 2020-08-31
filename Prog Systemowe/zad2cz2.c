#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<sys/types.h>
#include<unistd.h>
#include<string.h>

int main(int argc, char *argv[]){

    int fd_in, num, repeats = 0;
    char buf[60];


    if(argc != 2){
        fprintf(stderr, "Przy wywoalniu wpisz nazwe pliku do otworzenia\n");
        return 1;

    }
    if((fd_in = open(argv[1], O_RDONLY)) == -1){
        fprintf(stderr, "Blad przy otwieraniu pliku\n");
    }
    for(; repeats < 10; repeats++){
        read(fd_in, &buf, 4);
        num = atoi(buf) * 3;
        printf("%d\n", num);
    }
    return 0;
    close(fd_in);

}
