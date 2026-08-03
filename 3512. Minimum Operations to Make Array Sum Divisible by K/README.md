# 📘 Minimum Operations to Make Sum Divisible by k

## 🔍 Problem

Given an array `nums` and an integer `k`, return the **minimum operations required** to make the **sum of the array divisible by `k`**.

---

## ⚙️ Approach

### 💡 Key Idea

* Compute total sum of array
* If `sum % k == 0` → already divisible → **0 operations needed**
* Otherwise → remainder tells how far we are from divisibility

---

## 🚀 Steps

### 1. Calculate sum

* Traverse array and add all elements

### 2. Compute remainder

* `remainder = sum % k`

### 3. Return result

* Minimum operations = `remainder`

---

## 🧠 Why it works

* To make sum divisible by `k`, we need to **remove or adjust remainder**
* The remainder represents the **extra amount beyond nearest multiple of k**

---

## ⏱️ Complexity

* Time: **O(n)**
* Space: **O(1)**

---

## 📌 Example

Input:
nums = [3, 1, 4, 2], k = 6

Step:
sum = 10
10 % 6 = 4

Output:
4

