/* Matt Muldowney
 * 3/10/2019
 * 12-tone.c
 *
 * Module for 12 tone serialism.
 */

#include "12-tone.h"

/* Prints table for given 12-tone row denoting permutations, inversions,
 * and retrogrades.
 * tr[] must have size of 12.
 */
void print_table(int tr[]) {
	int i;
	for (int j=12; j>0; j--) {
		i = j % 12;

		print_mline(&tr[i], 12-i);
		print_mline(tr, i);

		printf("\n");
	}
}
