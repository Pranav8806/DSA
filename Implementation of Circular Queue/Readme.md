# Circular Queue Implementation using Array in C++

## Overview

This project implements a **Circular Queue** using an array in C++.

A Circular Queue is a linear data structure that follows the **FIFO (First In, First Out)** principle. Unlike a normal queue, the last position is connected back to the first position, allowing efficient utilization of the array by reusing empty spaces created after dequeue operations.

---

## Features

- Enqueue (Insert an element)
- Dequeue (Remove the front element)
- Peek (View the front element)
- Check if the queue is empty
- Display queue elements
- Efficient space utilization using circular indexing

---

## Data Members

| Variable | Description |
|----------|-------------|
| `front` | Index of the front element |
| `rear` | Index of the last element |
| `cap` | Maximum capacity of the queue |
| `currsize` | Current number of elements in the queue |
| `arr` | Dynamic array used to store queue elements |

---

## Operations

### 1. Enqueue

Inserts a new element at the rear of the queue.

If the queue is full, insertion is not allowed.

The rear index is updated using:

```cpp
rear = (rear + 1) % cap;
```

Example:

```
Queue:

10 20 30

enqueue(40)

10 20 30 40
```

**Time Complexity:** O(1)

---

### 2. Dequeue

Removes the front element from the queue.

The front index is updated using:

```cpp
front = (front + 1) % cap;
```

Example:

```
Before:

10 20 30 40

dequeue()

20 30 40
```

**Time Complexity:** O(1)

---

### 3. Peek

Returns the front element without removing it.

Example:

```
Queue:

20 30 40

peek()

Output:
20
```

**Time Complexity:** O(1)

---

### 4. isEmpty

Checks whether the queue is empty.

Returns:

- `true` → Queue contains no elements
- `false` → Queue contains one or more elements

**Time Complexity:** O(1)

---

### 5. Display

Prints all elements from front to rear.

Since the queue is circular, the traversal wraps around using modulo arithmetic until the rear element is reached.

Example:

```
Queue:

30 40 50 60 70
```

**Time Complexity:** O(n)

---

## Circular Queue Working

Suppose the queue capacity is **5**.

Initial Queue:

```
10 20 30 40 50
F           R
```

After two dequeue operations:

```
_  _ 30 40 50
      F     R
```

Now insert two more elements:

```
60 70 30 40 50
 R     F
```

Instead of wasting the empty spaces at the beginning, the rear wraps around to the front of the array.

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

where **n** is the capacity of the queue.

---

## Sample Output

```
10 20 30 40 50

30 40 50

30 40 50 40 50

Front element = 30
```

---

## Advantages of Circular Queue

- Efficient memory utilization
- Eliminates wasted space in a linear queue
- Constant-time insertion and deletion
- Suitable for fixed-size buffers

---

## Applications

- CPU Scheduling
- Round Robin Scheduling
- Circular Buffers
- Streaming Data
- Keyboard Buffers
- Network Packet Management
- Traffic Signal Control Systems

