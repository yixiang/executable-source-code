//usr/bin/env xcrun swift "$0" $*;exit

let args = Process.arguments
if args.count == 1 {
  print("missing arguments")
} else {
  for i in 1..<args.count {
    print("arguments:");
    print(args[i])
  }
}
