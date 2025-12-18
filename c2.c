#include <stdlib.h>
#include <stdio.h>


void isWindows() {
    printf("Machine: windows\n");
}



void isLinux() {
    printf("Machine: linux\n");
    
    int checkServer = system("ping -c 1 127.0.0.1 > /dev/null 2>&1");

    if (checkServer == 0) {
        printf("Program is starting..\n");
        
        int returnCode = system("wget -q http://127.0.0.1:4242/a.txt -O a.txt");

        if (returnCode == 0) {
            printf("File obtained successfully..\n");
        } else {
            printf("Command execution failed.. aborting\n");
        }
    } 
    else {
        printf("Server unreachable.\n");
    }

}

int main() {
    #ifdef _WIN32
        printf("Running in windows..");
        isWindows();
    #elif __linux__
        printf("Running on linux..");
        isLinux();
    #endif
    return 0;
}