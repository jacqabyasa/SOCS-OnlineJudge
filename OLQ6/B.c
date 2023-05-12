#include <stdio.h>

int main () {
	
	int T, N, i, j, k;
	 
	
	scanf("%d", &T);
	for (i=0; i<T; i++) {
		scanf ("%d", &N);
		int order[N];
		for (j=N-1; j>=0; j--) {
			scanf("%d", &order[j]);
		}
		
		printf("Case #%d: ", i+1);
	
		for (k=0; k<N; k++){
			printf("%d", order[k]);
			if (k< (N-1)) printf (" ");
		}
		printf("\n");
}

return 0;}

