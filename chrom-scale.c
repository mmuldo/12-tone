/* Matt Muldowney
 * 3/10/2019
 * chrom-scale.c
 *
 * Chromatic scale module.
 */

#include "chrom-scale.h"

/* Prints a note from the chromatic scale.
 * If no parameter is passed, prints a 'rest' (space).
 * 0 <= note <= 11
 */
void print_note(int note) {
	assert(note >= 0 && note <= 11);

	switch (note) {
		case C:
			printf("C");
			break;
		case Db:
			printf("Db");
			break;
		case D:
			printf("D");
			break;
		case Eb:
			printf("Eb");
			break;
		case E:
			printf("E");
			break;
		case F:
			printf("F");
			break;
		case Gb:
			printf("Gb");
			break;
		case G:
			printf("G");
			break;
		case Ab:
			printf("Ab");
			break;
		case A:
			printf("A");
			break;
		case Bb:
			printf("Bb");
			break;
		case B:
			printf("B");
			break;
		default:
			/* todo: throw exception */
			printf(" ");
	}
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
