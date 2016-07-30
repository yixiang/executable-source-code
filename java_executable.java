//usr/bin/env javac -d /tmp $0 && java -cp /tmp `basename "$0" .java` $*;exit
// To run this self compiling file, type the following command in terminal.
// $ chmod +x <name_of_this_file>.java && ./<name_of_this_file>.java

import static java.lang.System.out;

public class java_executable {
    public static void main(String[] args) {
        if(args.length > 0) {
            out.println("arguments:");
            for(String arg : args) {
                out.println("    " + arg);
            }
        } else {
            out.println("missing arguments");
        }
    }
}
