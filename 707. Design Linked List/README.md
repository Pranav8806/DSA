# Singly Linked List Implementation in C++

This project implements a custom **Singly Linked List** from scratch in C++ without using STL list containers.  
It supports basic linked list operations such as insertion, deletion, and retrieval by index.

## Features

- Insert node at the head
- Insert node at the tail
- Insert node at a specific index
- Delete node at a specific index
- Get value at a specific index
- Dynamic memory allocation using pointers
- Object-oriented implementation using classes

## Concepts Used

- Classes and Objects
- Pointers
- Dynamic Memory Allocation
- Linked List Data Structure
- Traversal Techniques

## Operations Supported

| Function | Description |
| `get(index)` | Returns value at the given index |
| `addAtHead(val)` | Inserts a node at the beginning |
| `addAtTail(val)` | Inserts a node at the end |
| `addAtIndex(index, val)` | Inserts node at specified index |
| `deleteAtIndex(index)` | Deletes node from specified index |

## Time Complexity

| Operation | Complexity |
| Get | O(n) |
| Add at Head | O(1) |
| Add at Tail | O(n) |
| Add at Index | O(n) |
| Delete at Index | O(n) |

## Data Structure Used

A **Node** contains:
- Integer value
- Pointer to the next node

The linked list maintains:
- `head` pointer pointing to the first node

