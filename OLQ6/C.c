#include <stdio.h>

int main () {
	
	long long int T, N, x, y, i, j, k, q, s, p, sum;
	
	scanf("%lld", &N);
	
	for (y=0; y<N; y++){
	scanf("%lld", &T);
	
	int array[T][T];
	for(i=0; i<T; i++){
		for (j=0; j<T; j++){
		scanf("%lld", &array[i][j]);
	}
	
}

printf("Case #%lld:", y+1);
	for (q=0; q<T; q++){
		sum = 0;
		for (k=0; k<T; k++) {
			sum = sum + array[k][q];
		}
			printf(" %lld", sum);
	
	}
printf("\n");
	
}
return 0;}



