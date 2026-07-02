# Doubly Linked List in C++

## Overview

This program implements a Doubly Linked List using classes in C++. Each node contains:

* `data` : stores the value
* `next` : pointer to the next node
* `prev` : pointer to the previous node

The `DoublyList` class provides common operations for insertion, deletion, and traversal.

---

## Classes

### Node

Represents a single node in the doubly linked list.

```cpp
class Node{
public:
    int data;
    Node *next;
    Node *prev;
};
```

### DoublyList

Manages the linked list and provides operations on it.

```cpp
class DoublyList{
public:
    Node* head;
};
```

---

## Functions

### 1. push_front(int val)

Inserts a new node at the beginning of the list.

**Time Complexity:** O(1)

Example:

```cpp
ll.push_front(10);
```

---

### 2. push_back(int val)

Inserts a new node at the end of the list.

**Time Complexity:** O(n)

Example:

```cpp
ll.push_back(50);
```

---

### 3. printLL()

Prints all elements of the linked list.

Example Output:

```text
40 <-> 30 <-> 20 <-> NULL
```

**Time Complexity:** O(n)

---

### 4. pop_front()

Removes the first node from the list.

**Time Complexity:** O(1)

Example:

```cpp
ll.pop_front();
```

---

### 5. pop_back()

Removes the last node from the list.

**Time Complexity:** O(n)

Example:

```cpp
ll.pop_back();
```

---

### 6. insertatpos(int pos, int val)

Inserts a node at the specified position.

Positions start from 1.

Example:

```cpp
ll.insertatpos(2, 100);
```

Before:

```text
40 <-> 30 <-> 20 <-> NULL
```

After:

```text
40 <-> 100 <-> 30 <-> 20 <-> NULL
```

**Time Complexity:** O(n)

---

## Sample Driver Code

```cpp
int main(){
    DoublyList ll;

    ll.push_front(20);
    ll.push_front(30);
    ll.push_front(40);
    ll.push_front(40);

    ll.printLL();

    return 0;
}
```

### Output

```text
40 <-> 40 <-> 30 <-> 20 <-> NULL
```

---

## Time Complexity Summary

| Operation   | Complexity |
| ----------- | ---------- |
| push_front  | O(1)       |
| push_back   | O(n)       |
| pop_front   | O(1)       |
| pop_back    | O(n)       |
| insertatpos | O(n)       |
| printLL     | O(n)       |

