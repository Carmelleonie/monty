+++++  +++ Set Cell #0 to 8
[
	>++++ Set Cell #1 to 4
	[
		>++  Add 4*2 to Cell #2
		>+++ Add 4*3 to Cell #3
		>+++ Add 4*3 to Cell #4
		>+ Add 4 to Cell #5
		<<<<-
	]
	>+
	>+
	>-
	>>+ Skip the cell #5 and add 1 to cell 6
	
	[<] Move backward to Cell #0
	<- Then decrease it by 1
]

The result of this is:
Cell No :   0   1   2   3   4   5   6
Contents:   0   0  72 104  88  32   8
Pointer :   ^

>>>>-----. Print the character S
<-----. +++++. Print the character c and h
+++++++..
---.
>>>++.
