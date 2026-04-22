# 📘 myAtoi (String to Integer Conversion)

## 🔍 Problem

Convert a string into a 32-bit signed integer (like C/C++ `atoi`).

---

## ⚙️ Approach

### 1. Initialize variables

* `num` → stores result (use long long to avoid overflow)
* `sign` → stores sign (+1 or -1)
* `i` → index pointer

### 2. Edge check

* If string starts with an alphabet → return 0

### 3. Skip leading spaces

* Ignore all spaces before actual number

### 4. Handle sign

* If `'-'` → sign = -1
* If `'+'` → sign = +1

### 5. Convert digits

* Read characters while they are digits (`0–9`)
* Update number:
  num = num * 10 + digit

### 6. Handle overflow

* If value exceeds:

  * `INT_MAX (2147483647)` → return INT_MAX
  * `INT_MIN (-2147483648)` → return INT_MIN

### 7. Return result

* Return `sign * num`

---

## 🧠 Key Points

* Stops reading at first non-digit character
* Handles spaces and sign correctly
* Uses long long to prevent overflow
* Works for edge cases

---

## 📌 Example

Input: `"   -42abc"`
Output: `-42`

---

## ⚠️ Note

The check:
`if (!s.empty() && isalpha(s[0])) return 0;`

is optional and can be removed because the loop already handles such cases.

---
