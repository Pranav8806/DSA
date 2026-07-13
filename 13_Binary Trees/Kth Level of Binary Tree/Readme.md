# Kth Level of a Binary Tree (Recursive) - C++

## Problem
Given a binary tree and an integer `k`, print all the nodes present at the `k`th level of the tree.

The binary tree is constructed using **preorder traversal**, where `-1` represents a `NULL` node.

---

## Approach

### 1. Construct the Binary Tree
The tree is built recursively from the preorder traversal.

- Read the current element.
- If it is `-1`, return `NULL`.
- Otherwise, create a new node.
- Recursively construct the left subtree.
- Recursively construct the right subtree.

### 2. Print the Kth Level
The recursive function works as follows:

- If the current node is `NULL`, return.
- If `k == 1`, print the current node.
- Otherwise, recursively search the left and right subtrees with `k - 1`.

---

## Algorithm

```
kthLevel(root, k)

If root is NULL
    return

If k == 1
    print root->data
    return

kthLevel(root->left, k-1)
kthLevel(root->right, k-1)
```

---

## Example

### Input (Preorder)

```cpp
{1,2,-1,-1,3,4,-1,-1,5,-1,-1}
```

### Constructed Tree

```
        1
       / \
      2   3
         / \
        4   5
```

### k = 3

### Output

```
4 5
```

---

## Time Complexity

### Building the Tree
- **O(n)**

### Printing the Kth Level
- **O(n)**

where `n` is the number of nodes in the tree.

---

## Space Complexity

- **O(h)** (Recursive call stack)

where `h` is the height of the tree.

- Worst Case: **O(n)** (Skewed Tree)
- Best Case: **O(log n)** (Balanced Tree)

---

## Concepts Used

- Binary Trees
- Preorder Traversal
- Recursion
- Tree Construction
- Depth-Based Traversal

