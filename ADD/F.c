#include <stdio.h>

int main () {
	
	int x, i, r, c, N;
		
		scanf ("%i", &x);
		
		for (i=1; i<x+1; i++) {
			scanf ("%i", &N);
			
			printf("Case #%i:\n", i);
			
			for (r=1; r<N+1; r++) {
					for (c=1; c<N+1; c++){
						
						if ((r+c) < (N+1)) printf(" ");
						
						else {if ((r+c)%2 == 0) printf("*");
						else printf("#");}
					}
					printf("\n");
				}	
			
			}
		
	
	return 0;
}


