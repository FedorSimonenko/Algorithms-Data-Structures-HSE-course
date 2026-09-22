## Knuth-Morris-Pratt Algorithm
- **Idea**: During the search, when a mismatch occurs at position `j` in the pattern, instead of restarting from the beginning, we fall back to `π[j-1]` (where `π` is prefix array) and continue comparing from there, thus never moving backwards in the text.
- **Realisation**: 
	1. go throuh the text
	2. decrease j until we will find repeat element ( P$[i]$ = P$[j]$ ) or j will become equal to zero
	3. if current element of the text equal to  element of `π` on the posion `j` we should increase j
	4. if j equal to the length of the pattern it means that we found demanded pattern in the text
- **Complexity**: **O(n + m)**, where n is length of text and m is length of the pattern.