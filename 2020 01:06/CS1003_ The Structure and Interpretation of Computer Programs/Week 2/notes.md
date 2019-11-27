# Notes

- Computer science is about the control of complexity.
- Functional programming
- Function can be defined as a relationship that has 0 or more inputs, and has 1 output. For the same input(s), we must get the same output.

  - _What about the case of a random output generator?_

- Why is functional programming important?

  - Functions are well-understood and it is relatively easy to do reasoning about computer software systems that is built functionally — we can build theorems based on functions.
  - Computers are doing more than one thing at a time (especially for modern multi-core processors). If the behavior of a piece of program depends on other pieces' program, there would be trouble. So — if the program is entirely made of functions, our functions wouldn't care about what the other programs are doing, and nothing else would affect the running state of our program. Functions are more inherently associated with parallelism.

- Functions can be the same, but have different procedures, e.g.:
  ```f(x) = 2x + 6
  g(x) = 2(x + 3)
  ```
- These two are the same functions, because the same input always gives the same output. As a function, they behave the same way.
- Procedure, however, is defined as a sequence of steps for computing a function, and in `f(x)`, the procedure is to first multiply input `x` by 2 and add 6. In `g(x)`, the procedure is to take the argument `x` and add 3, then multiply the result by 2.
- Functions are broken down by the computer into procedures. The way we represent a function in a program, is to provide it with an algorithm (a sequence of steps) for computing that function.
- Side note: If `f(x) = 2x + y`, then `f(x)` is a procedure, but it is no longer a function (in programming), provided `y` is a free variable and not an argument. We do not get the same output for the same input.
- Side note: In a function, different procedures can take different amounts of time [Reference: CS61 Data Structures](https://archive.org/details/ucberkeley-webcast-PL4BBB74C7D2A1049C).

- An example of applicative order, starting by **evaluating the argument's sub-expressions**:

```(def (f a b) (+ (g a) b)) // this is function f. it takes in two arguments, a and b. it will call function g with a single argument a, and add b to the result of function g.
(def (g x) (* 3 x)) // this is function g. it takes in one argument, x. it will multiply x by 3.
(applic (f (+ 2 3) (- 15 6))) // this is the input stage.

// first, for line 24, with regards to function f, argument a is 5 and argument b is 9. function f calls on function g with input a, which becomes input x in function g.
// in line 25, function g is called by function f, and gives an output of 15.
// going back to line 24, adding b to the result of function g would give an ouput of 24.
```

- In this case, even before calling on function `g`, function `f` would have evaluated the sub-expression of `(+ 2 3) (- 15 6)` to declare the values of `a` and `b` to be `5` and `9` respectively.

- In normal order, or `(normal (f (+ 2 3) (- 15 6)))`, we start by taking the actual **argument expressions** and **substituting** them into the body of the functions. This means that instead of evaluating `a` and `b` to be `5` and `9`, `a` is `(+ 2 3)`, and `b` is `(- 15 6)`, and evaluate when we need to.

- In both orders, we get the same answer in different order. What is the difference?

- Take the following expression: `(def (zero z) (- z z))`.

- Calling it with `(applic (zero (random 10)))` will give `0`. Let's say that `random 10` gives `8`. `(zero 8)` will give us `(- 8 8)`, which is `0`.

- Calling it with `(normal (zero (random 10)))`, however, may not give us `0`. First, we substituted the actual argument expression with the parameter, `random 10`. This gives us `(- (random 10) (random 10))`. Let's say the first `random 10` gave us `9`, and the second `2`. `random` is a procedure that is not a function — with the same input, it doesn't always give us the same output. Lastly, `(- 9 2)` gives us `7`.

- This is one example of a situation where the order matters.

- To generalise, if we write a working functional program (purely based on functions), we know that we will get the same answer no matter what. With a program that is not functional, then the order at which things happen inside the computer will matter — what is going on, and when. Functional programming does away with this.
