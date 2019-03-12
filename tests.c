#include <stdio.h>
#include "chrom-scale.h"
#include "12-tone.h"

int main(void) {
	int line[12] = {A, C, E, Ab, B, Eb, D, Db, F, G, Gb, Bb};

	print_matrix(line);

	printf("\n");
	return 0;
}
