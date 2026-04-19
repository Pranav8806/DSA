# 📌 Maximum Distance Between a Pair of Values

## 🧩 Problem

Given two **non-increasing arrays** `nums1` and `nums2`, find the maximum distance `(j - i)` such that:

* `i <= j`
* `nums1[i] <= nums2[j]`

---

## 💡 Approach (Two Pointers)

We use a **two-pointer technique** to efficiently compute the result in linear time.

### 🔹 Key Idea

* Start with two pointers `i = 0` and `j = 0`
* Traverse both arrays:

  * If `nums1[i] <= nums2[j]`, update the answer and move `j` forward
  * Otherwise, move `i` forward

---

## ⚡ Algorithm

1. Initialize:

   * `i = 0`, `j = 0`, `maxDistance = 0`
2. While both pointers are within bounds:

   * If condition satisfied → update `maxDistance`
   * Else → increment `i`
3. Return `maxDistance`


## ⏱ Complexity Analysis

* **Time Complexity:** `O(n + m)`
* **Space Complexity:** `O(1)`

---

## 🧠 Why It Works

* Arrays are **non-increasing**, so:

  * If `nums1[i] > nums2[j]`, moving `j` forward won’t help
  * We must increase `i`
* If valid, we expand `j` to maximize distance

---

## 🔍 Example

```
nums1 = [4, 3, 2]
nums2 = [5, 3, 3, 2]

Valid pairs:
(0,0), (0,1), (1,2), (2,3)

Maximum distance = 1
```

---

## 🚀 Summary

* Efficient two-pointer solution
* Linear time complexity
* Works due to sorted (non-increasing) property


