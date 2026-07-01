# 📘 C++ Learning Journal (Mistakes & Learnings)

**Author:** Mayank  
**Started:** July 2026

---

# Purpose

This file is **not** a collection of syntax.

This file contains every mistake I make while learning C++.

Goal:
- Never repeat the same mistake twice.
- Understand *why* the mistake happened.
- Become a better programmer after every bug.

---

# Template

## Date:

## Problem:

## Mistake:

## Why it happened:

## Solution:

## Lesson Learned:

---

# Learnings

## Learning #1

### Problem
Used printf formatting with `cout`.

### Wrong

```cpp
cout << "arr[%d][%d]", i, j;
```

### Correct

```cpp
cout << "arr[" << i << "][" << j << "]";
```

### Why it happened
Mixed C syntax with C++ syntax.

### Lesson Learned
`printf()` uses format specifiers.

`cout` uses `<<`.

---

## Learning #2

### Problem

Used

```cpp
cout << "\v";
```

to print a blank line.

### Better

```cpp
cout << endl;
```

or

```cpp
cout << "\n\n";
```

### Lesson Learned

Use escape sequences only when their purpose is understood.

---

## Learning #3

### Problem

Created another matrix for transpose.

### Better

Square matrices can be transposed in-place.

```cpp
swap(arr[i][j], arr[j][i]);
```

### Lesson Learned

Always think about reducing space complexity.

---

## Learning #4

### Problem

Recursive factorial.

```cpp
if(n==1)
```

### Bug

Forgot that

```
0! = 1
```

### Better

```cpp
if(n==0 || n==1)
```

### Lesson Learned

Always test edge cases.

---

## Learning #5

### Problem

Division function.

Forgot division by zero.

### Better

```cpp
if(b==0)
{
    cout<<"Division by zero not possible";
}
```

### Lesson Learned

Whenever division exists,

always test denominator = 0.

---

## Learning #6

### Problem

Calculator menu numbering.

```
5. Multiply
4. Divide
5. Exit
```

### Lesson Learned

Always verify menu options before running.

---

## Learning #7

### Problem

Used

```cpp
exit(1);
```

for normal termination.

### Better

```cpp
return 0;
```

or

```cpp
break;
```

### Lesson Learned

`exit(1)` usually indicates abnormal termination.

---

## Learning #8

### Problem

Functions printed output directly.

Example:

```cpp
digitalRoot();
```

### Better

Functions should return values.

```cpp
return answer;
```

Print inside `main()`.

### Lesson Learned

Functions should compute.

`main()` should present.

---

## Learning #9

### Problem

Used

```cpp
len(sum)==1;
```

### Better

```cpp
sum < 10;
```

### Lesson Learned

Sometimes mathematics removes the need for an entire function.

---

## Learning #10

### Problem

`len(0)` returned 0.

### Better

Zero has one digit.

```cpp
if(num==0)
    return 1;
```

### Lesson Learned

Always test with:

- 0
- 1
- Negative numbers
- Maximum expected input

---

## Learning #11

### Problem

Used pointers unnecessarily.

```cpp
bool areReverse(int *a,int *b);
```

### Better

```cpp
bool areReverse(int a,int b);
```

### Lesson Learned

Use pointers/references only when the original variable must change.

---

## Learning #12

### Problem

Poor variable naming.

Example:

```cpp
digitalroot
```

while calculating digit sum.

### Better

```cpp
sum
```

### Lesson Learned

Variable names should describe their current purpose.

---

## Learning #13

### Problem

Didn't review my own code before asking for review.

### New Habit

Before asking for help, answer:

1. What is good?
2. What can improve?
3. Which edge cases did I test?

### Lesson Learned

Self-review makes me improve much faster.

---

## Learning #14

### Programming Principle

Order of development:

1. Make it work.
2. Make it correct.
3. Make it clean.
4. Make it efficient.

Never optimize code that doesn't work correctly.

---

## Learning #15

### Programming Principle

Problem-solving workflow:

Understand Problem

↓

Think

↓

Algorithm

↓

Dry Run

↓

Code

↓

Debug

↓

Optimize

Never jump directly into coding.

---

# Things To Remember

- Every function should do only one job.
- Use meaningful variable names.
- Always think about edge cases.
- Readability is more important than clever code.
- Never copy code that I don't understand.
- Debug with paper before using print statements.
- Simplicity is a strength.
- Every bug teaches something.