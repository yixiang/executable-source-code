//usr/bin/env xcrun swift "$0" $*;exit

if C_ARGC == 1 {
    println("missing arguments")
} else {
    println("arguments:")
    for i in 1..<C_ARGC {
        println("    \(C_ARGV[Int(i)])")
    }
}
