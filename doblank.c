#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
    if(argc != 2) {
        return 1;
    }
    int exitcode = atoi(argv[1]);
    return exitcode;
}