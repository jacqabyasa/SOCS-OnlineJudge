#include <stdio.h>

int main () {
	
	long long int max = 0;
	int t, i, j;
	
	scanf("%d", &t);
	
	long long int stocks[t];
	for (i=0; i<t; i++) {
		scanf("%lld", &stocks[i]);
	}
	
	for (i=0; i<t; i++) {
		if (stocks[i] > 0) max = max + stocks[i];
	}
		
		printf("%lld\n", max);
	
	
	
	
	
	return 0;
}
