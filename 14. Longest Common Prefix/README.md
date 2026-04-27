# 📘 Longest Common Prefix (C++)

## 📌 Problem Statement
Given a vector of strings, find the **longest common prefix** among all strings.  
If there is no common prefix, return an empty string `""`.

---

## 💡 Approach Used (Sorting Method)

This solution uses a **sorting-based optimization**:

1. Sort the array of strings lexicographically.
2. Compare only:
   - The **first string** (smallest)
   - The **last string** (largest)
3. The common prefix between these two represents the common prefix of the whole array.

---

## 🧠 Key Insight
After sorting:
- Strings with maximum difference come to extremes.
- If a prefix is common across all strings, it **must** be common between the first and last strings.

---

## ⚙️ Algorithm Steps

1. Sort the vector of strings.
2. Store:
   - First string → `firstwrd`
   - Last string → `lastwrd`
3. Compare characters one by one.
4. Stop when mismatch occurs.
5. Build prefix using matching characters.

