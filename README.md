<html>
<body>
<h1>¡PRINTF PROJECT!</h1>
<hr>
<h2>REQUIREMENTS</h2>
<p>-Allowed editors: vi, vim, emacs</p>
<p>-All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra     pedantic -std=gnu89</p>
<p>-All your files should end with a new line</p>
<p>-A README.md file, at the root of the folder of the project is mandatory</p>
<P>-Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl</p>
<p>-You are not allowed to use global variables</p>
<p>-No more than 5 functions per file</p>
<p>-In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
The prototypes of all your functions should be included in your header file called main.h
Don’t forget to push your header file
All your header files should be include guarded
Note that we will not provide the _putchar function for this project</p>
<h2>MORE INFO</h2>
<h5>-Authorized functions and macros</h5>
<p>-write (man 2 write)</p>
<p>-malloc (man 3 malloc)</p>
<p>-free (man 3 free)</p>
<p>-va_start (man 3 va_start)</p>
<p>-va_end (man 3 va_end)</p>
<p>-va_copy (man 3 va_copy)</p>
<p>-va_arg (man 3 va_arg) </p>
<hr>
<h2>Description</h2>
<p>This project is a simulation of the PrintF function in C programming language.</p>
<h1>MAN PAGES </h1>
<img src= "https://media.geeksforgeeks.org/wp-content/uploads/Screenshot-from-2018-12-11-20-58-48.png" width="300" height="auto"/>
<p>Here we have the respective manual of our PrintF function, which contains some help when using Printf in our shell's</p>
<p> In this manual you will find the different format specifiers that can be used with this function.</p>
<h4>To enter the manual of this function, you must enter the man command and then the file name</h4> 
<h1>Flowchart</h1>

</body>
</html>



Tasks

0. Write a function that produces output according to a format.
Prototype:  int _printf(const char *format, ...);
Returns: the number of characters printed (excluding the null byte used to end output to strings)
write output to stdout, the standard output stream
format  is a character string. The format string is composed of zero or more directives. See  man 3
printf  for more detail. You need to handle the following conversion specifiers:
c
s
%
You don’t have to reproduce the buffer handling of the C library  printf  function
You don’t have to handle the flag characters
You don’t have to handle field width
You don’t have to handle precision
You don’t have to handle the length modifiers 

1. Handle the following conversion specifiers:
d
i
You don’t have to handle the flag characters
You don’t have to handle field width
You don’t have to handle precision
You don’t have to handle the length modifiers

2. Create a man page for your function.

3. Handle the following custom conversion specifiers:
b : the unsigned int argument is converted to binary

4. Handle the following conversion specifiers:
u
o
x
X
You don’t have to handle the flag characters
You don’t have to handle field width
You don’t have to handle precision
You don’t have to handle the length modifiers.

5. Use a local buffer of 1024 chars in order to call  write  as little as possible.

6. Handle the following conversion specifier:  p .
You don’t have to handle the flag characters
You don’t have to handle field width
You don’t have to handle precision
You don’t have to handle the length modifiers.

7. Handle the following custom conversion specifier:
S  : prints the string.
Non printable characters (0 < ASCII value < 32 or >= 127) are printed this way:  \x , followed by the
ASCII code value in hexadecimal (upper case - always 2 characters).

8. Handle the following flag characters for non-custom conversion specifiers:
+
space
#

9. Sarcasm is lost in print Level: 1 Auto review
Handle the following length modifiers for non-custom conversion specifiers:
l
h
Conversion specifiers to handle:  d ,  i ,  u ,  o ,  x ,  X

10. Handle the field width for non-custom conversion specifiers.

11. Handle the precision for non-custom conversion specifiers.

12. Handle the  0  flag character for non-custom conversion specifiers.

13. Handle the  -  flag character for non-custom conversion specifiers.

14. Handle the following custom conversion specifier:
r  : prints the reversed string.

15. Handle the following custom conversion specifier:
R : prints the rot13'ed string

16. All the above options work well together.
