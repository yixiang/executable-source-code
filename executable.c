//usr/bin/env cc -std=c99 -o/tmp/`basename "$0"` $0 && /tmp/`basename "$0"` $*;exit
// To run this self compiling file, type the following command in terminal.
// $ chmod +x <name_of_this_file>.c && ./<name_of_this_file>.c

#include <stdio.h>

int main(int argc, char** argv) {
    if(argc > 1) {
        printf("arguments:\n");
        for(int i = 1; i < argc; ++i) {
            printf("    %s\n", argv[i]);
        }
        return 0;
    } else {
        printf("missing arguments\n");
        return 1;
    }
}
