#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void factor(long long int N) {
	long long int i;
	long long int counter = 0;
	
	for (i=1; i<=sqrt(N); i++) {
			if (N%i == 0) {if (i*i != N) counter += 2;
			else counter++;}
				
}
	printf("%lld", counter);
	}
	
	
int main () {
	long long int N;
	int i, j, p, T;
	
	scanf("%d", &T);

	for (j=0; j<T; j++) {
	
	scanf("%lld", &N);
		
	printf("Case #%d: ", j+1);
	factor(N);
	printf("\n");
}
	
		
	return 0;
}

