# executable-source-code

This respository contains some source files that are executable, in languages that would normally require compilation as a prior step.

## How to use?

E.g. To run the C source file, you can type the following commands into Mac/Linux terminal.
```
$ chmod +x executable.c
$ ./executable.c hello
```

## Why do I need this?

 * You can write simple single source-file command-line tools in C/C++/Java etc. and deploy them as-is. You favorite language suddenly becomes a scripting language as well.
 * Or think of other innovative use of this.

## How does it work?

The first few lines of the source files are comments in the target language, but they are at the same time bash commands.

## How make create my own executable files?

To make your own executable source files, open the file in the language of choice and copy the first few lines of code to your own source file.
