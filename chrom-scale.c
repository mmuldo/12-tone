/* Matt Muldowney
 * 3/10/2019
 * chrom-scale.c
 *
 * Chromatic scale module.
 */

#include <string.h>
#include "chrom-scale.h"

note scale[] = {"C", "Db", "D", "Eb", "E", "F", "Gb", "G", "Ab", "A", "Bb", "B"};

/* Prints a note from the chromatic scale.
 * 0 <= note <= 11
 */
void print_note(int note) {
	assert(note >= 0 && note <= 11);
	char* pitch = scale[note];
	printf(strlen(pitch) > 1 ? "%s" : "%s ", pitch);
}

/* Prints a line of music.
 * n is size of notes[]
 * elements of notes[] must be between 0 and 11
 */
void print_mline(int notes[], int n) {
	for (int i=0; i<n; i++) {
		print_note(notes[i]);
		printf(" ");
	}
}
