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