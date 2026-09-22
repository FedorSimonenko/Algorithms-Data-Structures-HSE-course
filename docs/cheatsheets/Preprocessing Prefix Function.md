## Preprocessing Prefix Function
- **Idea**: We want to store information how much element repeat in a row from beginning (we call this **longest proper prefix**) of the pattern for each element of the pattern.
- **Examples**: 
	- "ABABAC" -> pi = $[0, 0, 1, 2, 3, 0]$ 
	- "aaaaab" -> pi = $[0, 1, 2, 3, 4, 0]$
- **Realisation**: 
	1. go through all the elements.
	2. j (number of repeating element) = pi$[i - 1]$ where i = current index (initially j = 0)
	3. then decrease j until we will find repeat element ( P$[i]$ = P$[j]$ ) or j will become equal to zero
	4. if element repeating increase j and add to our prefix arr
- **Complexity**: **O(m)**, where `m` is the length of the pattern.

