# Delete Node in a Binary Search Tree (LeetCode 450)

## Problem Statement

Given the root of a Binary Search Tree (BST) and an integer `key`, delete the node with the given key from the BST while maintaining the BST properties. Return the root of the modified tree.

---

## Approach

This solution uses recursion to locate and delete the required node while handling all possible cases.

### Cases Handled

1. **Node Not Found**

   * If the current node is `NULL`, return `NULL`.

2. **Search for the Node**

   * If `key` is smaller than the current node's value, recursively search in the left subtree.
   * If `key` is greater than the current node's value, recursively search in the right subtree.

3. **Node Found**

   * Three cases arise:

#### Case 1: Leaf Node (No Children)

```text
     50
      |
    Delete

Result:
NULL
```

* Delete the node and return `NULL`.

#### Case 2: Node with One Child

```text
      50
     /
   30

Delete 50

Result:
   30
```

or

```text
   50
     \
      70

Delete 50

Result:
   70
```

* Store the existing child in a temporary pointer.
* Delete the current node.
* Return the child node.

#### Case 3: Node with Two Children

```text
        50
       /  \
     30    70
          /  \
        60    80
```

When deleting `50`:

1. Find the inorder successor (smallest element in the right subtree).
2. Replace the current node's value with the inorder successor's value.
3. Recursively delete the inorder successor from the right subtree.

```text
Inorder Successor = 60

        60
       /  \
     30    70
          /  \
        60    80
```

After deleting the duplicate `60`:

```text
        60
       /  \
     30    70
             \
              80
```

The BST properties remain preserved.

---

## Algorithm

1. If the tree is empty, return `NULL`.
2. Recursively search for the node containing the key.
3. Handle the three deletion cases:

   * No child.
   * One child.
   * Two children.
4. For two children:

   * Find the inorder successor.
   * Replace the node's value.
   * Delete the inorder successor recursively.
5. Return the modified root.

---

## Time Complexity

| Operation                 | Complexity |
| ------------------------- | ---------- |
| Searching the node        | O(h)       |
| Finding inorder successor | O(h)       |
| Recursive deletion        | O(h)       |
| Overall                   | O(h)       |

* `h` = Height of the Binary Search Tree.
* For a balanced BST: **O(log n)**
* In the worst case (skewed BST): **O(n)**

---

## Space Complexity

* **O(h)** due to recursive function calls.
* Balanced BST: **O(log n)**
* Worst Case: **O(n)**

---

## Key Concepts Used

* Binary Search Trees (BST)
* Recursion
* Inorder Successor
* Tree Manipulation
* Pointer Handling in C++

This implementation efficiently maintains the BST properties after deletion and correctly handles all possible deletion scenarios.
