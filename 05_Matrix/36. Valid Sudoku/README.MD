# Valid Sudoku

## Problem Statement

Given a 9 × 9 Sudoku board, determine whether it is valid according to Sudoku rules.

A Sudoku board is valid if:

* Each row contains the digits 1–9 without repetition.
* Each column contains the digits 1–9 without repetition.
* Each 3 × 3 subgrid contains the digits 1–9 without repetition.
* Empty cells represented by '.' are ignored during validation.

---

## Approach

Traverse every cell of the board.

For each non-empty cell:

1. Check the entire row to ensure the same digit does not appear elsewhere.
2. Check the entire column to ensure the same digit does not appear elsewhere.
3. Identify the corresponding 3 × 3 subgrid.
4. Verify that the digit does not appear anywhere else inside that subgrid.
5. If a duplicate is found in any row, column, or subgrid, return false immediately.

If all cells satisfy the Sudoku constraints, return true.

---

## Algorithm

1. Iterate through every cell of the Sudoku board.
2. Skip empty cells.
3. For each filled cell:

   * Validate the row.
   * Validate the column.
   * Validate the 3 × 3 subgrid.
4. If any duplicate digit is detected, return false.
5. After checking all cells, return true.

---

## Dry Run

Consider the cell containing digit '5'.

### Row Validation

Check every position in the same row.

* If another '5' is found, the board is invalid.
* Otherwise, continue.

### Column Validation

Check every position in the same column.

* If another '5' is found, the board is invalid.
* Otherwise, continue.

### Subgrid Validation

Locate the corresponding 3 × 3 subgrid and inspect every cell within it.

* If another '5' is found, the board is invalid.
* Otherwise, continue.

The same process is repeated for every non-empty cell in the board.

If no duplicates are found throughout the traversal, the Sudoku board is valid.

---

## Time Complexity

For each cell:

* Row validation: O(9)
* Column validation: O(9)
* Subgrid validation: O(9)

Total complexity:

O(81 × 27)

Since the Sudoku board size is fixed (9 × 9), the effective time complexity is:

**O(1)**

---

## Space Complexity

Only a few auxiliary variables are used during validation.

**O(1)**
