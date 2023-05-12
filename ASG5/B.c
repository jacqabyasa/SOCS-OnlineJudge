#include<stdio.h>

int main(){
	
	long long int t, i, n, j, sum;
	scanf("%lld", &t);
	
	for (i=1; i<t+1; i++){
		sum = 0;
		
		scanf("%lld", &n);
		
		long long item[n];
		for (j=0; j<n; j++) {
		scanf("%lld", &item[j]);
		sum = sum + item[j];}
	
		printf( "Case #%lld: %lld\n", i, sum);
	}
	
	
	}
	
	
	
	
