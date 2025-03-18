#include <stdlib.h>
#include <stdio.h>

//First I need is to read a file, to parse something duh!
//https://courses.cs.washington.edu/courses/cse303/09au/cfileio.pdf
int readFile(const char* path){

    FILE *fp = fopen(path,"r");
    if(fp == NULL){
        printf("reading %s fail",path);
    }

    char c;

    while((c=fgetc(fp))!=EOF){
        printf("%c",c);
    }

    fclose(fp);

}

int main(int argc, char **argv){

    if(argc > 1){
        printf("> 1 arguments\n");
        //printf("arg:%s",argv[1]);
        readFile(argv[1]);
    }else{
        printf("no args \n");
    }


    printf("Hello from C!\n");

    return EXIT_SUCCESS;
}
