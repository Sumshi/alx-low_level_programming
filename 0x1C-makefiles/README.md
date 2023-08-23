			0x1C-makefiles

    
    Make is a build automation tool that is commonly used in software development to manage and automate the process of compiling and linking source code files into executable programs or libraries. Makefiles are text files that contain a set of rules for building and managing these dependencies. Makefiles are written in a specific syntax and are used to describe how different source code files are transformed into final executable files.

    Rules in Makefiles:
A rule in a Makefile defines how to transform one or more source files (called prerequisites) into a target file. The syntax of a basic rule is as follows:

		target: prerequisites
   			 recipe

    Target: The file that is being built.
Prerequisites: The files that the target depends on. If any of these files have changed since the last build, the target needs to be rebuilt.
Recipe: The set of commands that are executed to build the target from the prerequisites.

    Explicit Rules: These are rules that explicitly define how to build a specific target from its prerequisites.
Implicit Rules: These are predefined rules in Makefiles that specify how to build certain types of targets based on their file extensions. For example, Make might have built-in implicit rules for compiling C source files into object files.

Common/Useful Rules:

all: Builds all specified targets.
clean: Removes generated files to clean up the build directory.
install: Installs the built software on the system.
test: Executes tests on the built software.

