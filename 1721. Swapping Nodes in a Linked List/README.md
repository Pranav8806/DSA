# Swapping Nodes in a Linked List

## Problem Statement
Given the head of a singly linked list and an integer `k`, swap the values of the `k`th node from the beginning and the `k`th node from the end, then return the head of the modified linked list.

**Note:** This implementation swaps the **values** of the nodes, not the nodes themselves.

---

## Approach

- Traverse the linked list to reach the `k`th node from the beginning and store its pointer.
- Use another pointer to continue to the end of the list.
- Simultaneously move a second pointer from the head.
- When the first pointer reaches the last node, the second pointer will be at the `k`th node from the end.
- Swap the values of the two nodes.
- Return the head.

This approach finds both required nodes in a single traversal after locating the `k`th node.

---

## Algorithm

1. Initialize `curr` to the head.
2. Move `curr` to the `k`th node from the beginning.
3. Store this node in `st`.
4. Initialize another pointer `ed` to the head.
5. Move both `curr` and `ed` together until `curr` reaches the last node.
6. Now `ed` points to the `k`th node from the end.
7. Swap `st->val` and `ed->val`.
8. Return the head.

---

## Complexity Analysis

- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`

---

## Example

**Input**

```text
head = [1,2,3,4,5], k = 2
```

**Output**

```text
[1,4,3,2,5]
```

**Explanation**

- 2nd node from the beginning = `2`
- 2nd node from the end = `4`
- Swapping their values results in:

```text
1 → 4 → 3 → 2 → 5
```

---

## Note

This solution swaps only the **values** stored in the nodes. If the problem requires swapping the actual nodes by modifying pointers without changing node values, a different pointer manipulation approach is needed.