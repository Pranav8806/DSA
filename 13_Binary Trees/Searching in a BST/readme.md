# Binary Search Tree (BST) - Search Operation in C++

This project demonstrates the implementation of a Binary Search Tree (BST) in C++ using recursion. It includes:

- Recursive insertion of nodes.
- Building a BST from a vector of integers.
- Searching for an element efficiently using BST properties.
- Understanding recursive traversal during search operations.

---

## Features

- Recursive BST insertion.
- Efficient search operation.
- Dynamic memory allocation using pointers.
- Building a BST from an array/vector.
- Average-case search complexity of `O(log n)`.

---

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

Each node stores:
- Data
- Pointer to the left child
- Pointer to the right child

---

## BST Insertion

```cpp
Node* insert(Node *root, int val)
```

### Working

- If the tree is empty, create a new node.
- If the value is smaller than the current node, insert it into the left subtree.
- Otherwise, insert it into the right subtree.
- Return the root of the updated subtree.

```cpp
if(root == NULL)
    return new Node(val);

if(root->data > val)
    root->left = insert(root->left,val);
else
    root->right = insert(root->right,val);

return root;
```

---

## Building the BST

```cpp
Node* buildBST(vector<int> arr)
```

This function inserts all elements of the vector one by one into the BST.

```cpp
vector<int> arr = {3,2,5,6,8,9,1,12};
```

The constructed BST is:

```text
          3
         / \
        2   5
       /     \
      1       6
               \
                8
                 \
                  9
                   \
                    12
```

---

## Search Operation

```cpp
bool search(Node *root,int val)
```

The search operation uses BST properties to efficiently find an element.

### Algorithm

1. If the current node is `NULL`, the element does not exist.
2. If the current node contains the required value, return `true`.
3. If the value is smaller, search the left subtree.
4. Otherwise, search the right subtree.

```cpp
bool search(Node *root,int val){

    if(root==NULL)
        return false;

    if(root->data==val)
        return true;

    if(root->data > val)
        return search(root->left,val);

    return search(root->right,val);
}
```

---

## Recursive Flow

Searching for `8`:

```text
         search(3,8)
                |
                ↓
         search(5,8)
                |
                ↓
         search(6,8)
                |
                ↓
         search(8,8)
                |
              true
```

Searching for `4`:

```text
         search(3,4)
                |
                ↓
         search(5,4)
                |
                ↓
         search(NULL,4)
                |
              false
```

Output:

```text
search(root,8)  -> true

search(root,4)  -> false
```

---

## Time Complexity

| Operation | Average Case | Worst Case |
|----------|-------------|------------|
| Insertion | O(log n) | O(n) |
| Search | O(log n) | O(n) |
| Building BST | O(n log n) | O(n²) |

The worst case occurs when the BST becomes skewed.

Example:

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

Searching in such a tree takes `O(n)` time.

---

## Example Usage

```cpp
vector<int> arr = {3,2,5,6,8,9,1,12};

Node *root = buildBST(arr);

if(search(root,8))
    cout<<"Found";
else
    cout<<"Not Found";
```

Output:

```text
Found
```

Searching for:

```cpp
search(root,4);
```

Output:

```text
Not Found
```

> **Note:** The `search()` function returns a boolean value (`true` or `false`). To display the result, print or store the returned value.

---

## Concepts Used

- Binary Search Trees (BST)
- Recursion
- Tree Traversals
- Dynamic Memory Allocation
- Pointers
- Divide and Conquer
- Time Complexity Analysis

---

