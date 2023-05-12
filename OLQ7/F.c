#include <stdio.h>

int main () {
	
	int N, i, min_odd=1000001;
	long long int sum = 0;
	
	scanf("%d", &N);
	
	int arr[N];
	for (i=0; i<N; i++) {
		scanf("%d", &arr[i]);
		sum = sum + arr[i];
		if (arr[i]%2 == 1 && arr[i] < min_odd) {
			min_odd = arr[i];
		}
	}
	
	if (sum%2 == 0) printf("%lld\n", sum);
	else printf("%lld\n", sum-min_odd);
	
	
		
	return 0;
}

