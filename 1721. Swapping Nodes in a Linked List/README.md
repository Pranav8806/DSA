# 🔄 Swap Nodes in Linked List (C++)

## 📌 Problem Statement

Given the head of a singly linked list and an integer `k`, swap the values of the **k-th node from the beginning** and the **k-th node from the end**, and return the modified list.

---

## 💡 Approach (Using Vector)

Instead of directly manipulating pointers in the linked list, we:

### 1. Convert Linked List → Vector

* Traverse the list and store all node values in a vector.

```cpp
vector<int> ans;
ListNode* temp = head;
while(temp != NULL){
    ans.push_back(temp->val);
    temp = temp->next;
}
```

---

### 2. Swap Required Elements

* Swap:

  * `(k-1)` index → k-th from start
  * `(n-k)` index → k-th from end

```cpp
if(k > ans.size()) return head;
swap(ans[k-1], ans[ans.size()-k]);
```

---

### 3. Convert Vector → Linked List

* Create a new linked list using swapped values.

```cpp
ListNode *nhead = new ListNode(ans[0]);
ListNode* temp2 = nhead;

for(int i = 1; i < ans.size(); i++){
    temp2->next = new ListNode(ans[i]);
    temp2 = temp2->next;
}


---

## ⚡ Time Complexity

* **O(n)** → traverse + rebuild

## 💾 Space Complexity

* **O(n)** → vector storage

---

## 🎯 Key Points

* Easy approach using extra space
* Avoids complex pointer manipulation
* Not optimal for space → can be improved to **O(1)**

---

## 🚀 Optimization Idea (Better Approach)

* Use two pointers:

  * First find k-th node from start
  * Then find k-th from end using two-pointer trick
* Swap values directly without extra space

---

## ⚠️ Notes

* This solution creates a **new linked list**
* Original list nodes are not reused (extra memory used)

---
