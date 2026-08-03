# 📈 Maximum Subarray

## 🔗 Problem Link  
https://leetcode.com/problems/maximum-subarray/

---

## 📌 Problem  

Given an integer array `nums`, find the contiguous subarray with the **largest sum** and return it.

---

## 💡 Approach (Kadane’s Algorithm)  

- Keep a running sum  
- Update maximum sum at each step  
- Reset sum to `0` if it becomes negative  

---

## ⚙️ Steps  

1. Initialize `sum = 0`, `maxSum = INT_MIN`  
2. Traverse array:
   - Add element to `sum`  
   - Update `maxSum`  
   - If `sum < 0`, reset to `0`  
3. Return `maxSum`

---

## ⏱️ Complexity  

- Time: O(n)  
- Space: O(1)  

---

## 📊 Example  

Input: `[-2,1,-3,4,-1,2,1,-5,4]`  
Output: `6`  

---