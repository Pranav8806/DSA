# Binary Tree Inorder Traversal

## Problem
Given the root of a binary tree, return the **inorder traversal** of its nodes' values.

Inorder traversal visits the nodes in the following order:

**Left → Root → Right**

---

## Approach

This solution uses **Depth First Search (DFS)** with recursion.

### Steps
1. Traverse the left subtree.
2. Visit the current node and store its value.
3. Traverse the right subtree.

A helper function `Traverse()` performs the recursive traversal and stores the node values in a vector.

---

## Algorithm

1. If the current node is `NULL`, return.
2. Recursively traverse the left subtree.
3. Add the current node's value to the answer vector.
4. Recursively traverse the right subtree.
5. Return the answer vector after traversal is complete.

---

## Code

```cpp
class Solution {
public:
    void Traverse(TreeNode* root, vector<int>& ans) {
        if (root == NULL) return;

        Traverse(root->left, ans);
        ans.push_back(root->val);
        Traverse(root->right, ans);
    }

    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        if (root == NULL) return ans;

        Traverse(root, ans);
        return ans;
    }
};
```

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
Left → Root → Right

1 → 3 → 2
```

### Output

```text
[1,3,2]
```

---

## Complexity Analysis

- **Time Complexity:** `O(n)`
  - Every node is visited exactly once.

- **Space Complexity:** `O(h)`
  - `h` is the height of the tree due to the recursive call stack.
  - Worst Case (skewed tree): `O(n)`
  - Best Case (balanced tree): `O(log n)`

---

## Key Concepts

- Binary Tree
- Depth First Search (DFS)
- Recursion
- Inorder Traversal

---

## Learning Outcome

This problem demonstrates how recursive DFS can be used to traverse a binary tree in **Left → Root → Right** order. It serves as a foundation for many Binary Search Tree (BST) operations since an inorder traversal of a BST returns the elements in sorted order.