# Notes

- _How_ the computer translates binary (from programming language) into pixels (and more) is the _implementation_, and _what_ the programming language is supposed to do is the _abstraction_. There are multiple layers of abstraction in computer architecture, enabling us to disregard a lower level of abstraction. Once we test it, and implement a higher level of abstraction, we take it that the lower levels of abstraction works.

- Generally, when someone has an idea, a program is then written using a high-level language (abstraction 1), which then gets compiled into virtual machine code (abstraction 2). The VM code gets translated by a VM translator into low-level (machine) code (abstraction 3), assembled into computer architecture (abstraction 4) and through digital design, is understood by the CPU, RAM, and chipset. These hardware will then perform the necessary tasks via elementary logic gates (e.g. Nand), which were built and combined together from individual logic gates.

- Many elementary logic gates can be built into a functional unit of elementary logic gates using combinational logic. Elementary logic gates can be built into CPU, RAM, and chipset using combinational and sequential (time, clocks, etc.) logic. We can then design these hardware units into a computer.
