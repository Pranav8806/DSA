# 📦 Container With Most Water

## 🔗 Problem Link  
https://leetcode.com/problems/container-with-most-water/

---

## 📌 Problem Statement  

Given an array `height` of non-negative integers, where each element represents the height of a vertical line drawn at that index.

Find two lines such that together with the x-axis they form a container that holds the **maximum amount of water**.

👉 Return the maximum area of water a container can store.

---

## 💡 Approach (Two Pointer Technique)

- Start with two pointers:
  - `lp` (left pointer) at the beginning
  - `rp` (right pointer) at the end
- At each step:
  - Calculate width = `rp - lp`
  - Find height = `min(height[lp], height[rp])`
  - Compute area = `width × height`
  - Update maximum area if needed
- Move the pointer pointing to the **smaller height**:
  - Because moving the taller one won’t increase area

---

## ⚙️ Key Insight  

The area is limited by the **shorter line**, so to potentially increase area:
- Move the pointer at the smaller height
- Try to find a taller line

---

## 🧠 Algorithm Steps  

1. Initialize two pointers (`lp = 0`, `rp = n - 1`)
2. While `lp < rp`:
   - Calculate area
   - Update maximum area
   - Move pointer with smaller height
3. Return the maximum area

---

## ⏱️ Complexity Analysis  

- **Time Complexity:** `O(n)`  
  - Each element is visited at most once  

- **Space Complexity:** `O(1)`  
  - No extra space used  

---

## 🚀 Example  

Input: height = [1,8,6,2,5,4,8,3,7]  
Output: 49  

👉 Best container is formed between heights `8` and `7` with width `7`  
👉 Area = `7 × 7 = 49`

---

## 📚 Concepts Used  

- Two Pointers  
- Greedy Approach  
- Array Traversal  