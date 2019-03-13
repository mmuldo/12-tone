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
void print_matrix(int tr[]) {
	int interval;
	int tmp_tr[12];
	for (int i=0; i<12; i++) {
		interval = (tr[i] < tr[0]) ? tr[i] - tr[0] : tr[i] - tr[0] - 12;

		for (int j=0; j<12; j++) {
			tmp_tr[j] = (tr[j] - interval) % 12;
		}

		printf("P%2d: ", -interval%12);
		print_mline(tmp_tr, 12);
		printf(":R%2d", -interval%12);

		printf("\n");
	}
}
