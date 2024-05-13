# Learn-C-Projects
My projects from codecademy's Learn C SkillPath Course

## ___THE START OF MY C JOURNEY!!!___

I want to learn C to make me a better programmer! Despite it's age, C remains to be one of the worlds most popular programming languages, thanks to it being used everywhere in a multitude of different environments.

### __BASICS:__

What's happening in this Hello World program?

```c
#include <stdio.h>

int main() {
  // output a line
  printf("Hello World!\n");
}
```

* `#include <stdio.h>`: This line is needed to run the line of code that starts with `printf`.
* `int main(){ }`: This is the starting point of the code. All the code inside the curly braces `{}` runs first.
* `//` output a line: This is a comment. It is not a line of code but a message we can add to code to tell ourselves or others what the code does. When the code is run this line will be ignored.
* `printf("Hello World!");`: This line of code prints, or outputs, the text “Hello World!” to the console. Printing text to the console is one way for a program to communicate with the user.

Reading this error:
```
script.c: In function ‘main’:
script.c:6:1: error: expected ‘;’ before ‘}’ token
 }
 ^
```

The text above gives the following information:

* The component location, `In function ‘main’`
* The line and column number, `6:1`
* A description, expected `‘;’` before `‘}’`

As we can see the message does its best to help us solve the errors in our code.
<br>

----

### __ERRORS IN C:__

Errors are simply unavoidable when you develop a program, let’s learn more about them!

Learning to code can be a frustrating endeavor because you are destined to encounter many red errors along the way. What makes a programmer successful isn’t avoiding errors — no programmer can avoid them. Great programmers understand that errors are part of the process, and they know how to find the solution to each while learning something new from them. In this article, we’ll teach you how to think about errors in your code a little differently.

There are many ways of classifying errors. For example:

* Compile-time errors: Errors found by the compiler. We can further classify compile-time errors based on which language rules they violate, for example:
  * Syntax errors
  * emantic errors
* Link-time errors: Errors found by the linker when it is trying to combine object files into an executable program.
* Run-time errors: Errors found by checks in a running program.
* Logic errors: Errors found by the programmer looking for the causes of erroneous results.

As you recall, the programming process looks like:

