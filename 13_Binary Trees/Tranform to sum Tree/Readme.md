# Transform Binary Tree to Sum Tree (C++)

## Problem

Given a binary tree, transform it into a **Sum Tree**.

In a Sum Tree, each node contains the sum of the values of its original left and right subtrees. The values of leaf nodes become `0`.

---

## Example

### Original Tree

```
        1
       / \
      2   3
         / \
        4   5
```

### Sum Tree

```
        14
       /  \
      0    9
          / \
         0   0
```

### Explanation

- Node `2` → `0`
- Node `4` → `0`
- Node `5` → `0`
- Node `3` → `4 + 5 = 9`
- Node `1` → `2 + (3 + 4 + 5) = 14`

---

## Approach

The tree is traversed using **postorder traversal** (Left → Right → Root).

For every node:

1. Recursively compute the sum of the left subtree.
2. Recursively compute the sum of the right subtree.
3. Store `leftSum + rightSum` in the current node.
4. Return the total sum of the original subtree (`oldValue + leftSum + rightSum`) to the parent.

---

## Algorithm

```
transform(node)

If node is NULL
    return 0

oldValue = node->data

leftSum = transform(node->left)
rightSum = transform(node->right)

node->data = leftSum + rightSum

return oldValue + leftSum + rightSum
```

---

## Time Complexity

- **O(n)**

Each node is visited exactly once.

---

## Space Complexity

- **O(h)**

where `h` is the height of the tree due to recursion.

- Balanced Tree: **O(log n)**
- Skewed Tree: **O(n)**

---

## Concepts Used

- Binary Trees
- Postorder Traversal
- Recursion
- Tree Transformation
