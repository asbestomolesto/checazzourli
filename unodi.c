/*
 * Unodi: Stampa uno dei parametri a caso
 */

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

main(int argc, char **argv)
{
	time_t clock;
	int quale_arg;

	if (argc < 2) {
		fprintf(stderr, "Usage: %s string [string] ...\n", argv[0]);
		exit(1);
	}

	time(&clock);
	srand((int) clock + getpid());

	/* p.es. da "unodi uno due tre", argc = 4, quale_arg = 1, 2 o 3 */
	/* Questo codice tratto dal manuale Linux per rand() */
	quale_arg = 1 + (int) ((double)(argc-1) * rand() / (RAND_MAX + 1.0));

	puts(argv[quale_arg]);

	exit(0);
}
