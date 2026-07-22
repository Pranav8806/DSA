# Binary Search Tree (BST) - Insertion and Traversal in C++

This project demonstrates the implementation of a Binary Search Tree (BST) in C++ using recursion. It includes:

- Creating a BST using recursive insertion.
- Building the BST from a vector of integers.
- Inorder traversal of the tree.
- Understanding how recursive calls return the updated subtree.

## Features

- Recursive BST insertion.
- Dynamic node creation using pointers.
- Building a BST from an array/vector.
- Inorder traversal (prints elements in sorted order).
- Time-efficient average case insertion (`O(log n)`).

## Code Structure

### Node Class

```cpp
class Node{
public:
    Node *left;
    Node *right;
    int data;

    Node(int val){
        left = NULL;
        right = NULL;
        data = val;
    }
};
```

Each node contains:
- Data
- Pointer to left child
- Pointer to right child

---

### Insert Function

```cpp
Node* insert(Node *root, int val)
```

This function:
- Creates a new node if the current root is `NULL`.
- Inserts smaller values into the left subtree.
- Inserts greater or equal values into the right subtree.
- Returns the root of the updated subtree.

#### Working

```text
           3
         /   \
        2     5
       /       \
      1         6
                 \
                  8
                   \
                    9
                     \
                      12
```

Every recursive call returns the root of its updated subtree.

```cpp
root->left = insert(root->left,val);
```

means:

```text
Insert node
    ↓
Update subtree
    ↓
Return updated subtree
    ↓
Attach it back to its parent
```

---

### Building the BST

```cpp
Node* buildBST(vector<int> arr)
```

This function inserts all elements of the vector one by one.

```cpp
vector<int> arr = {3,2,5,6,8,9,1,12};
```

Insertion order:

```text
3 → 2 → 5 → 6 → 8 → 9 → 1 → 12
```

---

### Inorder Traversal

```cpp
void printTree(Node *root)
```

Traversal order:

```text
Left Subtree
     ↓
Current Node
     ↓
Right Subtree
```

For a BST, inorder traversal always gives the elements in sorted order.

### Output

```text
1 2 3 5 6 8 9 12
```

---

## Time Complexity

| Operation | Average Case | Worst Case |
|-----------|-------------|-------------|
| Insertion | O(log n) | O(n) |
| Traversal | O(n) | O(n) |
| Building BST | O(n log n) | O(n²) |

Worst case occurs when elements are already sorted:

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
```

which creates a skewed tree.

---

## Recursive Flow

```text
insert(5,1)
      |
      ↓
insert(3,1)
      |
      ↓
insert(NULL,1)
      |
   returns (1)
      |
returns (3→1)
      |
returns (5→3→1)
      |
 Updated BST
```

The statement:

```cpp
return root;
```

does not simply return a node. It returns the **root of the updated subtree**, allowing the changes made in deeper recursive calls to propagate back to the original tree.

---


## Concepts Used

- Binary Search Trees (BST)
- Recursion
- Dynamic Memory Allocation
- Pointers
- Tree Traversals
- Divide and Conquer
- Time Complexity Analysis

## Author

**Pranav Sharma**
- B.Tech CSE (AI & ML)
- Jaypee University of Information Technology