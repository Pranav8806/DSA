# Binary Tree Preorder Traversal (Recursive)

## Problem Statement

Given the `root` of a binary tree, return the preorder traversal of its nodes' values.

**Preorder Traversal Order:** `Root → Left → Right`

---

## Approach

This solution uses **Depth-First Search (DFS)** with recursion.

A helper function `preorder()` is used to traverse the tree recursively.

### Algorithm

1. If the current node is `NULL`, return.
2. Visit the current node and add its value to the answer vector.
3. Recursively traverse the left subtree.
4. Recursively traverse the right subtree.
5. Return the resulting traversal.

---

## Dry Run

For the following tree:

```text
      1
     / \
    2   3
   / \
  4   5
```

Traversal order:

```text
Visit 1
↓
Visit 2
↓
Visit 4
↓
Backtrack
↓
Visit 5
↓
Backtrack
↓
Visit 3
```

Output:

```text
[1, 2, 4, 5, 3]
```

---

## Complexity Analysis

* **Time Complexity:** `O(n)`

  * Every node is visited exactly once.

* **Space Complexity:** `O(h)`

  * `h` is the height of the tree.
  * **Best Case (Balanced Tree):** `O(log n)`
  * **Worst Case (Skewed Tree):** `O(n)`

---

## Key Concepts

* Binary Tree
* Depth-First Search (DFS)
* Recursion
* Preorder Traversal


