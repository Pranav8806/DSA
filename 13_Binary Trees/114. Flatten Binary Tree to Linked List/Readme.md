# Flatten Binary Tree to Linked List (LeetCode 114)

## Problem Statement

Given the `root` of a binary tree, flatten the tree into a linked list in-place.

- The linked list should use the same `TreeNode` structure.
- The `right` pointer should point to the next node.
- The `left` pointer should always be `NULL`.
- The order of nodes must follow **Preorder Traversal (Root → Left → Right)**.

### Example

#### Input

```text
        1
       / \
      2   5
     / \   \
    3   4   6
```

#### Output

```text
1
 \
  2
   \
    3
     \
      4
       \
        5
         \
          6
```

---

## Approach (Morris Traversal)

This solution uses the Morris Traversal technique, which modifies the tree in-place without using recursion or an additional stack.

### Steps

For every node:

1. Check if the current node has a left child.
2. Find the rightmost node (inorder predecessor) of its left subtree.
3. Connect the current node's right subtree to this rightmost node.
4. Move the left subtree to the right.
5. Set the left pointer to `NULL`.
6. Move to the next node using the right pointer.

### Dry Run

#### Initial Tree

```text
        1
       / \
      2   5
     / \   \
    3   4   6
```

For node `1`:

```text
Left Subtree:

      2
     / \
    3   4

Rightmost node = 4
```

Connect:

```text
4 -> right = 5
```

Move left subtree:

```text
1
 \
  2
 / \
3   4
     \
      5
       \
        6
```

---

For node `2`:

```text
Left Subtree:

    3

Rightmost node = 3
```

Connect:

```text
3 -> right = 4
```

Move left subtree:

```text
1
 \
  2
   \
    3
     \
      4
       \
        5
         \
          6
```

The remaining nodes do not have left children, so the tree is completely flattened.

---

---

## Complexity Analysis

| Complexity | Value |
|------------|-------|
| Time Complexity | O(n) |
| Space Complexity | O(1) |

- Every node is processed only a constant number of times.
- No recursion or auxiliary data structures are used.
- The tree is modified in-place.

---

## Key Concepts

- Morris Traversal
- Binary Trees
- Pointer Manipulation
- In-place Tree Transformation
- Preorder Traversal (Root → Left → Right)

---