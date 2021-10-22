/* Matt Muldowney
 * 3/10/2019
 * chrom-scale.h
 *
 * header file for chromatic scale module
 */

#include <stdio.h>
#include <assert.h>

/* chromatic scale
 */
#define C 0
#define Db 1 // same as C#
#define D 2
#define Eb 3 // same as D#
#define E 4
#define F 5
#define Gb 6 // same as F#
#define G 7
#define Ab 8 // same as G#
#define A 9
#define Bb 10 // same as A#
#define B 11

typedef char* note;

extern note scale[12];

void print_note(int note);
void print_mline(int notes[], int n);
