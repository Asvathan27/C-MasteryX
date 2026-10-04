# Day 5

This repository contains C programming solutions for pattern generation and mathematical triangles.

---

## 📚 Problem Statements

### 1. Hollow Diamond Pattern (`q1_hollow_diamond.c`)
- **Description**: Prints a hollow diamond pattern of stars where only the border stars are displayed with spaces inside.
- **Input**: Number of rows for the upper half ($n$).
- **Sample Pattern ($n = 4$)**:
  ```text
     *
    * *
   *   *
  *     *
   *   *
    * *
     *
  ```

### 2. Hourglass Pattern (`q2_hourglass.c`)
- **Description**: Prints a solid hourglass pattern of stars separated by spaces.
- **Input**: Number of rows in the top half ($n$).
- **Sample Pattern ($n = 4$)**:
  ```text
  * * * *
   * * *
    * *
     *
    * *
   * * *
  * * * *
  ```

### 3. Pascal's Triangle (`q3_pascal_triangle.c`)
- **Description**: Prints a centered Pascal's Triangle using the combinatorial formula $C(n, r) = C(n, r-1) \times (n - r + 1) / r$.
- **Input**: Number of rows.
- **Sample Pattern ($5$ rows)**:
  ```text
          1
        1   1
      1   2   1
    1   3   3   1
  1   4   6   4   1
  ```

---

## 🛠️ How to Compile & Run

### 1. Hollow Diamond Pattern
```bash
gcc q1_hollow_diamond.c -o q1
./q1
```

### 2. Hourglass Pattern
```bash
gcc q2_hourglass.c -o q2
./q2
```

### 3. Pascal's Triangle
```bash
gcc q3_pascal_triangle.c -o q3
./q3
```

---

## 🧪 Sample Inputs and Outputs

### Question 1: `q1_hollow_diamond.c`

#### Sample 1 ($n = 4$)
- **Input**: `4`
- **Output**:
  ```text
     *
    * *
   *   *
  *     *
   *   *
    * *
     *
  ```

#### Sample 2 ($n = 1$ - Edge Case)
- **Input**: `1`
- **Output**:
  ```text
  *
  ```

#### Sample 3 ($n = 2$)
- **Input**: `2`
- **Output**:
  ```text
   *
  * *
   *
  ```

---

### Question 2: `q2_hourglass.c`

#### Sample 1 ($n = 4$)
- **Input**: `4`
- **Output**:
  ```text
  * * * *
   * * *
    * *
     *
    * *
   * * *
  * * * *
  ```

#### Sample 2 ($n = 1$ - Edge Case)
- **Input**: `1`
- **Output**:
  ```text
  *
  ```

#### Sample 3 ($n = 3$)
- **Input**: `3`
- **Output**:
  ```text
  * * *
   * *
    *
   * *
  * * *
  ```

---

### Question 3: `q3_pascal_triangle.c`

#### Sample 1 ($rows = 5$)
- **Input**: `5`
- **Output**:
  ```text
          1
        1   1
      1   2   1
    1   3   3   1
  1   4   6   4   1
  ```

#### Sample 2 ($rows = 1$ - Edge Case)
- **Input**: `1`
- **Output**:
  ```text
     1
  ```

#### Sample 3 ($rows = 4$)
- **Input**: `4`
- **Output**:
  ```text
        1
      1   1
    1   2   1
  1   3   3   1
  ```
