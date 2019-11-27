# Notes

- `make` is a build utility.

- It helps to look for the first line of error message — sometimes error messages cascade down to produce multiple error messages, even though the first error being resolved would resolve all other errors.

- Diagnosing a non-error bug via `printf` can be very helpful.

- Thinking about code in 3 ways:

  1. Correctness — does it do what it's supposed to do?
  2. Design — how well-written is the code?
  3. Style — does the code indentation, blocks, visual signals, etc. look good?

- RAM vs. SSD vs. CPU

  - RAM: very fast, small memory — programs and files get transferrred to RAM from SSD ephemerally, when it's opened, only works when electricity is supplied

    - A chip are thought of as a grid of bytes
    - Variables (e.g. char, int, arr, etc.) take up bytes — depending on how many bytes the variable takes up, how many squares it takes on the grid
    - A continuous array of these squares, are called, array.
    - Say, for a string — the RAM marks the beginning of the continuous array with 's', and appends a null (8 zeros, taking up 1 byte, alternatively written as `\0`) at the end of the string to signify its end

  - SSD: bigger spaces, where files and memories are stored permanently (until user decides to remove it), stored files are there regardless of whether electricity is supplied
  - CPU: fastest, billions of things per second

-
