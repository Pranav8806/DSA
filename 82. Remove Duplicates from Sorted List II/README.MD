# Remove Duplicates from Sorted Linked List (II)

## 📌 Problem

Given the head of a **sorted singly linked list**, delete all nodes that have duplicate numbers, leaving only distinct numbers from the original list.

### Example:

* Input: `1 → 1 → 2 → 3 → 3`

* Output: `2`

* Input: `1 → 2 → 3 → 3 → 4 → 4 → 5`

* Output: `1 → 2 → 5`

---

## 💡 Approach

This solution uses a **dummy node technique** to simplify edge cases (especially when duplicates appear at the head).

### Key Idea:

* Traverse the list.
* If a duplicate sequence is found:

  * Remove **all occurrences** of that value.
* Otherwise:

  * Move forward normally.

---

## ⚙️ Algorithm Steps

1. **Edge Case Check**

   * If `head == NULL`, return `head`.

2. **Create Dummy Node**

   * Helps handle cases where the first few nodes are duplicates.
   * `dummy->next = head`

3. **Use Two Pointers**

   * `prev`: last node before duplicate sequence
   * `head`: current node

4. **Traverse the List**

   * If `head->val == head->next->val`:

     * Store duplicate value
     * Delete all nodes with that value
     * Link `prev->next` to the next valid node
   * Else:

     * Move `prev` forward

5. **Return Result**

   * Return `dummy->next`

---

## ⏱️ Complexity Analysis

* **Time Complexity:** `O(n)`
  Each node is visited once.

* **Space Complexity:** `O(1)`
  No extra space used (in-place deletion).

---

## 🚀 Key Concepts Used

* Dummy Node Technique
* Two Pointer Traversal
* Linked List Manipulation
* Memory Deallocation (`delete`)

