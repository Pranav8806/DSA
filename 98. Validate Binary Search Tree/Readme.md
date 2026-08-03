# 98. Validate Binary Search Tree

## Problem Statement

Given the `root` of a binary tree, determine whether it is a **valid Binary Search Tree (BST)**.

A BST satisfies the following conditions:

- The left subtree of a node contains only nodes with values **less than** the node's value.
- The right subtree of a node contains only nodes with values **greater than** the node's value.
- Both the left and right subtrees must also be valid BSTs.

---

## Approach

This solution uses **recursion with lower and upper bounds** to validate every node.

For each node:

- `mn` represents the **minimum allowed ancestor** (lower bound).
- `mx` represents the **maximum allowed ancestor** (upper bound).

A node is valid only if:

```
mn < node->val < mx
```

While traversing:

- Move to the **left child** → update the upper bound to the current node.
- Move to the **right child** → update the lower bound to the current node.

If any node violates these bounds, the tree is **not** a BST.

---

## Algorithm

1. If the current node is `NULL`, return `true`.
2. Check whether the node violates the lower bound (`mn`).
3. Check whether the node violates the upper bound (`mx`).
4. Recursively validate:
   - Left subtree with the current node as the new upper bound.
   - Right subtree with the current node as the new lower bound.
5. Return `true` only if both subtrees are valid.

---

## Dry Run

Example:

```
        5
       / \
      3   7
         /
        4
```

Checking node `4`:

```
Lower Bound = 5
Upper Bound = 7
```

Condition:

```
5 < 4 < 7
```

Since `4 <= 5`, the condition fails.

Therefore, the tree is **not** a valid BST.

---

## Complexity Analysis

- **Time Complexity:** `O(n)`
  - Every node is visited exactly once.

- **Space Complexity:** `O(h)`
  - `h` is the height of the tree due to the recursion stack.
  - Worst case: `O(n)` (skewed tree)
  - Best case: `O(log n)` (balanced tree)

---

## Key Concepts

- Binary Search Tree (BST)
- Recursion
- Tree Traversal
- Lower & Upper Bounds
- Depth-First Search (DFS)


---

## Tags

- Binary Tree
- Binary Search Tree
- DFS
- Recursion
- Tree Traversal
- LeetCode 98
```