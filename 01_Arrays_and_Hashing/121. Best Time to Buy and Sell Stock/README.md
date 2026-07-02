# 📈 Best Time to Buy and Sell Stock

## 🔗 Problem Link  
https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

---

## 📌 Problem Statement  

You are given an array `prices` where `prices[i]` is the price of a stock on the `i-th` day.

You want to maximize your profit by choosing:
- One day to **buy** a stock  
- A different day in the future to **sell** that stock  

Return the **maximum profit** you can achieve. If no profit is possible, return `0`.

---

## 💡 Approach  

This solution uses a **single-pass greedy approach**.

### ⚡ Key Idea:

- Keep track of the **minimum price (best buy)** seen so far  
- For each day:
  - Calculate profit if sold today  
  - Update maximum profit  

---

## 🚀 Algorithm  

1. Initialize:
   - `bestbuy = prices[0]`
   - `maxProfit = 0`

2. Traverse the array:
   - If current price > bestbuy:
     - Calculate profit = `price - bestbuy`
     - Update maximum profit  
   - Update `bestbuy` as minimum of current price and previous bestbuy  

3. Return `maxProfit`

---

## ⏱️ Complexity Analysis  

- **Time Complexity:** O(n)  
- **Space Complexity:** O(1)  

---

## 🧠 Key Concepts  

- Greedy Algorithm  
- One-pass traversal  
- Tracking minimum value  
- Profit maximization  

---

## ⚠️ Edge Cases  

- Prices always decreasing → return `0`  
- Only one day → no transaction possible  
- All prices same → profit = `0`  

---

## 📚 Example  

Input:
prices = [7,1,5,3,6,4]


Output:
5


Explanation:
- Buy at price `1`
- Sell at price `6`
- Profit = `6 - 1 = 5`

---

## 📚 Summary  

By tracking the minimum buying price and calculating profit at each