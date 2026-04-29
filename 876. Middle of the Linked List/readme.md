# 🐢⚡ Find Middle of Linked List (C++)

## 📌 Problem Statement

Given the head of a singly linked list, return the **middle node** of the list.

* If there are **two middle nodes**, return the **second middle node**.

---

## 💡 Approach (Slow & Fast Pointer)

This is the most optimal and commonly used approach.

### 🔹 Idea

* Use two pointers:

  * **slow** → moves 1 step at a time
  * **fast** → moves 2 steps at a time
* When `fast` reaches the end, `slow` will be at the middle.

---

## 🔁 Traversal Logic

```cpp
ListNode *slow = head;
ListNode *fast = head;

while(fast != NULL && fast->next != NULL){
    slow = slow->next;
    fast = fast->next->next;
}


---

## ⚡ Time Complexity

* **O(n)** → single traversal

## 💾 Space Complexity

* **O(1)** → no extra space

---

## 🎯 Key Points

* Known as **Tortoise and Hare Algorithm**
* Works in **one pass**
* Automatically handles:

  * Odd length → exact middle
  * Even length → second middle

---

## 🧠 Example

### Input:

```
1 → 2 → 3 → 4 → 5
```

### Output:

```
3
```

### Input:

```
1 → 2 → 3 → 4 → 5 → 6
```

### Output:

```
4   (second middle)
```

---

## 🚀 Why This is Important

* Frequently asked in interviews
* Foundation for:

  * Detecting cycles
  * Finding intersection of lists
  * Splitting linked lists

---
