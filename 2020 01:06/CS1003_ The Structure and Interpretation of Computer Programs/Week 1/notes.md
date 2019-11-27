# Notes

_"Combining several simple ideas into one compound one, and thus all complex ideas are made. 2. The second is bringing two ideas, whether simple or complex, together, and setting them by one another so as to take a view of them at once, without uniting them into one, by which it gets all its ideas of relations. 3. The third is separating them from all other ideas that accompany them in their real existence: this is called abstraction, and thus all its general ideas are made."_

- [Different ways of writing a mathematical expression](http://www.cs.man.ac.uk/~pjj/cs212/fix.html)

  - Prefix: sin(π/2)
  - Infix: 3 + 4
  - Postfix: 5!

- A program is a pattern of rules — it directs computational processes, which manipulate abstract data

- In programming, there are two major kinds of elements:

  - procedures
  - data

- Each language likely has several mechanisms for combining simple ideas to form more complex ideas:

  - Primitive expressions represent the simplest entities the language is concerned with
  - Means of combination is used to build simpler elements into compound elements
  - Means of abstraction is used to name and manipulate compound elements as units

- In a function expression, e.g.

  ````(define (square x)   // x here is called a formal parameter
      (* x x)             // (* x x) is the body
  )```
  `(square(+ 2 3))`       // and (+ 2 3) is the actual argument expression, and 5 is the actual argument value
  ````

- In a recursive function, the base case test have to come before the procedure that does the recursive call, otherwise we will not find out if it fits the base case.
