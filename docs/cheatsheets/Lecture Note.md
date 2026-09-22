
## Z‑Algorithm (Z‑function)

### Definition

For a string `s` of length `n`, the **Z‑array** is an array `Z[0..n-1]` where  
`Z[i]` is the length of the **longest common prefix** between `s` and the suffix `s[i..n-1]`.

In other words, `Z[i]` = the largest `L` such that `s[0..L-1] == s[i..i+L-1]` (within bounds).

By convention, `Z[0]` is often set to `0` (or sometimes `n`, but we use `0` for convenience).

---

### Why is it useful?

The Z‑algorithm allows us to solve string matching problems (and many others) in **O(n)** time.  
It can be used directly or as a building block for more complex algorithms (e.g., string periodicity, pattern matching with wildcards).

---

### How to compute the Z‑array efficiently?

We compute `Z[i]` from left to right, maintaining a **segment [l, r]** which is the rightmost interval matched so far, where `s[l..r]` is a prefix of `s`.  
Initially, `l = 0`, `r = 0`.

For each `i` from 1 to `n-1`:

1. If `i <= r`, then we can initialise `Z[i]` using the **previously computed** value at position `i - l`:  
   `Z[i] = min(r - i + 1, Z[i - l])`.  
   This works because the segment `s[l..r]` equals `s[0..r-l]`, so the suffix at `i` corresponds to the suffix at `i-l` within the prefix.

2. Then, we **extend** the match by comparing characters:  
   while `i + Z[i] < n` and `s[Z[i]] == s[i + Z[i]]`, increment `Z[i]`.

3. If `i + Z[i] - 1 > r`, update `l = i`, `r = i + Z[i] - 1`.

This yields a linear-time algorithm.