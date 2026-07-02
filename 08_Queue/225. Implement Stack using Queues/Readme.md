# Stack Implementation Using Queue in C++

This project implements a **Stack** data structure using a single **Queue** in C++.  
The implementation follows the **LIFO (Last In First Out)** principle while internally using queue operations.

## Features

- Push element into stack
- Pop element from stack
- Retrieve top element
- Check if stack is empty
- Implemented using only one queue

## Concepts Used

- Queue Data Structure
- Stack Data Structure
- STL Queue
- Rotation Technique
- Object-Oriented Programming

## Operations Supported

| Function | Description |
|---|---|
| `push(x)` | Inserts element into stack |
| `pop()` | Removes top element |
| `top()` | Returns top element |
| `empty()` | Checks whether stack is empty |

## Working Principle

After inserting a new element into the queue:
1. The element is pushed to the back of the queue.
2. Previous elements are rotated to move the new element to the front.
3. This makes queue behave like a stack.

## Time Complexity

| Operation | Complexity |
| Push | O(n) |
| Pop | O(1) |
| Top | O(1) |
| Empty | O(1) |

## Data Structure Used

- Queue (`queue<int>`)
- STL Queue Container

