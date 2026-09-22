## Z-Function
- **Definition**: This is an array where `z[i]` is the number of **consecutive** elements starting from position `i` that are equal to the elements from the beginning (the longest common prefix of the string and its suffix starting at `i`). 
- **Examples:** 
	- s = "aaaaa" 
	 z = $[0, 4, 3, 2, 1]$
	- s = "abacaba"
      z = $[0, 0, 1, 0, 3, 0, 1]$
- **Implementation (Effective algorithm):**  
	1. Create borders `left` and `right` - the rightmost segment coinciding with the beginning
	2. Go throught the string
	3. If `i` inside segment we take `z[i - left]` but this value of `z[i - left]`can't be more than `right - i`(lenght from `i` to the end of the rightmost segment)
	4. Go from element `i` to the end of string comparing with element from the beginning of the string and increase `z[i]`
	5. if `i + z[i]` become more than right border `left = i` and `right = i + z[i]` 
- **Complexity:** `O(n)` where n is length of the string.