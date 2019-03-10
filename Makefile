# COMP 211, Spring 2019, Wesleyan University
#

# Required flags for compilation.
CFLAGS+=-std=c99 -fdiagnostics-color=auto -Wall

driver : driver.c 12-tone.c 12-tone.h chrom-scale.c chrom-scale.h
	$(CC) $(CFLAGS) $(CPPFLAGS) -o driver driver.c 12-tone.c chrom-scale.c

tests : tests.c 12-tone.c 12-tone.h chrom-scale.c chrom-scale.h
	$(CC) $(CFLAGS) $(CPPFLAGS) -o tests tests.c 12-tone.c chrom-scale.c

clean :
	rm -f driver driver.o
	rm -f tests tests.o
	rm -f 12-tone.o chrom-scale.o


