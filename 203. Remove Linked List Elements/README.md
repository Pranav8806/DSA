    # 🧹 Remove Elements from Linked List (C++)

## 📌 Problem Statement

Given the head of a singly linked list and an integer `val`, remove all nodes from the list that have `Node.val == val` and return the new head.

---

## 💡 Approach

### 1. Remove nodes from the beginning (head)

If the head itself contains the target value, keep deleting it until the head becomes valid.

```cpp
while(head != NULL && head->val == val){
    ListNode *temp = head;
    head = head->next;
    delete temp;
}
```

---

### 2. Traverse and remove remaining nodes

Use a pointer to check the next node. If it matches the value, delete it and reconnect the list.

```cpp
ListNode *temp = head;
while(temp != NULL && temp->next != NULL){
    if(temp->next->val == val){
        ListNode *del = temp->next;
        temp->next = temp->next->next;
        delete del;
    } else {
        temp = temp->next;
    }
}

---

## ⚡ Time Complexity

* **O(n)** — traverse the list once

## 💾 Space Complexity

* **O(1)** — no extra space used

---

## 🎯 Key Points

* Always handle **head deletion separately**
* Use `temp->next` to safely delete nodes
* Free memory using `delete` to avoid leaks

---
