# Swap Nodes in Pairs

## Problem Statement
Given the head of a singly linked list, swap every two adjacent nodes and return its head.

**Note:** This implementation swaps the **values** of adjacent nodes instead of modifying the node links.

---

## Approach

- If the linked list is empty or contains only one node, return the head.
- Traverse the linked list using a pointer.
- For every pair of adjacent nodes:
  - Swap their values using `swap()`.
  - Move the pointer two nodes ahead.
- Continue until there are fewer than two nodes remaining.

This approach is simple and avoids manipulating pointers.

---

## Algorithm

1. Check if the list is empty or has only one node.
2. Initialize a pointer `temp` to the head.
3. While `temp` and `temp->next` are not `NULL`:
   - Swap `temp->val` and `temp->next->val`.
   - Move `temp = temp->next->next`.
4. Return the head.

---

## Complexity Analysis

- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`

---

## Example

**Input**

```text
1 -> 2 -> 3 -> 4
```

**Output**

```text
2 -> 1 -> 4 -> 3
```

---

## Note

This solution **swaps node values**, not the actual nodes. If the problem explicitly requires swapping the nodes by changing pointers and **without modifying node values**, a different pointer-based approach should be used.