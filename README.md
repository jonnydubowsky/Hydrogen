Hydrogen-Virtual-Machine
========================

A basic process virtual machine



## What is Hydrogen?
A simple [register based](http://markfaction.wordpress.com/2012/07/15/stack-based-vs-register-based-virtual-machine-architecture-and-the-dalvik-vm/) [process virtual machine](http://stackoverflow.com/questions/22477128/difference-between-process-virtual-machine-with-system-virtual-machine) which is written in C/C++. It uses its own dialect of assembly and is designed to work on OSX x86_64 systems. It is intended to be used with the Giraffe Programming language but can be used with others.

## How do I compile Hydrogen?
To compile Hydrogen make sure you have gcc and simply type `make`. This will compile the files and add the `hydro` binary to your /usr/bin directory.
To test your freshly built version of Hydrogen, press type `make test` or `hydro -R test.txt`

## What is the instruction set?
Take a look at opcodes.txt

## Is it under a license?
Yup! Look at LICENSE

## Is it finished?
No Way! There's always more to do! Look at docs/TODO.txt