## Naive / Brute Force Substring Search

- **Idea**: Check every possible starting position in the text and compare characters one by one with the pattern.
- **Time Complexity**: $O(n \cdot m)$, where $n$ is the length of the text and $m$ is the length of the pattern.
- **Drawback**: Slow on large inputs due to repeated comparisons.
- **Improvement**: Knuth–Morris–Pratt (KMP) algorithm runs in $O(n + m)$.