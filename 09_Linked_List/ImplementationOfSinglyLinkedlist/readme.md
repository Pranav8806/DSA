# Singly Linked List in C++

## Overview

This project implements a **Singly Linked List** in C++ using classes and dynamic memory allocation. The program demonstrates common linked list operations such as insertion, deletion, searching, and traversal.

## Features

### 1. Insert Operations

* **push_front(int val)**
  Inserts a new node at the beginning of the list.

* **push_back(int val)**
  Inserts a new node at the end of the list.

### 2. Delete Operations

* **pop_front()**
  Removes the first node from the list.

* **pop_back()**
  Removes the last node from the list.

### 3. Insert at Position

* **insertatpos(int val, int pos)**
  Inserts a new node at a specified position.

### 4. Search Operation

* **search(int key)**
  Searches for a given value in the list and displays its index if found.

### 5. Display Linked List

* **printLL()**
  Traverses and prints all nodes along with their next node addresses.

---

## Data Structure

### Node Class

Each node contains:

* `data` → Stores the integer value.
* `next` → Pointer to the next node.

```cpp
class Node{
public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};
```

### LinkedList Class

Maintains:

* `head` → Pointer to the first node.
* `tail` → Pointer to the last node.

```cpp
class Linkedlist{
    Node* head;
    Node* tail;
};
```

---

## Time Complexity

| Operation     | Time Complexity |
| ------------- | --------------- |
| push_front()  | O(1)            |
| push_back()   | O(1)            |
| pop_front()   | O(1)            |
| pop_back()    | O(n)            |
| insertatpos() | O(n)            |
| search()      | O(n)            |
| printLL()     | O(n)            |

---

## Example Execution

### Input Operations

```cpp
Linkedlist ll;

ll.push_back(5);
ll.push_back(4);
ll.push_front(1);
ll.push_front(2);
ll.push_front(6);
ll.push_front(9);

ll.printLL();

ll.pop_front();
ll.pop_back();

ll.printLL();

ll.insertatpos(3,2);

ll.printLL();

ll.search(5);
```

### Sample Output

```text
| 9 | -> | 6 | -> | 2 | -> | 1 | -> | 5 | -> | 4 | -> NULL

| 6 | -> | 2 | -> | 1 | -> | 5 | -> NULL

| 6 | -> | 2 | -> | 3 | -> | 1 | -> | 5 | -> NULL

Element found at index 4
```

---

## Concepts Used

* Object-Oriented Programming (OOP)
* Dynamic Memory Allocation (`new` and `delete`)
* Pointers
* Linked Lists
* Traversal Algorithms



