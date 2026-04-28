# 🗑️ Delete Node in a Linked List (C++)

## 📌 Problem Statement
Given a node in a singly linked list (not the head), delete that node from the list.

👉 You are **not given access to the head** of the list.

---

## 💡 Approach Used

Since we don’t have access to the previous node, we cannot delete the node directly in the usual way.

Instead, we:
1. Copy the value of the **next node** into the current node
2. Delete the **next node**

---

## 🧠 Key Idea

👉 Instead of deleting the given node, we make it **look like the next node**, then remove the next node.

---

## ⚙️ Algorithm Steps

1. Copy value of next node into current node  
2. Store next node in a temporary pointer  
3. Update current node’s next pointer to skip the next node  
4. Delete the temporary node  

---

## 🧪 Example

**Input:**

4 → 5 → 1 → 9
(node to delete = 5)


**Process:**

Copy 1 into 5 → list becomes: 4 → 1 → 1 → 9
Delete next node → final: 4 → 1 → 9


**Output:**

4 → 1 → 9


---

## ⏱️ Time Complexity
- **O(1)** → constant time operation  

## 📦 Space Complexity
- **O(1)** → no extra space used  