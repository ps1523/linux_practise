/*
*  Describes what happens when fork() is called multiple times
*/

#include <stdio.h>
#include <unistd.h>

int main()
{   
    fork();
    fork();
    fork();
    fork();
    printf("Hello fork...\n");
    return 0;
}


