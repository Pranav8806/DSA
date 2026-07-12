# Construct Binary Tree from Preorder and Inorder Traversal

## Problem
Given the preorder and inorder traversal of a binary tree, construct and return the binary tree.

---

## Approach

The solution uses the following observations:

- In **Preorder Traversal (Root → Left → Right)**, the first element is always the root of the current subtree.
- In **Inorder Traversal (Left → Root → Right)**, elements to the left of the root belong to the left subtree, and elements to the right belong to the right subtree.

To efficiently find the position of each node in the inorder traversal, an `unordered_map` is used. This avoids repeated linear searches and reduces the overall time complexity to **O(n)**.

### Algorithm

1. Store the index of every value from the inorder array in an `unordered_map`.
2. Maintain a `preorderIndex` pointing to the current root in the preorder array.
3. Create a node using `preorder[preorderIndex]` and increment the index.
4. Find the node's position in the inorder array using the hash map.
5. Recursively build:
   - Left subtree using the inorder range `[left, inorderIndex - 1]`
   - Right subtree using the inorder range `[inorderIndex + 1, right]`
6. Stop recursion when `left > right`.

---

## Example

**Input**

```text
Preorder = [3,9,20,15,7]
Inorder  = [9,3,15,20,7]
```

**Output**

```text
        3
       / \
      9   20
         /  \
        15   7
```

---

## Complexity Analysis

- **Time Complexity:** `O(n)`
  - Each node is visited once.
  - Hash map lookup takes `O(1)`.

- **Space Complexity:** `O(n)`
  - `unordered_map` stores all nodes.
  - Recursive call stack takes `O(h)`, where `h` is the tree height (`O(n)` in the worst case).

---

## Key Takeaways

- **Preorder** determines the root node.
- **Inorder** divides the tree into left and right subtrees.
- Using an `unordered_map` avoids repeated searches, improving the solution from **O(n²)** to **O(n)**.