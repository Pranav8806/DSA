# 🧹 Remove Duplicates from Sorted Linked List

## 📌 Problem Statement

Given the head of a **sorted linked list**, delete all duplicates such that each element appears only once.

Return the linked list **after removing duplicates**.

---

## 💡 Approach Used

This solution uses **in-place pointer manipulation** (optimal approach).

### Key Idea:

Since the list is **sorted**, duplicates will always be **adjacent**.

---

## 🧠 Logic Breakdown

* Traverse the linked list using a pointer (`temp`)
* Compare current node with next node:

  * If equal → remove the next node
  * Else → move forward

---

## 🔁 Example

**Input:**
`1 → 1 → 2 → 3 → 3`

**Process:**

* Remove duplicate `1`
* Remove duplicate `3`

**Output:**
`1 → 2 → 3`

---

## ⏱️ Time Complexity

* Traverses list once → **O(n)**

---

## 💾 Space Complexity

* No extra space used → **O(1)** ✅


## 🚀 Why This is Optimal

* No extra data structures used
* Deletes nodes directly
* Single pass traversal

