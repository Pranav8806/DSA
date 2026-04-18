# 🌀 Spiral Order Traversal of Matrix

This project explains how to traverse a 2D matrix in **spiral order** and return all elements in a single list.

---

## 📌 Problem Statement

Given an `m x n` matrix, return all elements of the matrix in **spiral order** (clockwise direction).

---

## 🧾 Example

**Input:**

```
matrix = [
 [1, 2, 3],
 [4, 5, 6],
 [7, 8, 9]
]
```

**Output:**

```
[1, 2, 3, 6, 9, 8, 7, 4, 5]
```

---

## 🚀 Approach

We use a **boundary-based simulation** to traverse the matrix layer by layer.

### Boundaries Used:

* `sr` → starting row
* `er` → ending row
* `sc` → starting column
* `ec` → ending column

---

## 🔄 Traversal Steps

In each iteration, we traverse in four directions:

1. **Left → Right** (Top row)
2. **Top → Bottom** (Right column)
3. **Right → Left** (Bottom row)

   * Only if `sr != er` (to avoid duplicate row traversal)
4. **Bottom → Top** (Left column)

   * Only if `sc != ec` (to avoid duplicate column traversal)

After completing one layer, shrink boundaries:

```
sr++, sc++, er--, ec--
```

Repeat until all elements are covered.

---

## ⏱️ Time Complexity

**O(m × n)**

* Each element is visited exactly once.
* No extra traversals or repeated work.

---

## 🧠 Space Complexity

**O(1)** (excluding output)

* No extra space used apart from the result vector.
* Output storage takes **O(m × n)**.

---

## 📊 Key Observations

* The traversal works in **layers (or rings)**.
* Each iteration reduces the matrix size inward.
* Conditional checks prevent duplicate traversal in:

  * Single row
  * Single column

---

## ⚠️ Edge Cases

* Single row matrix
* Single column matrix
* Empty matrix (should be handled before processing)

---

## ✨ Concepts Used

* Matrix traversal
* Simulation technique
* Boundary shrinking
* Iterative logic


