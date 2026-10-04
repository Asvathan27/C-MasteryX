# Day 7

This repository contains C programming solutions for memory management and pointer manipulations.

---

## 📚 Problem Statements

### 1. Swap Using Pointers (`q1_swap_pointers.c`)
- **Description**: Reads two integers and swaps their values using a function `void swap(int *a, int *b)` through pass-by-reference.
- **Function**: `void swap(int *a, int *b)`

### 2. Reverse Array Using Two Pointers (`q2_reverse_array_pointers.c`)
- **Description**: Reads an integer array and reverses its elements in-place using two pointers (one at the start and one at the end) moving inward.
- **Edge cases handled**: Single element, odd size arrays, even size arrays.

### 3. Maximum and Minimum Using Pointer Arithmetic (`q3_max_min_pointers.c`)
- **Description**: Reads an array and finds the maximum and minimum elements exclusively using pointer arithmetic (`*(ptr + i)`).
- **Edge cases handled**: Single element, all negative numbers.

---

## 🛠️ How to Compile & Run

### 1. Swap Using Pointers
```bash
gcc q1_swap_pointers.c -o q1
./q1
```

### 2. Reverse Array Using Two Pointers
```bash
gcc q2_reverse_array_pointers.c -o q2
./q2
```

### 3. Maximum and Minimum Using Pointer Arithmetic
```bash
gcc q3_max_min_pointers.c -o q3
./q3
```

---

## 🧪 Sample Inputs and Outputs

### Question 1: `q1_swap_pointers.c`

#### Sample 1 (Positive Integers)
- **Input**:
  ```text
  10
  20
  ```
- **Output**:
  ```text
  Before swap: num1 = 10, num2 = 20
  After swap: num1 = 20, num2 = 10
  ```

#### Sample 2 (Negative Numbers)
- **Input**:
  ```text
  -50
  75
  ```
- **Output**:
  ```text
  Before swap: num1 = -50, num2 = 75
  After swap: num1 = 75, num2 = -50
  ```

#### Sample 3 (Identical Numbers)
- **Input**:
  ```text
  42
  42
  ```
- **Output**:
  ```text
  Before swap: num1 = 42, num2 = 42
  After swap: num1 = 42, num2 = 42
  ```

---

### Question 2: `q2_reverse_array_pointers.c`

#### Sample 1 (Odd Size Array)
- **Input**:
  ```text
  5
  10 20 30 40 50
  ```
- **Output**:
  ```text
  Original array: 10 20 30 40 50 
  Reversed array: 50 40 30 20 10 
  ```

#### Sample 2 (Even Size Array)
- **Input**:
  ```text
  4
  1 2 3 4
  ```
- **Output**:
  ```text
  Original array: 1 2 3 4 
  Reversed array: 4 3 2 1 
  ```

#### Sample 3 (Single Element - Edge Case)
- **Input**:
  ```text
  1
  99
  ```
- **Output**:
  ```text
  Original array: 99 
  Reversed array: 99 
  ```

---

### Question 3: `q3_max_min_pointers.c`

#### Sample 1 (Standard Mixed Array)
- **Input**:
  ```text
  6
  12 45 3 89 24 67
  ```
- **Output**:
  ```text
  Maximum element: 89
  Minimum element: 3
  ```

#### Sample 2 (All Negative Numbers - Edge Case)
- **Input**:
  ```text
  4
  -15 -3 -42 -9
  ```
- **Output**:
  ```text
  Maximum element: -3
  Minimum element: -42
  ```

#### Sample 3 (Single Element - Edge Case)
- **Input**:
  ```text
  1
  -7
  ```
- **Output**:
  ```text
  Maximum element: -7
  Minimum element: -7
  ```
