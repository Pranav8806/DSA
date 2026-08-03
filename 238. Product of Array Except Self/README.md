# 📦 Product of Array Except Self

## 🔗 Problem Link  
https://leetcode.com/problems/product-of-array-except-self/

---

## 📌 Problem Statement  

Given an integer array `nums`, return an array `answer` such that:

- `answer[i]` is equal to the product of all elements of `nums` except `nums[i]`
- You must solve it **without using division**
- The solution should run in **O(n) time**

---

## 💡 Approach (Prefix & Suffix Product)

- Instead of division, use:
  - **Prefix product** → product of elements before index `i`
  - **Suffix product** → product of elements after index `i`

### Step-by-step:
1. Create an array `answer` initialized with `1`
2. Traverse left to right:
   - Store prefix product in `answer[i]`
3. Traverse right to left:
   - Maintain a variable `suffix`
   - Multiply `answer[i]` with suffix product

---

## ⚙️ Key Insight  

For each index `i`:

- Result = (product of elements before `i`) × (product of elements after `i`)

👉 This avoids division and keeps space efficient

---

## 🧠 Algorithm Steps  

1. Initialize `answer` array with 1s  
2. Fill prefix products:
   - `answer[i] = answer[i-1] * nums[i-1]`
3. Traverse from right:
   - Keep updating suffix product
   - Multiply with `answer[i]`
4. Return final array

---

## ⏱️ Complexity Analysis  

- **Time Complexity:** `O(n)`  
- **Space Complexity:** `O(1)` (excluding output array)

---

## 🚀 Example  

Input: nums = [1,2,3,4]  
Output: [24,12,8,6]  

Explanation:  
- For index 0 → 2×3×4 = 24  
- For index 1 → 1×3×4 = 12  
- For index 2 → 1×2×4 = 8  
- For index 3 → 1×2×3 = 6  

---

## 📚 Concepts Used  

- Prefix Sum / Product  
- Array Traversal  
- Space Optimization  
- Two Pass Technique  