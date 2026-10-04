# Skill Bridge C MasteryX - Assignment 4

This repository contains C programming solutions for Assignment 4 covering array manipulations, Kadane's algorithm, and set intersection.

---

## 📚 Problem Statements

### 1. Move Zeros to the End (`q1_move_zeros.c`)
- **Description**: Given an array containing positive, negative, and zero values, move all `0`s to the end of the array while maintaining the relative order of the non-zero elements.
- **Approach**: In-place two-pointer approach without using an auxiliary array.
- **Function**: `void moveZeros(int arr[], int n)`

### 2. Maximum Subarray Sum (`q2_max_subarray_sum.c`)
- **Description**: Given an array of integers, find the maximum sum of a contiguous subarray using Kadane's algorithm.
- **Edge cases**: Handles cases where all elements in the array are negative (returns the maximum single element).
- **Function**: `int maxSubarraySum(int arr[], int n)`

### 3. Array Intersection (`q3_array_intersection.c`)
- **Description**: Given two integer arrays, find and print the elements present in both arrays.
- **Approach**: Uses only nested loops (direct element-by-element comparison) without frequency arrays or hash maps.
- **Duplicate Handling**: Prevents printing duplicate common elements by checking preceding elements in the first array.
- **Empty Common Case**: Prints `"No common elements"` if no intersection exists.

---

## 🛠️ How to Compile & Run

### Question 1: Move Zeros
```bash
gcc q1_move_zeros.c -o q1
./q1
```

### Question 2: Maximum Subarray Sum
```bash
gcc q2_max_subarray_sum.c -o q2
./q2
```

### Question 3: Array Intersection
```bash
gcc q3_array_intersection.c -o q3
./q3
```

---

## 🧪 Sample Inputs and Outputs

### Question 1: `q1_move_zeros.c`

#### Sample 1 (Mixed values)
- **Input**:
  ```text
  5
  0 1 0 3 12
  ```
- **Output**:
  ```text
  Array after moving zeros: 1 3 12 0 0
  ```

#### Sample 2 (All zeros - Edge case)
- **Input**:
  ```text
  4
  0 0 0 0
  ```
- **Output**:
  ```text
  Array after moving zeros: 0 0 0 0
  ```

#### Sample 3 (No zeros & negative numbers)
- **Input**:
  ```text
  5
  -4 7 -2 1 9
  ```
- **Output**:
  ```text
  Array after moving zeros: -4 7 -2 1 9
  ```

---

### Question 2: `q2_max_subarray_sum.c`

#### Sample 1 (Standard mixed array)
- **Input**:
  ```text
  9
  -2 1 -3 4 -1 2 1 -5 4
  ```
- **Output**:
  ```text
  Maximum subarray sum: 6
  ```

#### Sample 2 (All negative numbers - Edge case)
- **Input**:
  ```text
  4
  -8 -3 -6 -2
  ```
- **Output**:
  ```text
  Maximum subarray sum: -2
  ```

#### Sample 3 (Single element)
- **Input**:
  ```text
  1
  10
  ```
- **Output**:
  ```text
  Maximum subarray sum: 10
  ```

---

### Question 3: `q3_array_intersection.c`

#### Sample 1 (Common elements with no duplicates)
- **Input**:
  ```text
  5
  1 2 3 4 5
  5
  3 4 5 6 7
  ```
- **Output**:
  ```text
  Common elements: 3 4 5
  ```

#### Sample 2 (Duplicate elements in input arrays)
- **Input**:
  ```text
  6
  2 2 3 4 4 5
  5
  2 4 4 6 7
  ```
- **Output**:
  ```text
  Common elements: 2 4
  ```

#### Sample 3 (No common elements - Edge case)
- **Input**:
  ```text
  3
  1 2 3
  3
  4 5 6
  ```
- **Output**:
  ```text
  No common elements
  ```
