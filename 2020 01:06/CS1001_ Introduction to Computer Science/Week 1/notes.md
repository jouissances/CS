# Notes

- Look into Makefile (suspected block here as other compile commands not using `make` work fine). Error message:
  ````Undefined symbols for architecture x86_64:
  "_get_string", referenced from:
      _main in test-d461a7.o
  ld: symbol(s) not found for architecture x86_64
  clang: error: linker command failed with exit code 1 (use -v to see invocation)
  make: *** [test] Error 1```
  ````
- Tried with `make test -lcs50`
- Tried with `make test -lcs50-9.0.1`

<!--
- command to compile: gcc -lcs50-9.0.1 <filename with extension>
- command to compile: clang -o <output filename> <filename with extension> -lcs50.9.0.1
- command to compile: make <filename without extension>
-->

- Being of a finite physical size, the RAM gets imprecise after printing an infinite (or close to) a large float as the data stored becomes bigger and space available gets smaller. Floating should never be used in an equality operator (perhaps, at best, rounded off to a couple of decimal places). Especially not in stock exchange / military operations / rocket calculations / etc.
- Look into `get_double` or `double`, and the side-effects (less space available for other things, performance speed, etc.)

- A prototype can be used to declare a function before it is being defined (look at `loop.c`).

### Command Line

- In `rm -rf`, `rm` is the command for remove, and `-r` is the command to recursively delete all files within the directory. `-f` stands for `force`, and tells the computer to not ask us for confirmation to delete. This process is irreversible.

### Conditional Statements

- C can also use ternary operators:

```int x;
if (expr) {
  x = 5
} else {
  x = 6
}
```

- This can also be written as:
  `int x ? (expr) 5 : 6;`

### Data Types

- In C, every non-zero value is equivalent to `true`, and zero is `false`.

- 1 byte is 8 bits (binary digits). Each integer (`int`) always take up 4 bytes of memory (32 bits). The range of value they can store is necessary limited to 32 bits worth of integer. Being in binary, this means that the smallest number possible is 2^(-31), and the largest number possible is (2^31)-1, with 31 being the maximum power (and -31 being the minimum) as 2^0 has been taken.

- An `unsigned int` is a qualifier that can be applied to certain data types (including `int`). It can double the _positive_ range of variables of the type, at the cost of disallowing any negative values.

- `char` is used for variables that will store single characters. It always take up 1 byte (8 bits) of memory. The range of value that can be stored is 8 bits worth of information. Using ASCII, we can map any characters (even emojis) to positive numeric values (maximum number is 127, and minimum number is -127).

- `float` types also take up 4 bytes (32 bits) of memory. Floats are known to have precision problems — if the integer part gets larger, the decimal part will become less precise.

- `double` is also used to store floating point values, except that `double` has double precision — it always take up 8 bytes (64 bits) of memory. Having an additional 32 bits of memory, it allows for more precision than `float`.

- `void` is a type, but not a data type like the others. Functions can have a `void` return type (the first `void`), which means that they will not return any value (e.g. `printf()`). The parameter list of a function can also be `void` (the second `void`), which means that the function takes no parameters. What does `void` stand for?

- To declare the type of multiple variables, we can just do this:
  `float x, y, z;` or `int height, width;`

- After a variable has been declared, it's no longer necessary to specify the variable's type during assignment. During initialization (simultaneous declaration and assignment), only one step is necessary.

### Loops

- `while` loop is used when the loop is to be repeated for an unknown number of times, and possibly not at all.
  Example: In a game, we don't know how long the user would be playing the game for, and there is the possibility that the user will not start playing.

- `do-while` loop is used when the loop is to be repeated for an unknown number of times, but at least once.
  Example: When asking a user for a specific input, we would keep asking for the user's input until the input matches our criteria. When the input matches, we then break out of the loop.

- `for` loop is used when the loop is to be repeated for a known discrete number of times, even though we may not know the number when our loop program is compiled.
  Example: We can put in an argument `x` to the function that triggers the loop an `x` amount of times. When we write the for loop, we do not know the exact value of `x`, until the argument is specified.

- In any situation, we should be able to use either of these loops interchangeably, although some situations might be trickier than others.

### Operators

- Arithmetic operators include add `+`, subtract `-`, multiply `*`, and divide `/`.
  ```int x = y + 1
  x = x * 5 // This line can also be written as x *= 5
  // When y is 10, x will return 55
  ```
- In C, we can also use a shorthand for incrementing or decrementing a variable by 1: `x++` or `x--` respectively.

- Logical AND `&&` is `true` only when _both_ operands are true, otherwise `false`. Logical OR `||` is `true` when _at least one_ operand is true, otherwise `false`. Logical NOT `!` inverts the value of its operand.

- Relational operators:
  - `<`: lesser than
  - `>`: greater than
  - `<=`: lesser than or equal to
  - `>=`: greater than or equal to
  - `==`: equality
  - `!=`: inequality
