# N-Queens Problem using Backtracking in C++

## Problem Statement

The N-Queens problem is a classic backtracking problem where we need to place `N` queens on an `N x N` chessboard such that:

- No two queens attack each other.
- A queen can attack:
  - Horizontally (same row)
  - Vertically (same column)
  - Diagonally

The goal is to return all possible valid board configurations.

---

# Approach Used

We use the **Backtracking Algorithm**.

## Idea

- Place one queen row by row.
- For every row:
  - Try placing the queen in every column.
  - Check whether the position is safe.
  - If safe:
    - Place the queen.
    - Move recursively to the next row.
  - If no valid position is found:
    - Backtrack by removing the previously placed queen.

---

# Dry Run for N = 4

Initial Board:
. . . .
. . . .
. . . .
. . . .

---

## Step 1

Place queen at `(0,0)`

Q . . .
. . . .
. . . .
. . . .
```

---

## Step 2

Try row `1`

- col0 ❌
- col1 ❌
- col2 ✅

Q . . .
. . Q .
. . . .
. . . .
```

---

## Step 3

Try row `2`

No valid position possible ❌

Backtrack:


Q . . .
. . . .
. . . .
. . . .
```

---

## Step 4

Try next column in row `1`

Place queen at `(1,3)`

Q . . .
. . . Q
. . . .
. . . .
```

Continue recursively...

---

# Recursion Tree

Row0
├── (0,0)
│   ├── (1,2)
│   │    └── Dead End
│   └── (1,3)
│        └── (2,1)
│              └── Dead End
│
├── (0,1)
│   └── (1,3)
│         └── (2,0)
│               └── (3,2)
│                     └── SOLUTION
│
├── (0,2)
│   └── (1,0)
│         └── (2,3)
│               └── (3,1)
│                     └── SOLUTION
│
└── (0,3)
    ├── (1,0)
    │     └── (2,2)
    │            └── Dead End
    │
    └── (1,1)
          └── Dead End
```

---

# Backtracking Explanation

Backtracking means:

1. Place a queen.
2. Explore further possibilities recursively.
3. If no solution is possible:
   - Remove the queen.
   - Try another position.

This line performs backtracking:

board[row][i]='.';
```

It removes the queen so other possibilities can be explored.

---

# Base Case

if(row==n)
```

When `row == n`, it means queens are successfully placed in all rows.

So we store the board configuration in `ans`.

---

# Time Complexity

Worst Case:

O(N!)
```

Because:
- First row → N choices
- Second row → N-1 choices
- Third row → N-2 choices
- and so on...

---

# Space Complexity

```text
O(N²)
```

For storing the chessboard.

Recursion stack space:

O(N)
```

# Final Output for N = 4

## Solution 1

. Q . .
. . . Q
Q . . .
. . Q .
```

## Solution 2

. . Q .
Q . . .
. . . Q
. Q . .
```

---

# Key Concepts Learned

- Recursion
- Backtracking
- 2D Board Traversal
- Diagonal Checking
- Recursive Tree Exploration

---