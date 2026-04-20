# 🔍 Search in Rotated Sorted Array

This project explains how to efficiently search for a target element in a **rotated sorted array** using a modified binary search approach.

---

## 📌 Problem Statement

Given a sorted array that has been **rotated at some pivot**, and a target value, return the index of the target if found. Otherwise, return `-1`.

---

## 🧾 Example

Input:

nums = [4, 5, 6, 7, 0, 1, 2], target = 0

Output:

4

## 🚀 Approach

We use a **modified Binary Search** to handle the rotation.

### Key Idea:

At any point, **at least one half of the array is always sorted**.

---

## 🔄 Steps

1. Find the middle element
2. If it matches the target → return index
3. Check which half is sorted:

### ✅ Left Half Sorted

* If target lies within this range → search left
* Otherwise → search right

### ✅ Right Half Sorted

* If target lies within this range → search right
* Otherwise → search left

Repeat until the target is found or search space becomes empty.

---

## ⏱️ Time Complexity

**O(log n)**

* Binary search reduces the search space by half each time

---

## 🧠 Space Complexity

**O(1)**

* No extra space is used

---

## 📊 Key Observations

* Even after rotation, one side of the array remains sorted
* This property allows us to eliminate half of the search space every iteration
* Much faster than linear search (**O(n)**)

---

## ⚠️ Edge Cases

* Target not present → return `-1`
* Array of size 1
* No rotation (normal sorted array)
* Rotation at index 0 (same as sorted array)

---

## ✨ Concepts Used

* Binary Search
* Array manipulation
* Conditional logic
* Divide and conquer

