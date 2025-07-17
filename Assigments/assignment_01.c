#include <stdio.h>
#include <unistd.h>

int main() {
    int pid = fork();  

    if (pid > 0) {  
        printf("Parent here.\n");
        printf("Who is here.\n");
    } else if (pid == 0) {  
        printf("Child here.\n");
        printf("Who is here.\n");
    } else {
        printf("Fork failed!\n");  
    }

    return 0;
}


