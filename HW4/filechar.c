// ***
// *** You MUST modify this file, only the ssort function
// ***

#include <stdio.h>
#include <stdbool.h>

#ifdef TEST_COUNTCHAR
bool countChar(char* filename, int* counts, int size)
{
	// open a file whose name is filename for reading
	FILE* fptr = fopen(filename, "r");

	// if fopen fails, return false. Do NOT fclose
	if (fptr == NULL) {
		return false;
	}
	else {
		for (int c = getc(fptr); c != EOF; c = getc(fptr))
		{

			counts[c] ++;
		}

		fclose(fptr);

		// if fopen succeeds, read every character from the file
		//
		// if a character (call it onechar) is between
		// 0 and size - 1 (inclusive), increase
		// counts[onechar] by one
		// You should *NOT* assume that size is 256
		// reemember to call fclose
		// you may assume that counts already initialized to zero
		// size is the size of counts
		// you may assume that counts has enough memory space
		//
		// hint: use fgetc
		// Please read the document of fgetc carefully, in particular
		// when reaching the end of the file
		//
		return true;
	}

}
#endif

#ifdef TEST_PRINTCOUNTS
void printCounts(int* counts, int len)
{
	for (int i = 0; i < len; i++) {
		int count = counts[i];
		if (count > 0) {

			if (i >= 'A' && i <= 'z')
				printf("%d, %c, %d\n", i, i, count);
			else
				printf("%d, %c, %d\n", i, ' ', count);
		}

	}
	// print the values in counts in the following format
	// each line has three items:
	// ind, onechar, counts[ind]
	// ind is between 0 and size - 1 (inclusive)
	// onechar is printed if ind is between 'a' and 'z' or
	// 'A' and 'Z'. Otherwise, print space
	// if counts[ind] is zero, do not print
}
#endif
