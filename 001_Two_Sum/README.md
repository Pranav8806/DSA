# Two Sum

## 🔗 Problem Link

https://leetcode.com/problems/two-sum/

---

## 📌 Problem Statement

Given an array of integers `nums` and an integer `target`, return the indices of two numbers such that they add up to the target.

* Each input has exactly one solution
* You may not use the same element twice
* Return the answer in any order

---

## 💡 Approach

* Use a **hash map** to store elements and their indices
* Traverse the array once
* For each element:

  * Calculate the required complement (`target - current element`)
  * Check if the complement already exists
  * If yes → solution found
* Otherwise, store the current element with its index

---

## ⚙️ Algorithm

1. Initialize an empty hash map
2. Traverse the array
3. For each element:

   * Compute complement
   * If complement exists → return indices
   * Else → store current element
4. Return result

---

## ⏱️ Time Complexity

**O(n)** — Single traversal of the array

## 🧠 Space Complexity

**O(n)** — Extra space for hash map

---

## 🏷️ Tags

* Array
* Hash Table

## 📊 Difficulty

Easy
