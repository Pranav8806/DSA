# Rotate Image (Matrix Rotation by 90° Clockwise)

## 📌 Problem

You are given an `n × n` 2D matrix representing an image. Rotate the image by **90 degrees clockwise** in-place.

### Example:

**Input:**

```
1 2 3
4 5 6
7 8 9
```

**Output:**

```
7 4 1
8 5 2
9 6 3
```

---

## 💡 Approach

This solution rotates the matrix in **two steps**:

### 1️⃣ Transpose the Matrix

Convert rows into columns:

```
matrix[i][j] → matrix[j][i]
```

### 2️⃣ Reverse Each Row

After transpose, reverse every row to achieve 90° clockwise rotation.

---

## ⚙️ Algorithm Steps

1. Traverse only **upper triangle** (`j = i + 1`)
2. Swap elements:

   ```
   matrix[i][j] ↔ matrix[j][i]
   ```
3. Reverse each row using `reverse()`
---

## ⏱️ Complexity Analysis

* **Time Complexity:** `O(n²)`
  We traverse the matrix twice.

* **Space Complexity:** `O(1)`
  Rotation is done in-place (no extra space used).

---

## 🚀 Key Concepts Used

* Matrix Transpose
* In-place Swapping
* STL `reverse()` function

---

