# Top View of Binary Tree (C++)

## Problem Statement

Given a binary tree, print its **Top View**.

The **Top View** of a binary tree consists of the nodes visible when the tree is viewed from the top. If multiple nodes lie on the same vertical line, only the first node encountered from the top is included.

---

## Approach

The solution uses **Level Order Traversal (BFS)** along with **Horizontal Distance (HD)**.

- Assign the root a horizontal distance of `0`.
- Left child gets `HD - 1`.
- Right child gets `HD + 1`.
- Perform BFS using a queue.
- Store the first node encountered for every horizontal distance in a map.
- Since BFS visits nodes level by level, the first node at each horizontal distance belongs to the top view.
- Finally, print the map from leftmost to rightmost horizontal distance.

---

## Algorithm

1. Create a queue storing `(node, horizontal_distance)`.
2. Push the root with horizontal distance `0`.
3. Create a map to store the first node for each horizontal distance.
4. While the queue is not empty:
   - Pop the front node.
   - If its horizontal distance is not present in the map, store the node's value.
   - Push the left child with `HD - 1`.
   - Push the right child with `HD + 1`.
5. Traverse the map and print the stored node values.

---

## Example

### Input (Preorder)

```cpp
{1,2,-1,-1,3,4,-1,-1,5,-1,-1}
```

### Constructed Tree

```
        1
       / \
      2   3
         / \
        4   5
```

### Horizontal Distances

```
        1(0)
       /   \
   2(-1)   3(+1)
          /    \
       4(0)    5(+2)
```

### Output

```
2 1 3 5
```

---

## Complexity Analysis

- **Time Complexity:** `O(N log N)`
  - Each node is visited once.
  - Map insertion takes `O(log N)`.

- **Space Complexity:** `O(N)`
  - Queue stores nodes during BFS.
  - Map stores one node for each horizontal distance.

---

## Data Structures Used

- **Queue** → Performs Level Order Traversal (BFS).
- **Map** → Stores the first node encountered at each horizontal distance in sorted order.

---

## Key Concepts

- Binary Tree
- Breadth First Search (BFS)
- Horizontal Distance (HD)
- Queue
- Map (Ordered Map)

---

## Code Features

- Builds the binary tree from preorder traversal.
- Uses BFS for level-wise traversal.
- Efficiently computes the top view.
- Prints nodes from leftmost to rightmost.

---

## Sample Output

```
2 1 3 5
```