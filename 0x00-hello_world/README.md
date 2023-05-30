						  c compilation process
 		HELLO WORLD PROJECT
	TASK O:File: 0-preprocessor
Write a script that runs a C file through the preprocessor and save the result into another file.The C file name will be saved in the variable $CFILE. The output should be saved in the file c.


  	TASK 1: File: 1-compiler
Write a script that compiles a C file but does not link. The C file name will be saved in the variable $CFILE , the output file should be named the same as the C file, but with the extension .o instead of .c. Example: if the C file is main.c, the output file should be main
 
 
	TASK 2: File: 2-assembler
Write a script that generates the assembly code of a C code and save it in an output file. The C file name will be saved in the variable $CFILE. The output file should be named the same as the C file, but with the extension .s instead of .c. Example: if the C file is main.c, the output file should be main.s

	TASK 3: File: 3-name
Write a script that compiles a C file and creates an executable named cisfun. The C file name will be saved in the variable $CFILE

	TASK 4: File: 4-puts.c
Write a C program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line. Use the function puts , You are not allowed to use printf , Your program should end with the value 0

	TASK 5: File: 5-printf.c
Write a C program that prints exactly with proper grammar, but the outcome is a piece of art,, followed by a new line. Use the function printf, You are not allowed to use the function puts, Your program should return 0, Your program should compile without warning when using the -Wall gcc option

	TASK 6: File: 6-size.c
Write a C program that prints the size of various types on the computer it is compiled and run on, You should produce the exact same output as in the examplE,Warnings are allowed. Your program should return 0, You might have to install the package libc6-dev-i386 on your Linux to test the -m32 gcc option
		 
	TASK 7:  File: 100-intel
Write a script that generates the assembly code (Intel syntax) of a C code and save it in an output file. The C file name will be saved in the variable $CFILE.The output file should 
be named the same as the C file, but with the extension .s instead of .c. Example: if the C file is main.c, the output file should be main.s

	TASK 8: File: 101-quote.c
Write a C program that prints exactly and that piece of art is useful" - Dora Korpar, 2015-10-19, followed by a new line, to the standard error.You are not allowed to use any functions listed in the NAME section of the man (3) printf or man (3) puts , Your program should return 1. Your program should compile without any warnings when using the -Wall gcc option
				
				
				                :THIS WORK WAS DONE AS THE FIRST PROJECT OF INTRODUCTION TO C:
												IT WAS MAJORLY TO UNDERSTAND ABOUT THE PROCESS OF COMPILATION
											
The compilation process in C transforms a human-readable code into a machine-readable format. For C programming language, it happens before a program starts executing to check the syntax and semantics of the code. The compilation process in C involves four steps: pre-processing, compiling, assembling, and linking then, we run the obtained executable file to get an output on the screen.

         a) PRE PROCESSING  (gcc -E hello.c -o hello.e)
This is the first phase through which source code is passed. This phase include:  
Removal of Comments
Expansion of Macros
Expansion of the included files.
Conditional compilation

	b) COMPILLER (gcc -s  hello.c -o hello.s)
converts the source code from preprocessor to assembly code, files have .s extension.

	C) ASSEMBLER (gcc -c hello.c -o hello.o)
converts the assembly code to object code, the codes are in machine language which is in binary, they can not be head by humans. files have .o extensions.

	d) LINKER( files have .c extensions)
links object code with standard libraries and generates files which are in human readable formats.
