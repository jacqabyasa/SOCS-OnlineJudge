#include <stdio.h>

int main () {
	
	int T, N, i, j, k, qq, q, q1, buy;
	 
	
	scanf("%d", &T);
	for (i=0; i<T; i++) {
		scanf ("%d", &N);
		int need[N];
		for (j=0; j<N; j++) {
			scanf("%d", &need[j]);
		}
		int own[N];
		for (k=0; k<N; k++){
			scanf("%d", &own[k]);
		}
		int sum[N];
		for (q=0; q<N; q++) {
			 buy = need[q] - own[q];
			sum[q] = buy; 
			}
		
		printf("Case #%d: ", i+1);
	
		for (q1=0; q1<N; q1++){
			printf("%d", sum[q1]);
			if (q1< (N-1)) printf (" ");
		}
		printf("\n");
}

return 0;}


//    if (need[q] > own[q]) {buy = need[q] - own[q];
//			sum[q] = buy;}
//			else if (own[q] > need[q]) { buy = (own[q] - need[q]); sum[q] = - buy;}
