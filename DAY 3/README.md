# Skill Bridge C MasteryX - Assignment 3

## 📚 Problem Statements

### Question 1: Prime Number Checker (`q1_prime_check.c`)
- **Objective**: Determine whether a given positive integer is prime.
- **Function**: `int isPrime(int n)`
- **Requirements**:
  - Read a positive integer with `scanf`.
  - Validate that the input is a positive integer.
  - Print `<n> is a prime number` or `<n> is not a prime number`.
  - Handle edge cases: `1` is not prime, `2` is prime. Divisors are checked up to $\sqrt{n}$.

### Question 2: Count Digit Occurrences Recursively (`q2_count_digit.c`)
- **Objective**: Count how many times a given digit (`0-9`) occurs in a positive integer using recursion.
- **Function**: `int countDigit(int n, int d)`
- **Requirements**:
  - Read the positive integer and the target digit with `scanf`.
  - Validate that the number is positive and the digit is in the range `0` to `9`.
  - Use recursion to compute and print the count of occurrences.

### Question 3: Reverse a Number Recursively (`q3_reverse_number.c`)
- **Objective**: Reverse the digits of a positive integer using recursion.
- **Function**: `int reverseNum(int n, int rev)`
- **Requirements**:
  - Read a positive integer with `scanf`.
  - Validate that the input is a positive integer.
  - Use recursion to compute and print the reversed number.

---

## 🛠️ How to Compile & Run

You can compile each file using `gcc`:

### 1. Prime Number Checker
```bash
gcc q1_prime_check.c -o q1 -lm
./q1
```

### 2. Count Digit Occurrences
```bash
gcc q2_count_digit.c -o q2
./q2
```

### 3. Reverse a Number
```bash
gcc q3_reverse_number.c -o q3
./q3
```

---

## 🧪 Sample Inputs and Outputs

### Question 1: `q1_prime_check.c`
- **Sample 1 (Edge case: 1)**
  - Input: `1`
  - Output: `1 is not a prime number`
- **Sample 2 (Edge case: 2)**
  - Input: `2`
  - Output: `2 is prime number`
- **Sample 3 (Prime number: 29)**
  - Input: `29`
  - Output: `29 is a prime number`
- **Sample 4 (Composite number: 100)**
  - Input: `100`
  - Output: `100 is not a prime number`

### Question 2: `q2_count_digit.c`
- **Sample 1 (Counting digit 0 in number with zeros)**
  - Input: `10050` and `0`
  - Output: `The digit 0 occurs 3 times in 10050`
- **Sample 2 (Repeating digits)**
  - Input: `22222` and `2`
  - Output: `The digit 2 occurs 5 times in 22222`
- **Sample 3 (Digit not present)**
  - Input: `4567` and `0`
  - Output: `The digit 0 occurs 0 times in 4567`

### Question 3: `q3_reverse_number.c`
- **Sample 1 (Standard number)**
  - Input: `12345`
  - Output: `Reversed number: 54321`
- **Sample 2 (Number with trailing zeros)**
  - Input: `1200`
  - Output: `Reversed number: 21`
- **Sample 3 (Single digit)**
  - Input: `7`
  - Output: `Reversed number: 7`
