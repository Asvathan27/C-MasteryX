# Day 6

This repository contains C programming solutions for user-defined data types using structures.

---

## 📚 Problem Statements

### 1. Student Structure (`q1_student_structure.c`)
- **Description**: Defines a structure `Student` containing `name`, `roll_no`, and `marks`. Reads details for a student and displays them.
- **Key Feature**: Supports full names with spaces using formatted string input.

### 2. Employee Structure (`q2_employee_structure.c`)
- **Description**: Defines a structure `Employee` with `id`, `name`, and `salary` (double precision). Reads and displays the employee's details.

### 3. Book Structure (`q3_book_structure.c`)
- **Description**: Defines a structure `Book` with `title`, `author`, and `price`. Reads and displays book information with full support for multi-word titles and authors.

---

## 🛠️ How to Compile & Run

### 1. Student Structure
```bash
gcc q1_student_structure.c -o q1
./q1
```

### 2. Employee Structure
```bash
gcc q2_employee_structure.c -o q2
./q2
```

### 3. Book Structure
```bash
gcc q3_book_structure.c -o q3
./q3
```

---

## 🧪 Sample Inputs and Outputs

### Question 1: `q1_student_structure.c`

#### Sample 1 (Full Name with Spaces)
- **Input**:
  ```text
  John Doe
  101
  95.5
  ```
- **Output**:
  ```text
  Student Details:
  Name: John Doe
  Roll Number: 101
  Marks: 95.50
  ```

#### Sample 2 (Single Word Name)
- **Input**:
  ```text
  Alice
  102
  88.0
  ```
- **Output**:
  ```text
  Student Details:
  Name: Alice
  Roll Number: 102
  Marks: 88.00
  ```

#### Sample 3 (Edge Case: Perfect Score)
- **Input**:
  ```text
  Bob Smith
  103
  100.0
  ```
- **Output**:
  ```text
  Student Details:
  Name: Bob Smith
  Roll Number: 103
  Marks: 100.00
  ```

---

### Question 2: `q2_employee_structure.c`

#### Sample 1 (Standard Input)
- **Input**:
  ```text
  501
  Robert Taylor
  75000.50
  ```
- **Output**:
  ```text
  Employee Details:
  ID: 501
  Name: Robert Taylor
  Salary: 75000.50
  ```

#### Sample 2
- **Input**:
  ```text
  502
  Sarah Jenkins
  92350.75
  ```
- **Output**:
  ```text
  Employee Details:
  ID: 502
  Name: Sarah Jenkins
  Salary: 92350.75
  ```

#### Sample 3 (Edge Case: Integer Salary)
- **Input**:
  ```text
  503
  David
  50000
  ```
- **Output**:
  ```text
  Employee Details:
  ID: 503
  Name: David
  Salary: 50000.00
  ```

---

### Question 3: `q3_book_structure.c`

#### Sample 1 (Multi-word Title & Author)
- **Input**:
  ```text
  The C Programming Language
  Brian W Kernighan and Dennis M Ritchie
  49.99
  ```
- **Output**:
  ```text
  Book Details:
  Title: The C Programming Language
  Author: Brian W Kernighan and Dennis M Ritchie
  Price: 49.99
  ```

#### Sample 2
- **Input**:
  ```text
  Clean Code
  Robert C Martin
  35.50
  ```
- **Output**:
  ```text
  Book Details:
  Title: Clean Code
  Author: Robert C Martin
  Price: 35.50
  ```

#### Sample 3
- **Input**:
  ```text
  Algorithms
  Robert Sedgewick
  62.00
  ```
- **Output**:
  ```text
  Book Details:
  Title: Algorithms
  Author: Robert Sedgewick
  Price: 62.00
  ```
