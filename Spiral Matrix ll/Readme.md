# 🌀 Spiral Matrix II

This project explains how to generate an `n x n` matrix filled with numbers from `1` to `n²` in spiral order.

---

## 📌 Problem Statement

Given an integer `n`, construct a square matrix where elements are filled in a **spiral pattern**, starting from the top-left corner and moving clockwise.

---

## 🧾 Example

**Input:**

```
n = 3
```

**Output:**

```
1   2   3
8   9   4
7   6   5
```

---

## 🚀 Approach

The solution uses a **boundary-based traversal technique**:

We maintain four pointers:

* `sr` → starting row
* `er` → ending row
* `sc` → starting column
* `ec` → ending column

### Spiral Traversal Steps:

1. Traverse **left → right** across the top row
2. Traverse **top → bottom** along the right column
3. Traverse **right → left** across the bottom row
4. Traverse **bottom → top** along the left column

After completing one full cycle, shrink the boundaries:

```
sr++, sc++, er--, ec--
```

Repeat until all elements are filled.

---

## ⏱️ Time Complexity

**O(n²)**

* The matrix contains `n × n` elements.
* Each element is visited exactly once.
* No nested redundant traversals.

---

## 🧠 Space Complexity

**O(n²)**

* Space is required to store the resulting matrix.
* No additional data structures are used (constant auxiliary space).

---

## 📊 Key Observations

* The problem is a **simulation of movement in layers**.
* Each iteration fills one "ring" of the matrix.
* The number of layers is approximately `n / 2`.

---

## ⚠️ Edge Cases

* `n = 1` → Only one element `[1]`
* Works efficiently for all valid values of `n`

---

## ✨ Concepts Used

* Matrix traversal
* Boundary shrinking
* Simulation technique
* Iterative control logic

---
