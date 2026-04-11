# 🔢 Power Function (xⁿ)

## 🔗 Problem Link  
https://leetcode.com/problems/powx-n/

---

## 📌 Problem Statement  

Implement a function to calculate **x raised to the power n (xⁿ)**.

- The function should handle:
  - Positive powers  
  - Negative powers  
  - Zero exponent  

---

## 💡 Approach  

This solution uses **Binary Exponentiation (Fast Power Algorithm)** to efficiently compute the result.

### ⚡ Key Ideas:

- Instead of multiplying `x` repeatedly `n` times:
  - If `n` is even →  
    xⁿ = (x²)ⁿ⁄²  
  - If `n` is odd →  
    xⁿ = x × (x²)ⁿ⁄²  

- For negative powers:
  - x⁻ⁿ = 1 / xⁿ  

---

## 🚀 Algorithm  

1. Initialize `ans = 1`  
2. If `x == 1` or `n == 0`, return `1`  
3. If `n < 0`:
   - Set `x = 1 / x`
   - Convert `n` to positive  
4. While `n > 0`:
   - If `n` is odd → `ans = ans * x`
   - Update `x = x * x`
   - Update `n = n / 2`  
5. Return `ans`  

---

## ⏱️ Complexity Analysis  

- **Time Complexity:** O(log n)  
- **Space Complexity:** O(1)  

---

## 🧠 Key Concepts  

- Binary Exponentiation  
- Fast Power Algorithm  
- Handling Negative Exponents  
- Iterative Optimization  

---

## ⚠️ Edge Cases  

- `n = 0` → result is `1`  
- `x = 1` → result is `1`  
- Negative exponent values  
- Large values of `n`  

---

## 📚 Summary  

This optimized approach reduces time complexity from O(n) to O(log n) by repeatedly squaring the base and halving the exponent, making it efficient for large inputs.