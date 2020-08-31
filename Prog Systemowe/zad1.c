#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    char file_name[255] = "";
    int fd_input, fd_output;
    char ch[1];
    int i = 0;
    if(argc !=2)
    {
        fprintf(stderr, "Error - wrong no of args\n");
        return 1;

    }
    fd_input = open(argv[1], O_RDONLY);
    if(fd_input == -1)
    {
        perror("input");
        return 1;
    }
    strcpy(file_name, argv[1]);
    strcat(file_name, ".red");

    fd_output = open(file_name, O_CREAT | O_TRUNC | O_WRONLY, 0644);
    if(fd_output == -1)
    {
        perror("output");
        return 2;
    }

    while(read(fd_input, &ch, 1) == 1)
    {
        if ((i % 3) == 0)
        {
            if(write(fd_output, &ch, 1) == -1)
            {
                fprintf(stderr, "Error while writing");
                continue;
            }
        }
        i++

    }
    close(fd_input);
    close(fd_output);
    return 0;
}
