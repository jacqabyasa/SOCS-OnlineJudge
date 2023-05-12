#include <stdio.h>
#include <math.h>

int main () {
	
	int t, i, j;
	long long int n;
	
	scanf("%d", &t);
	for (i=0; i<t; i++) {
		scanf("%lld", &n);
		long long int factor = 0;
		for (j=1; j<=sqrt(n); j++) {
			if (n%j == 0) {if (j*j != n) factor = factor + 2; else factor = factor + 1;}
		}
		
		printf("Case #%d: %lld\n", (i+1), factor);
	}
	
	return 0;
}
