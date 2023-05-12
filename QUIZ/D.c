#include <stdio.h>


int main () {
	
	int i, j, A, T;

	scanf("%d", &T);
	
	for(i=0; i<T; i++) {
	
	scanf("%d", &A);
	int arr[A];
	
	for(j=0; j<A; j++) {
	
		scanf("%d", &arr[j]);	
		}
	int x, y;
	scanf("%d %d", &x, &y);
	
	printf("Case #%d : ", i+1);
	if (arr[x-1] > arr[y-1]) {printf("Bibi\n");}
	if (arr[x-1] < arr[y-1]) {printf("Lili\n");}
	if (arr[x-1] == arr[y-1]) {printf("Draw\n");}
	
	
}
	
	
		
	return 0;
}


