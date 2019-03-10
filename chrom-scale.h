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
#define Db 1
#define D 2
#define Eb 3
#define E 4
#define F 5
#define Gb 6
#define G 7
#define Ab 8
#define A 9
#define Bb 10
#define B 11

void print_note(int note);
void print_mline(int notes[], int n);
