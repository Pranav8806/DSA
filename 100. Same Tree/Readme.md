# 100. Same Tree

## Problem Statement

Given the roots of two binary trees `p` and `q`, determine whether they are the same.

Two binary trees are considered the same if they are:
- Structurally identical.
- Every corresponding node has the same value.

**LeetCode Link:** https://leetcode.com/problems/same-tree/

---

## Approach

This problem is solved using **Recursion (Depth-First Search)**.

### Algorithm

1. If both nodes are `NULL`, return `true` because two empty trees are identical.
2. If only one node is `NULL`, return `false`.
3. Compare the values of the current nodes.
   - If they are different, return `false`.
4. Recursively compare:
   - Left subtree of both trees.
   - Right subtree of both trees.
5. Return `true` only if both left and right subtrees are identical.

---

## Dry Run

### Example

```
Tree 1           Tree 2

    1               1
   / \             / \
  2   3           2   3
```

```
isSameTree(1,1)
│
├── Values are equal
│
├── Compare Left
│     isSameTree(2,2)
│       ├── Values equal
│       ├── Left -> NULL,NULL → true
│       └── Right -> NULL,NULL → true
│
└── Compare Right
      isSameTree(3,3)
        ├── Values equal
        ├── Left -> NULL,NULL → true
        └── Right -> NULL,NULL → true

Result = true && true = true
```

---

## Complexity Analysis

- **Time Complexity:** **O(n)**
  - Each node is visited exactly once.

- **Space Complexity:** **O(h)**
  - `h` is the height of the tree due to the recursion stack.
  - **Best Case (Balanced Tree):** `O(log n)`
  - **Worst Case (Skewed Tree):** `O(n)`

---

## Key Concepts

- Binary Trees
- Recursion
- Depth-First Search (DFS)
- Tree Traversal

---

## Takeaways

- Always handle base cases before accessing node values.
- Check both structure and node values.
- Recursive tree problems often follow the pattern:
  - Handle base cases.
  - Process the current node.
  - Recursively solve left and right subtrees.