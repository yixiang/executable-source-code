#!/usr/bin/env swift

let args = Process.arguments
if args.count <= 1 {
    print("missing args")
} else {
    print("hello \(args[1])")
}
