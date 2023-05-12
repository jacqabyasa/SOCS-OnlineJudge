#include <stdio.h>

int main () {
	
	long long int T, N, i, j, k, q, max, first, second;
	
	scanf("%lld", &T);
	
	
	for (i=0; i<T; i++){
		scanf("%lld", &N);
		int arr[N];
		for (j=0; j<N; j++){
			scanf("%lld", &arr[j]);
		}
	max = 0;	
 int first, second;
    if (arr[0] > arr[1]) {
        first = arr[0];
        second = arr[1];
    }
    else {
        first = arr[1];
        second = arr[0];
    }
 
    // Traverse remaining array and find first and second
    // largest elements in overall array
    for (j = 2; j < N; j++) {
        /* If current element is greater than first then
          update both first and second */
        if (arr[j] > first) {
            second = first;
            first = arr[j];
        }
 
        /* If arr[i] is in between first and second then
         * update second  */
        else if (arr[j] > second && arr[j] != first)
            second = arr[j];
    }
    max = first + second;
    
 
		
		printf("Case #%lld: %lld\n", (i+1), max);
		
	}
		
	return 0;
}

