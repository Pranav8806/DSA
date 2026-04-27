# 🔁 Reverse Linked List II (C++)

## 📌 Problem Statement
Given the head of a singly linked list and two integers `left` and `right`,  
reverse the nodes of the list from position `left` to `right`, and return the modified list.

---

## 💡 Approach Used (Partial Reversal with Dummy Node)

This solution reverses only a **portion of the linked list** using an iterative approach.

We use:
- A **dummy node** to handle edge cases (especially when `left = 1`)
- Pointer manipulation to reverse the sublist
- Reconnection to restore the full list

---

## 🧠 Key Idea

Break the problem into 3 parts:

1. Traverse to node **before `left`**
2. Reverse nodes from `left` to `right`
3. Reconnect the reversed portion back to the list

---

## ⚙️ Algorithm Steps

1. Create a dummy node and point it to head  
2. Move `prevleft` to node just before position `left`  
3. Mark:
   - `temphead` → start of sublist (will become tail after reversal)  
4. Reverse nodes from `left` to `right`  
5. Reconnect:
   - `prevleft->next` → new head of reversed sublist  
   - `temphead->next` → node after `right`  
6. Return `dummy->next`

