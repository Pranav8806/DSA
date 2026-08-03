# Binary Tree Postorder Traversal

## Problem
Given the root of a binary tree, return the **postorder traversal** of its nodes' values.

In postorder traversal, nodes are visited in the following order:

**Left → Right → Root**

---

## Approach

This solution uses **Depth First Search (DFS)** with recursion.

A helper function `Traverse()` recursively visits the left subtree, then the right subtree, and finally processes the current node by storing its value in the result vector.

---

## Algorithm

1. If the current node is `NULL`, return.
2. Recursively traverse the left subtree.
3. Recursively traverse the right subtree.
4. Store the current node's value.
5. Return the result vector after the traversal is complete.


---

## Example

### Input

```text
    1
     \
      2
     /
    3
```

### Traversal

```text
Left → Right → Root

3 → 2 → 1
```

### Output

```text
[3,2,1]
```

---

## Complexity Analysis

- **Time Complexity:** `O(n)`
  - Every node is visited exactly once.

- **Space Complexity:** `O(h)`
  - `h` is the height of the tree due to the recursive call stack.
  - **Worst Case:** `O(n)` (skewed tree)
  - **Best/Average Case:** `O(log n)` (balanced tree)

---

## Key Concepts

- Binary Tree
- Depth First Search (DFS)
- Recursion
- Postorder Traversal

---

## Learning Outcome

Postorder traversal processes a node only after visiting both of its subtrees. This traversal is particularly useful for problems involving **deleting a tree, evaluating expression trees, and bottom-up computations**.