#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
	
	int t, k, n, i, j, i1, j1, time;
	
	scanf("%d", &t);
	for (i=0; i<t; i++){
		
		scanf("%d", &n);
		long long int arr[n], temp;
		for (j=0; j<n; j++){
			scanf("%lld", &arr[j]);
		}
	
		for (i1=0; i1<n; i1++){
			for (j1=0; j1<n-1-i1; j1++){
				if (arr[j1] > arr[j1+1]){
					temp = arr[j1];
					arr[j1] = arr[j1+1];
					arr[j1+1] = temp;
				
				}
			}
		}
		
		int half = n/2;
		int min1 = 0;
		for (k=0; k<(half-1); k++){
			if(abs(arr[k] - arr[k+1]) >= min1) min1 = abs(arr[k] - arr[k+1]);
		}
		int min2 = 0;
		for (k=half; k<(n-1); k++){
			if(abs(arr[k] - arr[k+1]) >= min2) min2 = abs(arr[k] - arr[k+1]);
		}
		
		printf("Case #%d: ", i+1);
		if (min1 > min2) printf("%lld\n", min1);
		else if (min1 < min2) printf("%lld\n", min2);
		else if (min1 == min2) printf("%lld\n", min1);
	}
	return 0;
}
