# 🔄 Swap Nodes in Pairs (Linked List)

## 📌 Problem Statement

Given a singly linked list, swap every two adjacent nodes and return the modified list.

You must **not modify node values directly** (though this solution does for simplicity), but instead swap nodes logically.

---

## 💡 Approach Used

This solution follows a **brute-force approach using an array (vector)**:

### Steps:

1. Traverse the linked list and store all node values in a vector.
2. Swap adjacent elements in the vector (i.e., swap `i` and `i+1`).
3. Create a new linked list using the modified vector.
4. Return the new head.

---

## 🧠 Logic Breakdown

* Extract values → `[1, 2, 3, 4]`
* Swap pairs → `[2, 1, 4, 3]`
* Rebuild linked list → `2 → 1 → 4 → 3`

---

## ⏱️ Time Complexity

* Traversing list: `O(n)`
* Swapping elements: `O(n)`
* Rebuilding list: `O(n)`

👉 **Overall:** `O(n)`

---

## 💾 Space Complexity

* Extra vector used: `O(n)`

---

## ⚠️ Drawbacks

* Uses extra space (not optimal).
* Doesn't follow in-place swapping (which is expected in interviews).

---

## 🚀 Optimal Approach (Hint)

Instead of using extra space:

* Use pointer manipulation
* Swap nodes directly
* Maintain `prev`, `first`, `second` pointers

👉 This gives:

* **Time:** `O(n)`
* **Space:** `O(1)`

---

## 📚 When to Use This Approach

* When learning basics of linked list manipulation
* When constraints are small
* When simplicity > optimization

---

## 🏁 Conclusion

This solution is simple and easy to understand but not optimal. For interviews, prefer the **in-place pointer swapping approach**.

---

If you want, I can also give you the **optimal O(1) space solution** 👀
