# Morris Traversal (Inorder Traversal in O(1) Space) – C++

## Problem Statement

Implement the Morris Inorder Traversal of a Binary Tree without using recursion or an auxiliary stack. The algorithm performs an inorder traversal in `O(n)` time and `O(1)` extra space by temporarily modifying the tree structure and restoring it afterward.

## Approach

Morris Traversal uses the concept of an **inorder predecessor**.

For every node:

1. If the left child is `NULL`, print the current node and move to its right child.
2. Otherwise, find its inorder predecessor (the rightmost node in its left subtree).
3. If the predecessor's right pointer is `NULL`, create a temporary thread to the current node and move to the left subtree.
4. If the thread already exists, remove it, print the current node, and move to the right subtree.

The original tree structure is restored after traversal.

## Algorithm

* Initialize `curr` as the root node.
* Traverse until `curr == NULL`.
* If `curr->left == NULL`:

  * Print the node.
  * Move to `curr->right`.
* Else:

  * Find the inorder predecessor.
  * If the thread does not exist:

    * Create the thread.
    * Move to the left subtree.
  * Otherwise:

    * Remove the thread.
    * Print the current node.
    * Move to the right subtree.

## Example

### Input Tree

```text
        1
       / \
      2   3
         / \
        4   5
```

### Preorder Representation

```text
{1,2,-1,-1,3,4,-1,-1,5,-1,-1}
```

### Inorder Traversal

```text
2 1 4 3 5
```

## Complexity Analysis

| Complexity       | Value |
| ---------------- | ----- |
| Time Complexity  | O(n)  |
| Space Complexity | O(1)  |

* Every edge is traversed at most twice.
* No recursion or stack is used.
* The binary tree is restored after traversal.

## Concepts Used

* Binary Trees
* Inorder Traversal
* Morris Traversal
* Threaded Binary Trees
* Pointer Manipulation
* Space Optimization

## Learning Outcomes

* Understanding inorder predecessors in binary trees.
* Performing tree traversals without recursion.
* Optimizing space complexity from `O(h)` to `O(1)`.
* Implementing temporary threading while preserving the original tree structure.

