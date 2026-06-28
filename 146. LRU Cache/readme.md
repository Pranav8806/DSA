# LRU Cache (Least Recently Used)

## Problem Statement

Design a data structure that supports the following operations in **O(1)** time:

* **get(key):** Return the value associated with the key if it exists; otherwise return `-1`.
* **put(key, value):** Insert a new key-value pair or update an existing one. If the cache reaches its capacity, remove the **Least Recently Used (LRU)** item before inserting the new one.

---

## Approach

The solution uses two data structures:

1. **Hash Map (`unordered_map`)**

   * Stores the mapping:

     ```
     key → pointer to node
     ```
   * Enables constant-time lookup of cache entries.

2. **Doubly Linked List**

   * Maintains the order of usage.
   * The node immediately after the **head** is the **Most Recently Used (MRU)**.
   * The node immediately before the **tail** is the **Least Recently Used (LRU)**.

---

## Node Structure

Each node stores:

* Key
* Value
* Pointer to previous node
* Pointer to next node

```cpp
class Node{
public:
    int key, val;
    Node *prev;
    Node *next;
};
```

---

## Dummy Nodes

Two dummy nodes (`head` and `tail`) are used to simplify insertion and deletion operations.

```
Head <-> MRU <-> ... <-> LRU <-> Tail
```

The constructor initializes the list as:

```
head <-> tail
```

---

## Helper Functions

### addNode(Node *newNode)

Inserts a node immediately after the head, making it the **Most Recently Used**.

Before:

```
Head <-> A <-> B <-> Tail
```

After inserting X:

```
Head <-> X <-> A <-> B <-> Tail
```

Time Complexity: **O(1)**

---

### delNode(Node *del)

Removes a node from its current position.

Before:

```
A <-> X <-> B
```

After deletion:

```
A <-> B
```

Time Complexity: **O(1)**

---

## get(key)

### Steps

1. Check whether the key exists in the hash map.
2. If it does not exist, return `-1`.
3. Remove the node from its current position.
4. Insert it immediately after the head (marking it as the Most Recently Used).
5. Return its value.

Example:

Before:

```
Head <-> 5 <-> 2 <-> 8 <-> Tail
```

Operation:

```
get(2)
```

After:

```
Head <-> 2 <-> 5 <-> 8 <-> Tail
```

Time Complexity: **O(1)**

---

## put(key, value)

### Case 1: Key Already Exists

* Remove the existing node.
* Delete its entry from the hash map.

---

### Case 2: Cache is Full

Remove the node just before the tail (Least Recently Used).

```
Head <-> 5 <-> 3 <-> 8 <-> Tail
                    ↑
                  Remove
```

Delete it from:

* Doubly Linked List
* Hash Map

---

### Case 3: Insert New Node

Create a new node and insert it immediately after the head.

Add its address to the hash map.

Time Complexity: **O(1)**

---

## Complexity Analysis

| Operation | Time Complexity |
| --------- | --------------- |
| get()     | O(1)            |
| put()     | O(1)            |
| Space     | O(capacity)     |

---

## Key Idea

* **Hash Map** provides direct access to nodes using keys.
* **Doubly Linked List** maintains the order of recently used elements.
* Every accessed or newly inserted node is moved to the front of the list.
* When the cache reaches its capacity, the node before the tail (Least Recently Used) is removed.
* Combining these two data structures ensures both **get()** and **put()** operations run in **O(1)** time.

> **Note:** In your comments, `addNode()` moves a node to the **Most Recently Used (MRU)** position (just after the head), not the Least Recently Used position. Similarly, `tail->prev` is the **Least Recently Used (LRU)** node.
