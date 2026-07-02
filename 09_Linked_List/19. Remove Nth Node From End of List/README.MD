# 📘 Remove Nth Node From End of List

## 🔹 Problem Statement

Given the head of a singly linked list, remove the **n-th node from the end** of the list and return its head.

---

## 🔹 Approach Used (Two Pass Method)

This solution follows a **two-pass approach**:

### ✅ Step 1: Find the size of the list

Traverse the linked list once to count the total number of nodes.

### ✅ Step 2: Identify node to delete

Compute the position from the start using:
position = size - n
Traverse again to reach the node just **before** the target node.

### ✅ Step 3: Delete the node

Update the links to skip the target node and remove it from memory.

---

## 🔹 Edge Cases Handled

* ✔ If the list is empty → return NULL
* ✔ If only one node exists and n = 1 → return NULL
* ✔ If n > size → return original list
* ✔ If deleting the head node (n == size)

---

## 🔹 Time & Space Complexity

| Metric | Complexity            |
| ------ | --------------------- |
| Time   | O(N) (two traversals) |
| Space  | O(1)                  |


