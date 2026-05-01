# 🗑️ Delete the Middle Node of a Linked List

## 📌 Problem Statement

Given the head of a singly linked list, delete the **middle node** and return the modified list.

👉 If the list has:

* **n nodes**, the middle is the **⌊n / 2⌋ index (0-based)**
* If only **1 node**, return `NULL`

---

## 💡 Approach Used (Fast & Slow Pointer)

This solution uses the **two-pointer technique**:

* `slow` → moves **1 step**
* `fast` → moves **2 steps**

👉 When `fast` reaches the end,
👉 `slow` will be at the **node just before the middle**

---

## 🧠 Logic Breakdown

1. Handle edge case:

   * If list has 0 or 1 node → return `NULL`
2. Initialize:

   * `slow = head`
   * `fast = head->next->next`
3. Traverse:

   * Move `slow` by 1
   * Move `fast` by 2
4. Delete:

   * `slow->next = slow->next->next`

---

## 🔁 Example

### Input

`1 → 3 → 4 → 7 → 1 → 2 → 6`

### Process

Middle node = `7`

### Output

`1 → 3 → 4 → 1 → 2 → 6`

---

## ⏱️ Time Complexity

* Single traversal → **O(n)**

---

## 💾 Space Complexity

* No extra space → **O(1)** ✅



