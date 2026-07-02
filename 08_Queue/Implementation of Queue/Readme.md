# Queue Implementation using Linked List in C++

## Overview

This project implements a **Queue** data structure using a **Singly Linked List** in C++.

A Queue follows the **FIFO (First In, First Out)** principle, where the first element inserted is the first element removed.

---

## Features

- Enqueue (Insert an element)
- Dequeue (Remove the front element)
- Peek (View the front element)
- Check if the queue is empty
- Display all queue elements

---

## Data Structure Used

### Node

Each node contains:
- Integer data (`val`)
- Pointer to the next node (`next`)

```cpp
class Node{
public:
    int val;
    Node* next;
};
```

### Queue

The queue maintains two pointers:

- **head** → Points to the front of the queue.
- **tail** → Points to the last element of the queue.

---

## Operations

### 1. Enqueue

Adds a new element at the rear of the queue.

Example:

```
Before:
10 -> 20 -> 30

enqueue(40)

After:
10 -> 20 -> 30 -> 40
```

**Time Complexity:** O(1)

**Space Complexity:** O(1)

---

### 2. Dequeue

Removes the front element.

Example:

```
Before:
10 -> 20 -> 30

dequeue()

After:
20 -> 30
```

If the queue becomes empty after deletion, both `head` and `tail` are set to `nullptr`.

**Time Complexity:** O(1)

**Space Complexity:** O(1)

---

### 3. Peek

Returns the front element without removing it.

Example:

```
Queue:
20 -> 30 -> 40

peek()

Output:
20
```

**Time Complexity:** O(1)

---

### 4. isEmpty

Checks whether the queue contains any elements.

Returns:

- `true` → Queue is empty
- `false` → Queue has elements

**Time Complexity:** O(1)

---

### 5. Display

Prints all queue elements from front to rear.

Example:

```
Queue:
20 -> 30 -> 40

Output:
20 30 40
```

**Time Complexity:** O(n)

---

## Time Complexity

| Operation | Complexity |
|-----------|------------|
| Enqueue | O(1) |
| Dequeue | O(1) |
| Peek | O(1) |
| isEmpty | O(1) |
| Display | O(n) |

---

## Space Complexity

- **O(n)**

where **n** is the number of elements stored in the queue.

---

## Sample Output

```
10 20 30 40 50 60

30 40 50 60

Front element = 30
```

---

## Applications of Queue

- CPU Scheduling
- Printer Queue
- Breadth First Search (BFS)
- Task Scheduling
- Network Packet Processing
- Order Processing Systems
