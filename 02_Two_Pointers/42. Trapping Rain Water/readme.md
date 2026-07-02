# Intuition
For every bar, the trapped water depends on the **smaller of the maximum heights on its left and right**. Instead of storing prefix and suffix maximum arrays, we can use two pointers to process the array in a single pass.

We maintain:
- `l` and `r` as the left and right pointers.
- `lmax` as the maximum height encountered from the left.
- `rmax` as the maximum height encountered from the right.

At each step:
- Update `lmax` and `rmax`.
- If `lmax < rmax`, then the left side is the limiting boundary, so the water trapped at `l` is `lmax - height[l]`.
- Otherwise, the right side is the limiting boundary, so the water trapped at `r` is `rmax - height[r]`.

This allows us to calculate the trapped water in **one traversal** using **constant extra space**.

# Approach
1. Initialize two pointers:
   - `l = 0`
   - `r = n - 1`
2. Initialize:
   - `lmax = INT_MIN`
   - `rmax = INT_MIN`
   - `ans = 0`
3. While `l <= r`:
   - Update `lmax` and `rmax`.
   - If `lmax < rmax`:
     - Add `lmax - height[l]` to the answer.
     - Move `l` one step to the right.
   - Otherwise:
     - Add `rmax - height[r]` to the answer.
     - Move `r` one step to the left.
4. Return `ans`.

# Complexity
- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`

