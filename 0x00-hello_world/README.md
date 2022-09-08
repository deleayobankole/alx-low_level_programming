The codes and steps would be documented on this file.

# 0. Preprocessor
#Cloned the betty repo, and moved the betty file to the /bin/ path
#created a file main.c and exported to file 0-preprocessor
export CFILE=main.c

#To execute the file:
gcc $CFILE

# 1. Write a script that compiles a C file but does not link.
gcc -c $CFILE

# 2. Write a script that generates the assembly code of a C code and save it in an output file.
gcc -S $CFILE

# 3. Write a script that compiles a C file and creates an executable named cisfun.
gcc $CFILE -o cisfun

# 4. 
