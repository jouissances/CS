# Notes

- A single chip has multiple processors, so they can run in parallel and do more things at once. A single chip has many cores, and cores themselves are actually running parallel functions as well.
- Cores are made of logic gates.
- The hardware's purpose is to run software
- Parallel request is when multiple clients run a function, and millions of requests are happening at the same time, but are mostly independent from each other
- Parallel threads happen when a single request is sent out to multiple, individual sub-pieces of datasets, generating thousands of independent threads worth of work
- Parallel instruction happen when the single thread that is processing the thread is doing multiple instructions at a time, running itself faster
- Parallel data happens when a processor is looking at multiple bits of data, across a vector of data, at once
- Parallels all the way down

## 6 Great Ideas In Computer Architecture

1. abstraction: hiding necessary details from upper level, so focus is achieved at each level
2. moore's law: designing through trends, designing for the future and not based on current competitors
3. principle of locality (memory hierarchy): part of a bigger principle that programs are actually predictable
4. parallelism
5. performance measurement & improvement: engineering discipline that continually measures and improves the system
6. dependability via redundancy: keeping things running even when pieces are broken

### Further Explanation

1. Abstraction

- Building logic gates (themselves are abstractions)
- High level language is compiled into assembly language, which is rarely written by code. Assembly language is assembled into machine language program
- Machine language program will be interpreted by the machine, reaches the hardware, and the code will be implemented as logic in the hardware, and physics will render the processors to do things

2. Moore's Law

- Microprocessors run memory chips
- The best cost per transistor was important for manufacturing, especially since everyone was scaling the sizes down constantly (lowering the cost), and Moore figured out that every 18 months or so, we can double the most cost-effective (cheaper) number of components on a chip, by scaling
- In summary: how many transistors (chip) at cheapest cost as technology scaled
- The smaller it gets, however, will mean that it would eventually come to a point where it becomes close-to-impossible to keep shrinking the sizes. Ultimately we have to make them out of atoms, and the cost of really small ones (<14nm) might exponentially rise, flipping the Moore's Law
