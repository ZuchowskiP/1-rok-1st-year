#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>


int main(int argc, char *argv[])
{
    FILE *fp_input, *fp_output;
    char file_name[255] = "";
    int c, i =0;

    if(argc !=2)
    {
        fprintf(stderr, "Program wymaga wpisania nazwy pliku do redukowania przy wywoalaniu.\n");
        return 1;
    }
    fp_input=fopen(argv[1], "r");
    if(fp_input == NULL)
    {
        perror("input");
        return 2;    
    }
    strcpy(file_name, argv[1]);
    strcat(file_name, ".red");
    fp_output = fopen(file_name, "w");
    if(fp_output == NULL)
    {
        perror("output");
        return 3;
    }
    while((c = fgetc(fp_input)) != EOF)
    {
        if((i % 3) == 0)
        {
            if(fputc(c, fp_output) == EOF)
            {
                fprintf(stderr, "Can't write to file");
                continue;

            }
        }
        i++;
    }
    fclose(fp_input);
    if(fclose(fp_output) == EOF){
        perror("fclose");
        return 5;
    }
    return 0;
}