![The Process](https://static-assets.codecademy.com/Courses/learn-c/loops-and-errors/Error-process.svg)

The errors above are described as follows:

### Compile-time errors

When you are writing C programs, your compiler is your first line of defense against errors. Here are the two types of compile-time errors:

#### Syntax errors

These errors occur when an invalid statement is written.
```c
int x = 6    // Error: missing a terminating semicolon
Int x = 6;   // Error: Int is not a type
printf(“Error”;   // Error: missing closing parenthesis
```
#### Semantic errors

These statements are syntactically valid but don’t do what the programmer intends.
```c
a + b = c;   // Error: value required as left operand of assignment

int i;
i = i + 2;   // Error: use of a un-initialized variable
```

### Link-time errors (or Linker errors)

If your program has no compile-time errors, these link-time errors will occur when an attempt is made to actually compile. These appear when a program is missing proper prototypes, has incorrect header files, or accidentally uses __Main()__ instead of __main()__.

### Run-time errors

If your program has no compile-time errors and no link-time errors, it’ll run. Run-time errors appear during this time and can manifest in a handful of unique ways, one most common way being a Division error when dividing by zero. These types of errors can be difficult to find due to them being syntactically right and missed by the compiler.

### Logic errors

Once we have removed the initial compile-time errors, link-time errors, and run-time errors, the program finally runs without hiccups. However, sometimes no output is produced or the output the program produces is just wrong. This can occur for a number of reasons. Maybe your understanding of the underlying program is flawed; maybe you didn’t write what you thought you wrote or certain lines executed in unexpected ways. These are logic errors, aptly named after errors that could arise in a coder’s logic inside the program.

<br>

That’s all of them!

Avoiding errors may sometimes feel impossible, but learning from them and understanding the different types can all be as part of the coding process as the coding itself. So remember what errors mean, how they appear, how to solve them, and keep programming!

---

### __MEMORY MANAGEMENT__

Learn how the C language handles memory.

In this section, we will explore how the C programming language manages memory. This section is divided into the following sections:

* Introduction
* Memory maps
* Variables in memory
* Memory access
* Memory allocation
* Conclusion

###  Introduction

A key resource for the execution of a program is memory. When a program is running, memory is used to store relevant variables and other data. Memory in a computer is a finite and expensive resource. If a process occupies too much memory, it will lead to poor program performance; therefore it is important to be conservative with memory, and only use as little as possible.

Programs are created by writing code in programming languages. Each language has its own rules regarding how to work with memory. The C language, being a low-level language one step above assembly, offers a programmer access to memory with very little restrictions; other languages such as Java and Python do not allow the programmer to directly interact with memory. This has its advantages and disadvantages as we will see in the remainder of this article.

### Memory Maps

In a computer, the physical memory is a piece of hardware with complex electrical circuits on it that are used to implement the function of “remembering something.” This is known as RAM (Random Access Memory) or ROM (Read-only Memory). If you’ve ever taken apart (or put together) a computer, you have likely seen these pieces of hardware. They are the memory stick for RAM and your hard disk for ROM. The programmer, not being a computer engineer, is not concerned with how these pieces of hardware work, as long as they do! To the programmer, the memory is represented as a memory map like so:

![Memory map](https://static-assets.codecademy.com/Courses/learn-c/pointers-and-memory/Memory-map-II-updated.svg)

RAM is represented in this way. It is very likely that you know how much RAM your computer (or phone, or tablet) has. This number is usually quoted as some amount of gigabytes (GB). The fundamental unit of memory is a byte. Each byte of memory has its own address that is used to store data. This address is usually enumerated using the [hexadecimal number system](https://en.wikipedia.org/wiki/Hexadecimal). The addresses can be seen in the middle column of the table (it is in decimal because it is intuitive for beginners). C allows direct access to these addresses.

### Variables in Memory

When writing code, programmers frequently work with variables to store and manipulate data. A variable occupies a contiguous block of bytes in memory with the size of the block depending on the data type of the variable. An int variable (on a personal computer) typically occupies four bytes of memory. A floating-point variable occupies eight bytes of memory which is why it is known as a double. A character (char) occupies one byte of memory. The amount of memory occupied by a variable can be found by using the sizeof() function in C. The address of the variable in memory is the address of the first byte occupied.

### Memory Access

A running program is allocated a section of physical memory by the underlying operating system (if there is one) to store relevant data. Because it is considered a “low-level” language, C allows you to directly interact with this memory through the use of what is called a pointer. A pointer is a special type of integer variable that stores the memory address of a variable that the pointer is “pointing” to. To obtain the address of a variable, C provides a special operator called the reference operator. To read or write data to an address stored in a pointer, C provides an operator called the dereference operator.

Allowing such unrestricted access requires great care. Errors involving memory access with pointers are sometimes silent as they don’t cause compile-time or run-time errors. Erroneous memory access (for example, you accessed and changed data at the wrong address) causes the program to produce incorrect results and maybe even behave unpredictably. These types of errors are incredibly difficult to find and correct!
Memory Allocation

Program memory is organized into two main categories: the stack and the heap. A stack is a section of memory that is highly ordered and data stored on the stack are only available within a certain scope. In contrast, the heap is not as ordered as a stack. When you create a variable in the usual way, you are statically allocating memory and it is stored on the stack. That memory will be released by the program when the variable is no longer needed.

The heap allows you to reserve as much available memory as you want and that memory will remain available until you explicitly release it. This is known as dynamically allocating memory. Forgetting to release dynamically allocated memory will cause a memory-leak leading to poor program performance.

C provides four special functions for you to dynamically allocate (and release) memory, provided it is available. They are:

* ```malloc()```
* ```calloc()```
* ```realloc()```
* ```free()```

These functions are stored in the ```stdlib``` library. To use them, you must import this library.

You will need a pointer to work with the memory provided by any of these functions.
Function 	Use Case
malloc() 	Use this function to reserve as many bytes as you want on the heap
calloc() 	Use this function to reserve memory for some number of ints, doubles, or any other data type.
realloc() 	Use this function to expand or contract a block of reserved memory (reserved by either malloc() or calloc()).
free() 	Use this function to release previously allocated memory.

|Function|Use Case|
|---|---|
|```malloc()```|Use this function to reserve as many bytes as you want on the heap|
|```calloc()```|Use this function to reserve memory for some number of ```ints```, ```doubles```, or any other data type.|
|```realloc()```|Use this function to expand or contract a block of reserved memory (reserved by either ```malloc()``` or ```calloc()```).|
|```free()```|Use this function to release previously allocated memory.|

The most important of these functions is free(). It is necessary to release memory that is no longer needed to maintain efficient program performance.

### Conclusion

C is one of the most powerful and versatile languages available. Because of its memory management style, it is used to create programs for many industries. However, when working with memory in C, it is imperative to be very careful. Memory is one of the most precious resources a program needs; therefore it should be used conservatively. Errors resulting from incorrect memory access or leaks are detrimental to the operation of a program and are difficult to find and correct. As the age-old saying goes: “with great power, comes great responsibility.” Be careful when directly working with memory in C!

---

