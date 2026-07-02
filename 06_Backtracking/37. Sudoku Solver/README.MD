# Sudoku Solver

## Problem Statement

Write a program to solve a Sudoku puzzle by filling the empty cells.

A Sudoku solution must satisfy the following conditions:

* Each row contains the digits 1–9 exactly once.
* Each column contains the digits 1–9 exactly once.
* Each 3 × 3 subgrid contains the digits 1–9 exactly once.
* Empty cells are represented by '.'.

The puzzle is guaranteed to have a unique solution.

---

## Approach

This solution uses **Backtracking** to explore all possible digit placements.

For every empty cell:

1. Try placing digits from 1 to 9.
2. Check whether the digit can be placed safely in the current position.
3. If the placement is valid, move to the next cell.
4. If a dead end is reached, remove the digit and try another possibility.
5. Continue this process until the entire board is filled.

The algorithm systematically explores all valid possibilities and backtracks whenever a choice leads to an invalid configuration.

---

## Valid Position Check

Before placing a digit, three conditions are verified:

### Row Validation

The digit must not already exist in the current row.

### Column Validation

The digit must not already exist in the current column.

### Subgrid Validation

The digit must not already exist in the corresponding 3 × 3 subgrid.

Only if all three conditions are satisfied can the digit be placed.

---

## Backtracking Strategy

For each empty cell:

* Try digits from '1' to '9'.
* Place a digit if it is valid.
* Recursively solve the remaining board.
* If the recursive call succeeds, the puzzle is solved.
* Otherwise, remove the digit and try the next possibility.

This process continues until either:

* A complete valid Sudoku is formed, or
* All possibilities have been exhausted.

---

## Dry Run

Suppose an empty cell is encountered.

### Step 1

Try digit '1'.

* If valid, place it.
* Move to the next cell.

### Step 2

At the next empty cell, try digits from '1' to '9'.

* Continue recursively.

### Step 3

Assume no valid digit can be placed at a future position.

This indicates that an earlier choice was incorrect.

### Step 4 (Backtracking)

* Remove the previously placed digit.
* Return to the previous cell.
* Try the next available digit.

### Step 5

Repeat the process until a valid solution is obtained.

The recursion naturally explores every valid possibility while discarding invalid paths.

---

## Algorithm

1. Start from the first cell.
2. If the current cell is already filled, move to the next cell.
3. If the cell is empty:

   * Try digits from 1 to 9.
   * Check whether the placement is valid.
   * Place the digit if valid.
   * Recursively solve the remaining board.
   * If the recursive call fails, remove the digit.
4. If all rows have been processed successfully, the Sudoku is solved.
5. Return the completed board.

---

## Time Complexity

In the worst case, each empty cell may try all 9 digits.

Therefore, the theoretical complexity is:

**O(9^E)**

where **E** is the number of empty cells.

Although the worst-case complexity is large, pruning through validity checks significantly reduces the search space.

---

## Space Complexity

The recursive call stack stores at most one call for each cell.

**O(E)**

where **E** is the number of empty cells.

---

## Key Learning

* Backtracking is a trial-and-error technique used to explore all possible solutions.
* Invalid choices are discarded immediately through validation checks.
* The recursion explores one path at a time.
* Backtracking removes incorrect choices and allows alternative possibilities to be tested.
* Sudoku is one of the most popular applications of recursive backtracking.
* Efficient validation greatly reduces unnecessary computations and speeds up the solution process.
