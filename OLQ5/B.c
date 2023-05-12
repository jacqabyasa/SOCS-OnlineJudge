#include <stdio.h>

int main () {
	
	int x, i, j, k;
	
	scanf ("%i", &x);
	int sequence[x];
	for (i=0; i<x; i++) {
		scanf("%i", &sequence[i]);
	}
	int values[x];
	for (j=0;j<x;j++) {
		scanf("%i", &values[sequence[j]]);
	}

	for (k=0; k<x; k++) {
		printf("%i", values[k]);
		if (k<(x-1)) printf(" ");
	}

printf("\n");

	return 0;
}

