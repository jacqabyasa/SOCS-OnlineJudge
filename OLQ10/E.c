#include <stdio.h>
#include <string.h>

int main(){
	
	int t, k, n, i, j, i1, j1, time;
	
	scanf("%d", &t);
	for (i=0; i<t; i++){
		scanf("%d %d", &n, &time);
		int arr[n], temp;
		for (j=0; j<n; j++){
			scanf("%d", &arr[j]);
		}
		int counter = 0;
		for (i1=0; i1<n; i1++){
			for (j1=0; j1<n-1-i1; j1++){
				
				if (arr[j1] > arr[j1+1]){
					
					temp = arr[j1];
					arr[j1] = arr[j1+1];
					arr[j1+1] = temp;
					counter++;
				}
			}
		}
		
		int total = time*counter;
		printf("Case #%d: %d\n", i+1, total);
	}
	return 0;
}
