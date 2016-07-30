//usr/bin/env mcs -out:/tmp/`basename "$0"` $0 && mono /tmp/`basename "$0"` $*;exit
// To run this self compiling file, type the following command in terminal.
// $ chmod +x <name_of_this_file>.c && ./<name_of_this_file>.c

class Program {
    public static void Main(string[] args) {
        System.Console.WriteLine("hello world!");
    }
}
