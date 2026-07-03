# Binary Tree Level Order Traversal

## Problem

Given the root of a binary tree, return the **level order traversal** of its nodes' values.

Level order traversal visits nodes **level by level** from left to right.

---

## Approach

This solution uses **Breadth-First Search (BFS)** with a queue.

The queue stores the nodes of the current level. Before processing a level, we store the current queue size, which represents the number of nodes at that level. We then process exactly those nodes, adding their children to the queue for the next level.

---

## Algorithm

1. If the tree is empty, return an empty result.
2. Create a queue and push the root node.
3. While the queue is not empty:
   - Store the current queue size (`n`), representing the number of nodes in the current level.
   - Create a vector to store the values of the current level.
   - Process `n` nodes:
     - Remove the front node from the queue.
     - Store its value.
     - Push its left child into the queue if it exists.
     - Push its right child into the queue if it exists.
   - Add the current level vector to the final result.
4. Return the result.
---

## Example

### Input

```text
        3
       / \
      9   20
         /  \
        15   7
```

### Output

```text
[
  [3],
  [9, 20],
  [15, 7]
]
```

---

## Dry Run

### Initial Queue

```text
[3]
```

### Level 0

- Queue size = 1
- Process node `3`
- Push `9` and `20`

Result:

```text
[[3]]
```

Queue:

```text
[9, 20]
```

---

### Level 1

- Queue size = 2
- Process nodes `9` and `20`
- Push `15` and `7`

Result:

```text
[[3], [9, 20]]
```

Queue:

```text
[15, 7]
```

---

### Level 2

- Queue size = 2
- Process nodes `15` and `7`

Result:

```text
[[3], [9, 20], [15, 7]]
```

Queue becomes empty, so traversal ends.

---

## Complexity Analysis

- **Time Complexity:** `O(n)`
  - Every node is visited exactly once.

- **Space Complexity:** `O(n)`
  - The queue may store all nodes of the widest level.
  - The result vector also stores all node values.

---

## Key Concepts

- Binary Tree
- Breadth-First Search (BFS)
- Queue
- Level Order Traversal

---

## Learning Outcome

This problem demonstrates how **Breadth-First Search (BFS)** can be used to traverse a binary tree level by level. Using a queue and processing nodes based on the current queue size ensures that all nodes at the same depth are grouped together before moving to the next level.