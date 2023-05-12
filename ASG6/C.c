#include <stdio.h>

int main () {
	
	long long int T, N, i, j, k, q, fail, outcome;
	 
	
	scanf("%lld", &T);
	for (i=0; i<T; i++) {
		scanf ("%lld", &N);
		int result[N];
		for (j=0; j<N; j++) {
			scanf("%d", &result[j]);
		}
		int min[N];
		for (k=0; k<N; k++){
			scanf("%d", &min[k]);
		}
		fail = 0;
		for (q=0; q<N; q++) {
			 outcome = result[q] - min[q];
			if (outcome < 0) {
				fail++;
			}
			}
		
		printf("Case #%lld: %lld\n", i+1, fail);
	
}

return 0;}
