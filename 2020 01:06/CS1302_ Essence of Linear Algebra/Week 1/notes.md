# Notes

## What are vectors?

- Vectors in Physics: length and direction. It can move around the same dimension, and as long as the length and direction are constant, it will be considered as the same vector
- Vectors in CS: ordered list of numbers. Order matters. An ordered list of two numbers indicate a two-dimensional vector
- Vectors in Mathematics: vectors are anything that can be added together, or multiplied by a number

- In linear algebra, vectors (arrows) are typically rooted at the origin (centre of space, intersection of x-axis and y-axis) of the two-dimensional plane
- Vectors can also be described as the ordered list of coordinates, e.g. [-2, 3] written vertically
- Every pair of numbers give one vector, and every vector is associated with one pair of numbers
- For three-dimensional systems, there will be a three-dimensional list of numbers. Every triplet of numbers indicate one vector, and every vector gives exactly one triplet of numbers
- Each pair of vector coordinates is basically a scalar of i and j, the **basis vector** of the xy coordinate system, e.g. [-5, 2] is (-5)i + 2j

# Addition

- To add two vectors, move a second vector such that its origin (tail) sits on the head of the first one. Then draw a new vector from the tail of the first vector to the head of the second vector. The new vector is the sum (linear combination)
- Each vector represent a movement — a step with a certain distance and direction in space. If one follows the first vector and the second vector, the end result is the same as described by the new (sum) vector drawn
- Think number line and addition
- The span of a given pair of vectors is the set of all their linear combinations (with scalars of the vectors being variable, including negatives, and direction constant). Typically, the span of a 2D vector is all coordinates of the 2D vector, with the exception of when they line up (have the same direction) or when they are both 0

# Multiplication

- To multiply a vector, the vector is either shrunk or stretched, depending on whether the multiplier is less than or bigger than 1. The term is called 'scaling'
- A negative scalar means the vector will be flipped (reversed) 180 degrees (in the opposite direction)
