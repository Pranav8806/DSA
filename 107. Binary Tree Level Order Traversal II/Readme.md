# Binary Tree Level Order Traversal II

## Problem

Given the root of a binary tree, return the **bottom-up level order traversal** of its nodes' values.

Unlike the standard level order traversal, the levels are returned from the **lowest level to the root**.

---

## Approach

This solution uses **Breadth-First Search (BFS)** with a queue.

1. Perform a normal level order traversal.
2. Store each level in a result vector.
3. Reverse the result vector to obtain the levels from bottom to top.

---

## Algorithm

1. If the tree is empty, return an empty result.
2. Create a queue and insert the root node.
3. While the queue is not empty:
   - Store the current queue size (`n`).
   - Create a vector to store the current level.
   - Process all `n` nodes:
     - Remove the front node.
     - Store its value.
     - Push its left child if it exists.
     - Push its right child if it exists.
   - Add the current level to the result.
4. Reverse the result vector.
5. Return the reversed result.


---

## Example

### Input

```text
        3
       / \
      9   20
         /  \
        15   7
```

### Normal Level Order

```text
[
  [3],
  [9, 20],
  [15, 7]
]
```

### After Reversing

```text
[
  [15, 7],
  [9, 20],
  [3]
]
```

---

## Dry Run

### Initial Queue

```text
[3]
```

### Level 0

- Process node `3`
- Queue becomes:

```text
[9, 20]
```

Result:

```text
[[3]]
```

---

### Level 1

- Process nodes `9` and `20`
- Queue becomes:

```text
[15, 7]
```

Result:

```text
[[3], [9,20]]
```

---

### Level 2

- Process nodes `15` and `7`

Result before reversing:

```text
[[3], [9,20], [15,7]]
```

After reversing:

```text
[[15,7], [9,20], [3]]
```

---

## Complexity Analysis

- **Time Complexity:** `O(n)`
  - Each node is visited exactly once during BFS.
  - Reversing the result takes `O(L)`, where `L` is the number of levels (`L ≤ n`).
  - Overall complexity remains `O(n)`.

- **Space Complexity:** `O(n)`
  - The queue stores nodes during traversal.
  - The result vector stores all node values.

---

## Key Concepts

- Binary Tree
- Breadth-First Search (BFS)
- Queue
- Level Order Traversal
- Vector Reversal

---

## Learning Outcome

This problem extends the standard **Level Order Traversal** by returning the levels in reverse order. A simple and efficient approach is to perform a normal BFS traversal, store each level, and reverse the final result. This avoids the complexity of inserting levels at the beginning of the result vector during traversal.