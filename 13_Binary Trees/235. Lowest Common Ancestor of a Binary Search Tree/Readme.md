# Lowest Common Ancestor of a Binary Search Tree

## Problem Statement
Given the root of a **Binary Search Tree (BST)** and two nodes `p` and `q`, return their **Lowest Common Ancestor (LCA)**.

The **Lowest Common Ancestor** is the lowest node in the tree that has both `p` and `q` as descendants (where a node can be a descendant of itself).

---

## Approach

This solution utilizes the **Binary Search Tree (BST)** property:

- All nodes in the left subtree have values smaller than the root.
- All nodes in the right subtree have values greater than the root.

Starting from the root:

1. If both `p` and `q` are greater than the current node, move to the right subtree.
2. If both `p` and `q` are smaller than the current node, move to the left subtree.
3. Otherwise, the current node is the Lowest Common Ancestor.

---

## Algorithm

1. If the current node is `NULL`, return `NULL`.
2. If both nodes are greater than the current node, recursively search the right subtree.
3. If both nodes are smaller than the current node, recursively search the left subtree.
4. Otherwise, return the current node as the Lowest Common Ancestor.



---

## Dry Run

### BST

```
          6
        /   \
       2     8
      / \   / \
     0   4 7   9
        / \
       3   5
```

### Example 1

**Input**

```
p = 2
q = 8
```

**Execution**

- Current node = 6
- `2 < 6` and `8 > 6`
- The nodes lie on opposite sides of the current node.

**Output**

```
LCA = 6
```

---

### Example 2

**Input**

```
p = 2
q = 4
```

**Execution**

- Current node = 6
- Both values are smaller than 6, so move left.
- Current node = 2
- One of the nodes is the current node itself.

**Output**

```
LCA = 2
```

---

## Complexity Analysis

- **Time Complexity:** `O(h)`
  - `h` is the height of the BST.
  - Best Case (Balanced BST): `O(log n)`
  - Worst Case (Skewed BST): `O(n)`

- **Space Complexity:** `O(h)`
  - Due to the recursive call stack.
  - `O(log n)` for a balanced BST.
  - `O(n)` for a skewed BST.

---

## Key Takeaway

The Binary Search Tree property allows us to eliminate half of the tree at every step, making the search for the Lowest Common Ancestor much more efficient than traversing the entire tree.