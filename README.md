# C MasteryX

A curated repository of C programming solutions, problem-solving techniques, and foundational computer science algorithms.

---

## 📁 Repository Structure

```text
C MasteryX/
├── README.md
├── Day 1/
│   ├── armstrong_number.c
│   ├── perfect_number.c
│   └── fizzbuzz.c
│
├── Day 2/
│   ├── longest_palindromic_substring.c
│   ├── first_non_repeating_character.c
│   └── remove_duplicates_preserving_order.c
│
├── DAY 3/
│   ├── README.md
│   ├── q1_prime_check.c
│   ├── q2_count_digit.c
│   └── q3_reverse_number.c
│
├── Day 4/
│   ├── README.md
│   ├── q1_move_zeros.c
│   ├── q2_max_subarray_sum.c
│   └── q3_array_intersection.c
│
├── Day 5/
│   ├── README.md
│   ├── q1_hollow_diamond.c
│   ├── q2_hourglass.c
│   └── q3_pascal_triangle.c
│
├── Day 6/
│   ├── README.md
│   ├── q1_student_structure.c
│   ├── q2_employee_structure.c
│   └── q3_book_structure.c
│
└── Day 7/
    ├── README.md
    ├── q1_swap_pointers.c
    ├── q2_reverse_array_pointers.c
    └── q3_max_min_pointers.c
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

## 🚀 Day 2 Topics & Problems (String Manipulation & Optimization)

### 1. Longest Palindromic Substring (`longest_palindromic_substring.c`)
- **Description**: Finds the longest contiguous palindromic substring in a given string using the Center Expansion (Two Pointers) algorithm.
- **Complexity**: $O(n^2)$ Time | $O(1)$ Auxiliary Space
- **Examples**:
  - `babad` $\rightarrow$ `bab`
  - `cbbd` $\rightarrow$ `bb`

### 2. First Non-Repeating Character (`first_non_repeating_character.c`)
- **Description**: Finds the first character in the string that appears exactly once. Returns `-1` if all characters repeat.
- **Complexity**: $O(n)$ Time | $O(1)$ Space (256 ASCII Frequency Table)
- **Examples**:
  - `swiss` $\rightarrow$ `w`
  - `aabbcc` $\rightarrow$ `-1`

### 3. Remove Duplicates Preserving Order (`remove_duplicates_preserving_order.c`)
- **Description**: Removes duplicate characters from a string while maintaining the original first occurrence position of each character.
- **Complexity**: $O(n)$ Time | $O(1)$ Space (256 ASCII Boolean Lookup)
- **Examples**:
  - `programming` $\rightarrow$ `progamin`
  - `banana` $\rightarrow$ `ban`

---

## 🚀 Day 3 Topics & Problems (Prime Validation & Recursion)

### 1. Prime Number Checker (`q1_prime_check.c`)
- **Description**: Checks whether a positive integer is prime by validating factors up to $\sqrt{n}$.
- **Function**: `int isPrime(int n)`
- **Edge cases handled**: $n \le 1$ is not prime, $n = 2$ is prime.

### 2. Recursive Digit Occurrence Counter (`q2_count_digit.c`)
- **Description**: Counts the number of occurrences of a digit ($0-9$) in a positive integer using recursion.
- **Function**: `int countDigit(int n, int d)`

### 3. Recursive Number Reversal (`q3_reverse_number.c`)
- **Description**: Reverses the digits of a positive integer using recursion.
- **Function**: `int reverseNum(int n, int rev)`

---

## 🚀 Day 4 Topics & Problems (Arrays & Kadane's Algorithm)

### 1. Move Zeros to End (`q1_move_zeros.c`)
- **Description**: Moves all `0`s to the end of the array while keeping the relative order of non-zero elements using an in-place two-pointer approach.
- **Function**: `void moveZeros(int arr[], int n)`

### 2. Maximum Subarray Sum (`q2_max_subarray_sum.c`)
- **Description**: Finds the maximum contiguous subarray sum using Kadane's algorithm, handling arrays with all negative numbers.
- **Function**: `int maxSubarraySum(int arr[], int n)`

### 3. Array Intersection (`q3_array_intersection.c`)
- **Description**: Finds and prints common elements across two arrays using nested loops without hash tables, avoiding duplicate outputs.

---

## 🚀 Day 5 Topics & Problems (Pattern Printing & Pascal Triangle)

### 1. Hollow Diamond Pattern (`q1_hollow_diamond.c`)
- **Description**: Prints a hollow diamond pattern of stars with only border stars displayed.

### 2. Hourglass Pattern (`q2_hourglass.c`)
- **Description**: Prints a solid hourglass pattern of stars separated by spaces.

### 3. Pascal's Triangle (`q3_pascal_triangle.c`)
- **Description**: Prints a centered Pascal's Triangle using combinatorial formulas.

---

## 🚀 Day 6 Topics & Problems (Structures in C)

### 1. Student Structure (`q1_student_structure.c`)
- **Description**: Reads and displays student records with full name whitespace support.

### 2. Employee Structure (`q2_employee_structure.c`)
- **Description**: Reads and displays employee ID, name, and salary with double precision.

### 3. Book Structure (`q3_book_structure.c`)
- **Description**: Reads and displays book title, author, and price.

---

## 🚀 Day 7 Topics & Problems (Pointers & Memory Manipulation)

### 1. Swap Using Pointers (`q1_swap_pointers.c`)
- **Description**: Swaps two integers by reference using pointer addresses.

### 2. Reverse Array Using Two Pointers (`q2_reverse_array_pointers.c`)
- **Description**: Reverses an array in-place using two converging pointers.

### 3. Maximum and Minimum Using Pointer Arithmetic (`q3_max_min_pointers.c`)
- **Description**: Traverses and finds the minimum/maximum elements exclusively using pointer arithmetic (`*(ptr + i)`).

---

## 🛠️ How to Compile & Run

To compile any of the C files using `gcc`:

### Day 1:
```bash
gcc "Day 1/armstrong_number.c" -o armstrong_number -lm
./armstrong_number

