#include <stdio.h>

int main () {
	
	int N, Q, i, j, k, a, b;
	
	scanf ("%i", &N);
	
	int initialp[N];
	for (i=0; i<N; i++) {
		scanf("%i", &initialp[i]);
	}
	
	scanf("%i", &Q);
	for (j=1; j<(Q+1); j++) {
		scanf("%i %i", &a, &b);
		initialp[a-1] = b;
		printf("Case #%i: ", j);
		
		for (k=0; k<N; k++) {
			printf("%i", initialp[k]);
			if (k<(N-1)) printf(" ");
		}
		printf("\n");
	}
	
	
	
	
	return 0;
}

