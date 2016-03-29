#include "cachelab.h"

int main()
{	// Declare cache struct
		// Valid
		// Tag
			// Where do we get the tag from???
		// Number of times referenced 
	// Malloc space for the cache
		// Array of cache struct
	// Sort out I's (check at the beginning of the loop)
	// Within each loop iteration
		// Does the tag exist in the array
			// If so, is the bit valid?
				// If so, is it a read?
					// If so, return hit
				// If not a read, return hit
			// If not valid, return miss, add to array?
		// If no tag, return miss, add to array?

	// Free the malloced space
	
	/////////////////////////////////////////////////////////
	// Add data to cache array function:
	// LRU function
	// Set array at index returned from LRU to be new data
	/////////////////////////////////////////////////////////
	// LRU function()
	// New cache object
	// within for loop going through the entire array
	// 
	/////////////////////////////////////////////////////////
	printSummary(0, 0, 0);
	return 0;
}
