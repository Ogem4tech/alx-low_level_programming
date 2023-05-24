
You just released the advanced tasks of this project. Have fun!
0x0F. C - Function pointers
C
 By: Alexandre Gautier
  Weight: 1
   Project will start May 24, 2023 6:00 AM, must end by May 25, 2023 6:00 AM
    Checker was released at May 24, 2023 12:00 PM
     An auto review will be launched at the deadline
     Resources
     Read or watch:

     Function Pointer in C
     Pointers to functions
     Function Pointers in C / C++
     why pointers to functions?
     Everything you need to know about pointers in C
     Learning Objectives
     At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

     General
     What are function pointers and how to use them
     What does a function pointer exactly hold
     Where does a function pointer point to in the virtual memory
     Copyright - Plagiarism
     You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.
     You will not be able to meet the objectives of this or any following project by copying and pasting someone else’s work.
     You are not allowed to publish any content of this project.
     Any form of plagiarism is strictly forbidden and will result in removal from the program.
     Requirements
     General
     Allowed editors: vi, vim, emacs
     All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
     All your files should end with a new line
     A README.md file, at the root of the folder of the project is mandatory
     Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
     You are not allowed to use global variables
     No more than 5 functions per file
     The only C standard library functions allowed are malloc, free and exit. Any use of functions like printf, puts, calloc, realloc etc… is forbidden
     You are allowed to use _putchar
     You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
     In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
     The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called function_pointers.h
     Don’t forget to push your header file
     All your header files should be include guarded
     Quiz questions
     Great! You've completed the quiz successfully! Keep going! (Show quiz)
     Tasks
     0. What's my name
     mandatory
     Write a function that prints a name.

     Prototype: void print_name(char *name, void (*f)(char *));
     julien@ubuntu:~/0x0e. Function pointers$ cat 0-main.c
#include <stdio.h>
#include "function_pointers.h"

     /**
        * print_name_as_is - prints a name as is
	 * @name: name of the person
	  *
	   * Return: Nothing.
	    */
     void print_name_as_is(char *name)
{
	    printf("Hello, my name is %s\n", name);
}

/**
   * print_name_uppercase - print a name in uppercase
    * @name: name of the person
     *
      * Return: Nothing.
       */
void print_name_uppercase(char *name)
{
	    unsigned int i;

	        printf("Hello, my uppercase name is ");
		    i = 0;
		        while (name[i])
				    {
					            if (name[i] >= 'a' && name[i] <= 'z')
							            {
									                putchar(name[i] + 'A' - 'a');
											        }
						            else
								            {
										                putchar(name[i]);
												        }
							            i++;
								        }
}

/**
   * main - check the code
    *
     * Return: Always 0.
      */
int main(void)
{
	    print_name("Bob", print_name_as_is);
	        print_name("Bob Dylan", print_name_uppercase);
		    printf("\n");
		        return (0);
}
