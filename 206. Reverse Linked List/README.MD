# 🔁 Reverse Linked List (C++)

## 📌 Problem Statement
Given the head of a singly linked list, reverse the list and return the new head.

---

## 💡 Approach Used (Iterative Method)

This solution uses an **iterative approach** with three pointers:
- `currptr` → current node being processed
- `prev` → previous node (initially NULL)
- `temp` → stores next node temporarily

---

## 🧠 Key Idea

At each step:
1. Store the next node
2. Reverse the link
3. Move pointers forward

👉 We reverse the direction of each node one by one.

---

## ⚙️ Algorithm Steps

1. Initialize:
   - `currptr = head`
   - `prev = NULL`
2. Traverse the list:
   - Save next node → `temp = currptr->next`
   - Reverse link → `currptr->next = prev`
   - Move `prev` → `prev = currptr`
   - Move `currptr` → `currptr = temp`
3. When loop ends:
   - `prev` becomes new head
