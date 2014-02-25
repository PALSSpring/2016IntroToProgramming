Compiling Hello World
====
```
gcc hello-c-world.c -o hello-c-world.out
```

What's going on?

The c compiler we're using is the GNU C Compiler, (gcc). So the compile command is 'gcc'

The next argument for the command is the file we're going to compile.
hello-c-world.c

With the '-o' flag we tell the compile to output the executable to a file named "hello-c-world"

Running Hello World
====
```
./hello-c-world.out
```

What is a make file?

A tool for building your program, and cleaning up the extra files.
```
make
```

```
make clean
```