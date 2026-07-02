# 🧮 Majority Element

## 🔗 Problem Link  
https://leetcode.com/problems/majority-element/

---

## 📌 Problem  

Given an array `nums`, find the element that appears **more than ⌊n/2⌋ times**.

---

## 💡 Approach (Brute Force)  

- For each element, count its frequency in the array  
- If any element appears more than `n/2` times, return it  

---

## ⚙️ Steps  

1. Traverse each element  
2. Count its occurrences using a nested loop  
3. If frequency > `n/2`, return that element  

---

## ⏱️ Complexity  

- Time: O(n²)  
- Space: O(1)  

---

## 📊 Example  

Input: `[2,2,1,1,1,2,2]`  
Output: `2`  

---