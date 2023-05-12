#include <stdio.h>

int main () {
	
	long long int T, N, i, j, k, q, o, freq;
	
	scanf("%lld", &T);
	for (i=0; i<T; i++) {
		int counter[200001] = {0};
		scanf ("%lld", &N);
		int arr[N];
		for (j=0; j<N; j++) {
			scanf("%lld", &arr[j]);
			counter[arr[j]]++;
			
		}
		int max = arr[0];
		for(k=0; k<N; k++){
			if(arr[k] > max){
				max=arr[k];
			}
		}
		freq = 0;
		freq = counter[0];
		for (q=1; q <= max; q++) {
			if (counter[q] > freq){
				freq = counter[q];
			}
		}
		printf("Case #%lld: %lld\n", i+1, freq);
		int status = 1;
		for(o = 0; o <= max;  o++) {
			if (status == 1 && counter[o] == freq) {
				printf("%lld", o);
				status = 0;}
				else if (counter[o] == freq) {
					printf(" %lld", o);
				}
			}
			printf("\n");
		}
			
		
	
return 0;}


    