gcc "Day 1/perfect_number.c" -o perfect_number
./perfect_number

gcc "Day 1/fizzbuzz.c" -o fizzbuzz
./fizzbuzz
```

### Day 2:
```bash
gcc "Day 2/longest_palindromic_substring.c" -o longest_palindromic_substring
./longest_palindromic_substring

gcc "Day 2/first_non_repeating_character.c" -o first_non_repeating_character
./first_non_repeating_character

gcc "Day 2/remove_duplicates_preserving_order.c" -o remove_duplicates_preserving_order
./remove_duplicates_preserving_order
```

### Day 3:
```bash
gcc "DAY 3/q1_prime_check.c" -o q1 -lm
./q1

gcc "DAY 3/q2_count_digit.c" -o q2
./q2

gcc "DAY 3/q3_reverse_number.c" -o q3
./q3
```

### Day 4:
```bash
gcc "Day 4/q1_move_zeros.c" -o q1
./q1

gcc "Day 4/q2_max_subarray_sum.c" -o q2
./q2

gcc "Day 4/q3_array_intersection.c" -o q3
./q3
```

### Day 5:
```bash
gcc "Day 5/q1_hollow_diamond.c" -o q1
./q1

gcc "Day 5/q2_hourglass.c" -o q2
./q2

gcc "Day 5/q3_pascal_triangle.c" -o q3
./q3
```

### Day 6:
```bash
gcc "Day 6/q1_student_structure.c" -o q1
./q1

gcc "Day 6/q2_employee_structure.c" -o q2
./q2

gcc "Day 6/q3_book_structure.c" -o q3
./q3
```

### Day 7:
```bash
gcc "Day 7/q1_swap_pointers.c" -o q1
./q1

gcc "Day 7/q2_reverse_array_pointers.c" -o q2
./q2

gcc "Day 7/q3_max_min_pointers.c" -o q3
./q3
```
