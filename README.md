# C Programming Assignment

This repository contains solutions for the assigned C programming tasks:

## Problem List & Files

1. **Armstrong Number** - [`armstrong_number.c`](./armstrong_number.c)
   - Checks if an input number is an Armstrong number (sum of digits raised to the power of total digits equals the number).
   - *Example:* $153 = 1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153$

2. **Perfect Number** - [`perfect_number.c`](./perfect_number.c)
   - Checks if a positive integer is equal to the sum of its proper divisors.
   - *Example:* $6 = 1 + 2 + 3 = 6$, $28 = 1 + 2 + 4 + 7 + 14 = 28$

3. **The FizzBuzz Logic Puzzle** - [`fizzbuzz.c`](./fizzbuzz.c)
   - Iterates numbers from 1 to 100.
   - Prints `"Fizz"` if divisible by 3, `"Buzz"` if divisible by 5, and `"FizzBuzz"` if divisible by both 3 and 5.

---

## How to Compile & Run

Using any standard C compiler (e.g. GCC / Clang / MSVC):

```bash
# 1. Armstrong Number
gcc armstrong_number.c -o armstrong
./armstrong

# 2. Perfect Number
gcc perfect_number.c -o perfect
./perfect

# 3. FizzBuzz
gcc fizzbuzz.c -o fizzbuzz
./fizzbuzz
```
