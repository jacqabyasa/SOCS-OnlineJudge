#include <stdio.h>
#include <math.h>
int counter[1000001];
int main() {
	
	int i, t, j, k, q, y;
	long long int n;

	scanf("%d", &t);
	
	for (i=0; i<t; i++) {
		scanf("%lld", &n);
		
		long long int number[n];
		for (j=0; j<n; j++) {
			scanf("%lld", &number[j]);
		}
		
		memset(counter, 0, sizeof(counter));
		
		for(k=0; k<n; k++) {
			counter[number[k]]++;
		}
		
		int distinct = 0;
		for (q=0; q<1000001; q++){
			if (counter[q] > 0) distinct++;
		}
		
		printf("Case #%d: %d\n", (i+1), distinct);
	}
	
	return 0;
}
