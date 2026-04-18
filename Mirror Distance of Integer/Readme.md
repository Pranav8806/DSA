# 🔁 Mirror Distance of an Integer

This project explains how to compute the **mirror distance** of an integer.

---

## 📌 Problem Statement

Given an integer `n`, calculate the **absolute difference** between the number and its **reversed (mirror) form**.

---

## 🧾 Example

**Input:**

```
n = 123
```

**Output:**

```
198
```

**Explanation:**

* Reverse of `123` → `321`
* Mirror Distance → `|123 - 321| = 198`

---

## 🚀 Approach

The solution follows two main steps:

### 1. Reverse the Number

* Extract digits using modulo (`% 10`)
* Build the reversed number by multiplying previous result by 10 and adding the digit

### 2. Compute Distance

* Take the **absolute difference** between:

  * Original number
  * Reversed number

---

## ⏱️ Time Complexity

**O(d)**

* Where `d` is the number of digits in the number
* Each digit is processed exactly once

---

## 🧠 Space Complexity

**O(1)**

* No extra space is used apart from a few variables

---

## 📊 Key Observations

* The reversal process is similar to standard integer reversal
* Absolute difference ensures result is always non-negative
* Works for both positive and negative numbers (with proper handling)

---

## ⚠️ Edge Cases

* Single digit numbers → distance = 0
* Numbers ending with zero → reversed number loses leading zeros

  * Example: `120 → 21`
* Very large numbers → must handle overflow carefully

---

## ✨ Concepts Used

* Arithmetic operations
* Digit extraction
* Number reversal
* Absolute value calculation

---

## 🏁 Author

Pranav Sharma
