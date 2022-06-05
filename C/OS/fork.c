#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main (){
    // make two process which run same program after this instruction   
    fork(); // fork() return 0 to parent process and pid of child process to child process
    fork(); // fork() return 0 to parent process and 1 to child process
    printf ("Hello World\n");
    return 0;
}