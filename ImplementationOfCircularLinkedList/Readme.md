# Circular Singly Linked List in C++

## Overview

This program implements a Circular Singly Linked List using classes in C++.

In a circular linked list:

* The last node points back to the first node.
* There is no `NULL` at the end of the list.
* Traversal continues in a loop until we return to the starting node.

The implementation maintains both:

* `head` → first node
* `tail` → last node

This makes insertion at the beginning and end efficient.

---

# Node Structure

Each node contains:

```cpp
class Node{
public:
    int data;
    Node *next;
};
```

### Data Members

| Variable | Description         |
| -------- | ------------------- |
| data     | Stores node value   |
| next     | Points to next node |

---

# CircularList Class

```cpp
class CircularList{
public:
    Node* head;
    Node* tail;
};
```

### Data Members

| Variable   | Description           |
| ---------- | --------------------- |
| head       | First node            |
| tail       | Last node             |
| tail->next | Always points to head |

---

# Operations

## 1. insertAtHead(int val)

Inserts a node at the beginning of the list.

### Example

```cpp
cll.insertAtHead(10);
cll.insertAtHead(20);
cll.insertAtHead(30);
```

### Result

```text
30 -> 20 -> 10 -> 30
```

### Time Complexity

```text
O(1)
```

---

## 2. insertAtTail(int val)

Inserts a node at the end of the list.

### Example

```cpp
cll.insertAtTail(100);
```

### Time Complexity

```text
O(1)
```

---

## 3. delHead()

Deletes the first node of the circular linked list.

### Example

Before:

```text
30 -> 20 -> 10 -> 30
```

After:

```text
20 -> 10 -> 20
```

### Time Complexity

```text
O(1)
```

---

## 4. delTail()

Deletes the last node of the circular linked list.

### Example

Before:

```text
30 -> 20 -> 10 -> 50 -> 30
```

After:

```text
30 -> 20 -> 10 -> 30
```

### Time Complexity

```text
O(n)
```

Reason:
The node before the tail must be found first.

---

## 5. printLL()

Displays all nodes in the circular linked list.

### Example Output

```text
30 -> 20 -> 10 -> 454 -> 484 -> 784 -> 30
```

### Time Complexity

```text
O(n)
```

---

# Sample Driver Code

```cpp
int main(){
    CircularList cll;

    cll.insertAtHead(10);
    cll.insertAtHead(20);
    cll.insertAtHead(30);

    cll.printLL();

    cll.insertAtTail(454);
    cll.insertAtTail(484);
    cll.insertAtTail(784);

    cll.printLL();

    cll.delHead();
    cll.printLL();

    cll.delTail();
    cll.printLL();

    return 0;
}
```

---

# Time Complexity Summary

| Operation      | Complexity |
| -------------- | ---------- |
| insertAtHead() | O(1)       |
| insertAtTail() | O(1)       |
| delHead()      | O(1)       |
| delTail()      | O(n)       |
| printLL()      | O(n)       |

---

# Important Notes

### Circular Linked List Property

```cpp
tail->next == head
```

This condition must always remain true.

---

### Advantages

* Efficient insertion at head and tail.
* Useful for round-robin scheduling.
* Useful for cyclic processes and queues.

---

### Applications

* CPU Scheduling
* Multiplayer Turn-Based Games
* Music Playlists
* Circular Queues
* Round Robin Algorithms
