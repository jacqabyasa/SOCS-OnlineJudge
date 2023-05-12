#include <stdio.h>

int main () {
	
	int T, i, j, k, n, x, q, max, distinct;
	
	scanf("%d", &T);
	
		for (i=1; i<(T+1); i++) {
			
			scanf("%d", &x);
			int number[x];
			for (j=0; j<x; j++) {
				
				scanf("%d", &number[j]);
			}
			
			
			int counter[] = {0};
			max = number[0];
			
			for (q=1; q<x; q++) {
				if (number[q]>=max) max = number[q];
			}
			
			for (k=0; k<max; k++) {
				
				counter[number[k]] = 1;
				
			}
			
			
			distinct = 0;
			for (n=0; n<(max+1); n++) {
			distinct = distinct + counter[n];
			}
			
				printf("Case #%d: %d\n", i, distinct);
			
			
			
		}
		
			printf("%d", i);
	
	return 0;
}
