# Notes

### Knowledge

- Types of knowledge:

  - Declarative knowledge: Statements of facts
    - Example statement:
      `Square root of a number x is y, such that y * y = x.`
  - Imperative knowledge: Knowledge exercised to perform tasks
    e.g. recipes, how-to, step-by-step, computation
    - Example statement:
    ```Recipe for deducing square root of number x:
        1. Start with a guess, g.
        2. If g * g is close enough to x, stop and say that g is the answer.
        3. Otherwise make a new guess by averaging g and x/g.
        4. Using the new guess, repeat process until close enough.
    ```
    - This is also an example of an algorithm, or a recipe. These two algorithm can be used interchangeably. Even within Step 1, without including another recipe to tell the computer to pick a starting number, the computer cannot generate one on its own. Step 1 has a recipe to its own.

- An algorithm is:

  - a sequence of simple steps
  - a flow of control that specifies when each step is executed, when to go to the next step, when to jump to other steps, etc.
  - a means to determine when to stop

- An algorithm is a conceptual idea, whereas a program is a concrete instantiation of an algorithm.

- A computational mode of thinking means that everything can be viewed as a math problem involving numbers and formulas.

- The two things every computer can do are to perform calculations, and to remember the results.

### Machines

- Inside a computer, there are generally these things that perform operations:

  1. Memory: data, program (recipe)
  2. ALU (arithmetic logic unit): takes memory info, does a primitive operation, stores results in memory
  3. Control Unit: keeps track of operations to be performed in ALU.
     - The control unit has a program counter that looks at the recipe's first instruction and instructs ALU to perform an operation. Then, it advances down the recipe until it hits a test to see if something is true (conclusion reached) or false (go back to recipe and start running through again). Once it stops, it returns an output.
     - The program counter basically points the computer to the next instruction to execute in the program.

- There are generally two types of machines that can perform operations for us:

  1. Fixed program computer, which only does one thing only (e.g. only square roots, only multiplications, etc.). An example of this computer is Alan Turing's Bombe.
  2. Stored program computer, which is a machine that stores and executes instructions. The sequence of instructions were built from a pre-defined set of primitive instructions (which the Arithmetic Logic Unit is able to perform).

  - These sequence of instructions may be composed of arithmetic and logic, simple tests, as well as moving data.
  - Afterwards, an interpreter will execute each instruction in order. Tests may be used to change the flow of control through sequence, and stop when it's done. The computer executes the instructions mostly in a linear sequence, except sometimes it jumps to a different place in the sequence.

- Turing showed that we can compute anything using 6 primitives (left, right, scan, print, erase, do nothing). Modern programming has more convenient set of primitives, and we can even abstract these methods to create new primitives. Abstraction lets us execute a recipe as if the recipe is part of the fixed program, primitive function that came with the computer. As a result, anything computable in one language is computable in any other programming language. Reference: [Turing Complete](https://medium.com/@evinsellin/what-exactly-is-turing-completeness-a08cc36b26e2)
-
