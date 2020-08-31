#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<fcntl.h>
#include<sys/types.h>
#include<unistd.h>
#include<string.h>


int randoRange(int lower, int upper)
{

	int num;
	num = (rand() % (upper - lower +1) + lower);
	return num;

}

int main(int argc, char *argv[])
{
    const int lower = 10, upper = 99;
    int fd, repeats = 0, num[10];
    char buf[40];
    if(argc != 2){
        char filename[20];
        fprintf(stdout,"Wpisz nazwe pliku do stworzenia: ");
        fscanf(stdin, "%s", filename);
        printf("Nazwa pliku to: %s\n", filename);
        if((fd = open(filename, O_CREAT | O_RDWR, 0644)) == -1){
            fprintf(stderr, "Blad przy tworzeniu pliku\n");
            return 1;
        }
        for(;repeats < 10; repeats++){
            num[repeats] = randoRange(lower, upper);
            snprintf(buf, 4, "%d", num[repeats]);
            write(fd,buf,2);
            write(fd, "\n", 2);
        }
        
        if((close(fd)) == -1){
            fprintf(stderr, "Blad przy zamykaniu pliku\n");
            return 3;
        }
    }
    if(argc == 2){
        if((fd = open(argv[1], O_CREAT | O_RDWR, 0644)) == -1){
            fprintf(stderr, "Blad przy tworzeniu pliku\n");
            return 2;
        }
        for(;repeats < 10; repeats++){
            num[repeats] = randoRange(lower, upper);
            snprintf(buf, 4, "%d", num[repeats]);
            write(fd,buf,2);
            write(fd, "\n", 2);
        }
    if((close(fd)) == -1){
            fprintf(stderr, "Blad przy zamykaniu pliku\n");
            return 3;
        }
    }
}
