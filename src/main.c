#include <stdlib.h>
#include <stdio.h>


int main(int argc, char **argv){

    if(argc > 1){
        printf(">1 arguments\n");
        //printf("arg:%s",argv[1]);
    }else{
        printf("no args \n");
    }

    printf("Hello from C!\n");

    return EXIT_SUCCESS;
}
