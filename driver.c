#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include "chrom-scale.h"
#include "12-tone.h"

struct menu_opt {
    int position;
    char* note;
};

int main(void) {
    struct menu_opt menu[] = {
        {C, "C"},
        {Db, "C#/Db"},
        {D, "D"},
        {Eb, "D#/Eb"},
        {E, "E"},
        {F, "F"},
        {Gb, "F#/Gb"},
        {G, "G"},
        {Ab, "G#/Ab"},
        {A, "A"},
        {Bb, "A#/Bb"},
        {B, "B"}
    };

    while (true) {
        char input[2];
        int base_row[12];

        printf("Enter a 12-tone sequence where\n");
        //print menu
        for (int i=0; i<12; i++){
            printf("\t%d => %s\n", menu[i].position, menu[i].note);
        }

        for (int i=0; i<12; ++i){
        INPUT:
            // get input for each note one at a time
            printf("Note %d:", i);
            scanf("%s", input);

            if (atoi(input) < 0 || atoi(input) > 11){
                printf("Choice must be between 0-11.\n");
                goto INPUT;
            }

            base_row[i] = atoi(input);
        }

        // compute matrix
        printf("\n");
        printf("\nMatrix:\n");
        print_matrix(base_row);
        printf("\n");
    }

    return 0;
}
