# 572. Subtree of Another Tree

## Problem Statement

Given the roots of two binary trees `root` and `subRoot`, return `true` if there is a subtree of `root` with the same structure and node values as `subRoot`, otherwise return `false`.

A subtree of a binary tree is a node in the tree and all of its descendants.

**LeetCode Link:** https://leetcode.com/problems/subtree-of-another-tree/

---

## Approach

The solution uses **Recursion (Depth-First Search)** and consists of two recursive functions:

### 1. `isIdentical()`
Checks whether two trees are exactly the same.

- If both nodes are `NULL`, return `true`.
- If one node is `NULL`, return `false`.
- Compare the current node values.
- Recursively compare the left and right subtrees.

### 2. `isSubtree()`
Traverses the main tree and checks every node as a potential root of the subtree.

- If the current node's value matches `subRoot`'s root value, call `isIdentical()`.
- If the trees are identical, return `true`.
- Otherwise, recursively search in the left and right subtrees.
- If no matching subtree is found, return `false`.

---

## Algorithm

1. Traverse every node of the main tree.
2. Whenever a node's value matches the root of `subRoot`, compare both trees using `isIdentical()`.
3. If they are identical, return `true`.
4. Otherwise, continue searching in the left and right subtrees.
5. Return `false` if no matching subtree exists.

---

## Dry Run

### Example

```
Root Tree

        3
       / \
      4   5
     / \
    1   2

SubRoot

      4
     / \
    1   2
```

### Execution

```
isSubtree(3,4)
│
├── Values differ
│
├── Search Left
│     isSubtree(4,4)
│     │
│     ├── Values match
│     ├── Call isIdentical()
│     │
│     ├── 4 == 4
│     ├── 1 == 1
│     ├── 2 == 2
│     └── All nodes match
│
└── Return true

---

## Complexity Analysis

### Time Complexity

- `isIdentical()` takes **O(m)**, where `m` is the number of nodes in `subRoot`.
- In the worst case, `isIdentical()` is called for every node in `root`.

**Overall Time Complexity:** **O(n × m)**

where:
- `n` = number of nodes in `root`
- `m` = number of nodes in `subRoot`

---

### Space Complexity

The recursion stack depends on the height of the trees.

**Space Complexity:** **O(h)**

where `h` is the height of the larger tree.

- Balanced Tree: **O(log n)**
- Skewed Tree: **O(n)**

---

## Key Concepts

- Binary Trees
- Recursion
- Depth-First Search (DFS)
- Tree Traversal
- Subtree Matching

---

## Takeaways

- Break complex tree problems into smaller recursive functions.
- Use one function to compare two trees (`isIdentical`) and another to traverse the main tree (`isSubtree`).
- Comparing trees recursively is a common pattern in binary tree problems.