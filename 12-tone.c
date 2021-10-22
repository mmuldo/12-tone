/* Matt Muldowney
 * 3/10/2019
 * 12-tone.c
 *
 * Module for 12 tone serialism.
 */

#include "12-tone.h"

/* Prints matrix for the given 12-tone row denoting permutations, inversions,
 * and retrogrades.
 *
 * A permutation of the given 12-tone row (the base row) follows the same
 * sequence of intervals between notes, but starts on a different note than
 * the base row starts on, e.g. the 9th permutation starts on the note 9 half
 * steps higher than the starting note of the base row.
 *
 * An inversion of a permutation of the base row starts on the same pitch as the
 * permutation row, but each interval between any two notes in an inversion is
 * the compliment mod 12 of the corresponding interval in the permutation row.
 *
 * A regtrograde of a permutation is the permutation backwards.
 *
 * A retrograde-inversion of a permutation is the retrograde of the inversion
 * of the permutation row.
 *
 * tr[] must have size of 12.
 */
void print_matrix(int tr[]) {
	int interval; // keeps track of "difference" between two notes
	int tmp_tr[12]; // keeps track of current row in matrix being computed

	for (int i=0; i<12; i++) {
		/* we want the interval to be negative to make sums easier later on.
		 * thus, if the ith note in the base tone row is less than the
		 * 0th note, simply subtract the 0th note from the ith note;
		 * on the other hand, if the ith note is greater, again subtract the
		 * 0th note from the ith note, but also subtract 12 to make it the
		 * negative difference mod 12.
		 */
		interval = (tr[i] < tr[0]) ? tr[i] - tr[0] : tr[i] - tr[0] - 12;

		/* compute the ith tone row.
		 * this is defined to be the (interval)th permutation of the base
		 * tone row, so add the current interval to each note in the
		 * base tone row.
		 */
		for (int j=0; j<12; j++) {
			tmp_tr[j] = (tr[j] - interval) % 12;
		}

		// print computed row
		printf("P%2d: ", -interval%12);
		print_mline(tmp_tr, 12);

		printf("\n");
	}
}
