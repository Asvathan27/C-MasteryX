# C MasteryX

A curated repository of C programming solutions, problem-solving techniques, and foundational computer science algorithms.

---

## 📁 Repository Structure

```text
C MasteryX/
├── README.md
└── Day 1/
    ├── armstrong_number.c
    ├── perfect_number.c
    └── fizzbuzz.c
```

---

## 🚀 Day 1 Topics & Problems

### 1. Armstrong Number Checker (`armstrong_number.c`)
- **Description**: Checks whether a given number is an Armstrong (narcissistic) number.
- **Definition**: An $n$-digit number is an Armstrong number if the sum of each digit raised to the power of $n$ equals the original number.
- **Example**:
  $$153 = 1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153$$

### 2. Perfect Number Checker (`perfect_number.c`)
- **Description**: Verifies if a given positive integer is a Perfect Number.
- **Definition**: A number is perfect if it equals the sum of its proper positive divisors (excluding the number itself).
- **Example**:
  $$6 = 1 + 2 + 3$$
  $$28 = 1 + 2 + 4 + 7 + 14$$

### 3. FizzBuzz (`fizzbuzz.c`)
- **Description**: Classic problem that prints numbers from 1 to 100 with specific replacement rules.
- **Rules**:
  - Multiples of both 3 and 5 $\rightarrow$ `FizzBuzz`
  - Multiples of 3 $\rightarrow$ `Fizz`
  - Multiples of 5 $\rightarrow$ `Buzz`
  - Other numbers $\rightarrow$ Print the number as is.

---

## 🛠️ How to Compile & Run

To compile any of the C files using `gcc`:

```bash
# Compile Armstrong Number
gcc "Day 1/armstrong_number.c" -o armstrong_number -lm
./armstrong_number

# Compile Perfect Number
gcc "Day 1/perfect_number.c" -o perfect_number
./perfect_number

# Compile FizzBuzz
gcc "Day 1/fizzbuzz.c" -o fizzbuzz
./fizzbuzz
```
