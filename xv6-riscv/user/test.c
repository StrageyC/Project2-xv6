#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"
#include "kernel/fs.h"
#include "kernel/fcntl.h"

void openFiles(int amount)
{
    int fd[amount];
    int i;
    for (i = 0; i < amount ; i++) {
        char c = (char)i;
        char *filename = "file" + c;
        fd[i] = open(filename, O_CREATE | O_RDWR);
        if (fd[i] < 0) {
            printf("Error");
            exit(1);
        }
    }
}


int
main(int argc, char **argv)
{
    
    int pid = getpid();
    printf("Initial number of files in process: %d\n ", getfilenum(pid));

    int x = 1;
    openFiles(x);
    printf("add one file: %d\n ", getfilenum(pid));
    

    x = 2;
    openFiles(x);
    printf("added two files: %d\n ", getfilenum(pid));

    x = 3;
    openFiles(x);
    printf("added three files: %d\n ", getfilenum(pid));


    exit(1);
}





