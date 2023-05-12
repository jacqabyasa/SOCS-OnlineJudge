#include <stdio.h>

int main () {
	
	long long int T, N, i, j, k, sum, number;
	
	scanf("%lld", &T);
	
	for (i=0; i<T; i++) {
		
		scanf("%lld", &N);
		sum=0;
		int array[N];
		for (j=0; j<N; j++) {
			scanf("%lld", &array[j]);
			sum = sum + array[j];
		}
		number = 0;
		for (k=0; k<N; k++) {
			if (array[k] > sum) number++;	
		}
		
		printf("Case #%lld: %lld\n%lld\n", (i+1), sum, number);
	}
	
	
	return 0;
}

