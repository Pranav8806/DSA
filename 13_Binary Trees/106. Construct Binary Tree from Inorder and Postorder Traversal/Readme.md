# Construct Binary Tree from Inorder and Postorder Traversal

## Problem

Given the inorder and postorder traversal of a binary tree, construct and return the binary tree.

---

## Approach

This solution is based on the following observations:

- In **Postorder Traversal (Left → Right → Root)**, the last element is always the root of the current subtree.
- In **Inorder Traversal (Left → Root → Right)**, elements to the left of the root belong to the left subtree, while elements to the right belong to the right subtree.

To quickly locate the root in the inorder traversal, an `unordered_map` is used to store each node's index.

Since we process the postorder array from the end, we must construct the **right subtree before the left subtree**. Otherwise, the preorder index would point to incorrect nodes.

---

## Algorithm

1. Store the index of every value in the inorder traversal using an `unordered_map`.
2. Initialize `postorderIndex` to the last element of the postorder array.
3. Create the root using `postorder[postorderIndex]` and decrement the index.
4. Find the root's position in the inorder traversal.
5. Recursively construct:
   - Right subtree using the inorder range `[inorderIndex + 1, right]`
   - Left subtree using the inorder range `[left, inorderIndex - 1]`
6. Stop recursion when `left > right`.

---

## Example

### Input

```text
Inorder   = [9,3,15,20,7]
Postorder = [9,15,7,20,3]
```

### Output

```text
        3
       / \
      9   20
         /  \
        15   7
```

---

## Why Build the Right Subtree First?

Postorder traversal follows:

```text
Left → Right → Root
```

When traversing the array from the end, the order becomes:

```text
Root → Right → Left
```

Therefore, after creating the root, the next node belongs to the **right subtree**, so it must be constructed before the left subtree.

---

## Complexity Analysis

- **Time Complexity:** `O(n)`
  - Each node is processed exactly once.
  - Hash map lookup takes `O(1)`.

- **Space Complexity:** `O(n)`
  - `unordered_map` stores all node indices.
  - Recursive call stack requires `O(h)` space, where `h` is the tree height (`O(n)` in the worst case).


---

## Key Takeaways

- **Postorder** identifies the current root (last element).
- **Inorder** splits the tree into left and right subtrees.
- Build the **right subtree before the left subtree** because the postorder array is processed from the end.
- Using an `unordered_map` eliminates repeated searches in the inorder array, reducing the overall complexity from **O(n²)** to **O(n)**.