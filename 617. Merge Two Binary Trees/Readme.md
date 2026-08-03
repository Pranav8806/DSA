# Merge Two Binary Trees

## Problem Statement

Given two binary trees `root1` and `root2`, merge them into a new binary tree.

- If two nodes overlap, their values are summed.
- If only one node exists at a position, that node is used directly in the merged tree.

Return the root of the merged binary tree.

---

## Approach

This solution uses **Depth-First Search (DFS)** with recursion.

1. If both nodes are `NULL`, return `NULL`.
2. If one node is `NULL`, return the other node.
3. Create a new node whose value is the sum of the corresponding nodes.
4. Recursively merge the left children.
5. Recursively merge the right children.
6. Return the newly created merged tree.

---

## Algorithm

1. Check the base cases:
   - Both nodes are `NULL` → return `NULL`.
   - One node is `NULL` → return the other node.
2. Create a new node with value:
   ```
   root1->val + root2->val
   ```
3. Merge the left subtrees recursively.
4. Merge the right subtrees recursively.
5. Return the merged tree.

---

## Complexity Analysis

- **Time Complexity:** `O(n)`
  - Every node is visited exactly once.
  - `n` is the total number of nodes present in both trees.

- **Space Complexity:** `O(h)`
  - `h` is the height of the tree due to the recursion stack.
  - Worst Case: `O(n)` (Skewed Tree)
  - Best Case: `O(log n)` (Balanced Tree)

---

## Dry Run

### Tree 1

```text
    1
   / \
  3   2
 /
5
```

### Tree 2

```text
    2
   / \
  1   3
   \   \
    4   7
```

### Merged Tree

```text
      3
     / \
    4   5
   / \   \
  5   4   7
```


---

## Key Concepts

- Binary Tree
- Depth-First Search (DFS)
- Recursion
- Tree Traversal

---

**LeetCode Difficulty:** Easy