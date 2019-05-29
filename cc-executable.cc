//usr/bin/env c++ -std=c++11 -o/tmp/`basename "$0"` $0 && /tmp/`basename "$0"` $*;exit
// To run this self compiling file, type the following command in terminal.
// $ chmod +x <name_of_this_file>.cc && ./<name_of_this_file>.cc

#include <iostream>

int main(int argc, char** argv) {
    if(argc > 1) {
        std::cout << "arguments:\n";
        for(int i = 1; i < argc; ++i) {
            std::cout << "    %s\n" << argv[i] << std::endl;
        }
        return 0;
    } else {
        std::cout << "missing arguments\n";
        return 1;
    }
}
