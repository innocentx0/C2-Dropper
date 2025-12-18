#include <stdlib.h>
#include <stdio.h>



int main(){
    printf("Progam is starting..");
    int returnCode = system("wget http://127.0.0.1:4242/a.txt -o a.txt");

    if (returnCode == 0){
        printf("File obtained successfully..");
    }else{
        printf("command execution failed.. aborting");
    }
    return 0;
}