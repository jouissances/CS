# Notes

(cont'd)

3. Principle of Locality

- Most of a computer system is built on memory. According to basic physics, intrinsically, as memories get bigger, it gets harder (or takes longer) to get to some pieces of it. But again, there's a limit to how small something can get. Nevertheless, fundamentally, the bigger something is, the less efficient it should be.
- Based on the storage latency analogy, moving data could take a very long time to process and complete.
- Reference: [Jim Gray's Storage Latency Analogy](https://blog.codinghorror.com/the-infinite-space-between-words/)
- The principle of locality solves this problem. What it means is that when we access a piece of data once, it's likely that we'll need to access it again soon. What the machine does is to cache the bit of data we've just accessed, and use it repeatedly without having to go all the way to the bigger storage units. In actuality, the memory hierarchy in machines can go very deep (i.e. Virtual Memory -> Solid State Memory -> Physical Memory -> CPU Cache -> CPU).
- If our computers do not have locality, our computer will run as slowly as the largest big memory that we have.

4. Parallelism

- This is about assigning different threads of processes for each requests, doing multiple things at once. Parallelism, though, also has its limits — if we cannot write a program that is almost entirely parallel, we won't get much performance gain.
- If we have to do 10% of our program (code) sequentially, it doesn't matter how many processes I have, I can only get the speed up by 10%. I can do the other 90% really fast in parallel, but I still have to do the 10% sequential piece.
  Reference: [Amdahl's Law](https://www.geeksforgeeks.org/computer-organization-amdahls-law-and-its-proof/)

5. Performance Measurement & Improvement

- This is about tuning our application to underlying hardware to exploit its overall locality, parallelism, as well as special hardware features or specialised instructions (e.g. matrix manipulation).

6. Coping with Failures

- If disks have a failure rate of 2% to 10% each year, and we can assume an annual fail rate of 4%, what does this mean for a data centre? Assuming there are 50,000 servers and there are 4 disks per server. How often does a disk fail?
- There are 200,000 disks in total. With 4% failure rate, there will be 8,000 disk fail every year, which results in 1 disk failing every hour.
- To ensure that the data centre is still functioning despite the constant breakage, redundancy might be necessary.
- Even with flash memory (solid state), it has a shelf-life on how many times data can be moved around. There are electrons being transferred around to store state, coupled with high voltages being used — this somewhat disturbs the atomic lattice of the structure. Eventually, it wears out. Reference: [NASA Fixing Opportunity's Flash Memory](https://www.neweggbusiness.com/smartbuyer/awesome/good-run-nasas-mars-rover-tells-us-ssd-life/)
- The solution was to deploy another version of software to ignore the missing hardware piece and use the other functioning flash memory drive.
- Real hardware fails. Redundancy is needed so that a failing piece doesn't make the whole system fail. By increasing transistor density, we can alsoo to reduce the cost of redundancy.
- Dependability via redundancy applies to everything — from data centres, to storage, to memory, to instructions. For example:
  - Redundant data centres can lose 1 data centre and the Internet service can still stay online.
  - Redundant disks can lose 1 disk but not lose data. Reference: [RAID](https://access.redhat.com/documentation/en-US/Red_Hat_Enterprise_Linux/4/html/System_Administration_Guide/Redundant_Array_of_Independent_Disks_RAID.html)
  - Redundant memory bits can lose 1 bit but not lose data. Reference: [Error Correcting Code / ECC Memory](https://blog.codinghorror.com/to-ecc-or-not-to-ecc/)

## Everything Is A Number

- Inside computers, everything is a number — which is stored with a fixed size.
- Integers or floating point operations can result in results being to big, causing either overflow (the absolute value of the number is too high for the computer to represent) or underflow (the absolute value of the number is too close to zero for the computer to represent).
- Different ways to represent an integer:
  - Binary (base 2)
  - Octal (base 8)
  - Hexadecimal (base 16)
  - Decimal (base 10)
- The notation for different bases will be written in subscript, next to the integer itself. The calculation of each integer into decimal values is the same as how one calculates binary into decimal values.
- If 32-bit string can represent 2^32 binary numbers, unsigned integers (used for addresses) in 32-bit string represent 0 to 2^32 - 1 different addresses (4 giga-addresses) — and signed integers represent integers from -(2^31) to 2^31 - 1. Reference: [Two's Complement Representation](https://www.cs.cornell.edu/~tomf/notes/cps104/twoscomp.html). There will be one negative number with no positive version. Every computer today uses this representation for signed integers.
- In the 32-bit binary, the leftmost bit is the sign bit, where 0 means positive (including the decimal value 0), and 1 means negative. This is because bit 31 (leftmost) is the most significant, and bit 0 is the least significant.
- To make a Two's Complement, invert all the binary bits and add 1 (e.g. 0011 and 1101 are complements, and 0010 and 1110 are complements). The addition of 1 works this way:
  `0 + 1 = 1`, and `1 + 1 = 0, with 1 being carried over to the left`
- In a 4-bit width example, it is relatively easy to cause an overflow or underflow, especially with two's complements.
- For example:

  ```Normal case: 0011 + 0010 = 0101 // or 3 + 2 = 5
  Normal case: 0011 + 1110 = 1 0001 // ignoring bit 4, we have 3 + (-2) = 1
  Normal case: 1101 + 1110 = 1 1011 // ignoring bit 4, we have (-3) + (-2) = -5
  Overflow: 0111 + 0001 = 1000 // 7 + 1 = 8 and not -8, as indicated by bit 3 being 1, which signifies  a negative value
  Underflow: 1000 + 1111 = 1 0111 //  (-8) + (-1) = -7 and not 7, as indicated by bit 3 being 0, which signifies a positive value
  ```

- Reference: [Overflow](https://www.geeksforgeeks.org/binary-number-system-overflow-in-arithmetic-addition/)

- Quiz: In a 5-bit word, we can represent integers ranging from -(2^4) to 2^4 - 1, or -16 to +15.

<!-- Next lecture: https://archive.org/details/ucberkeley_webcast_mZgoX-yLqxM -->
