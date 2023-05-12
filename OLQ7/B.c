#include <stdio.h>


int main () {
	long long int x;
	int i, j, p, T;
	
	scanf("%d", &T);
	T = 3;

	for (j=0; j<T; j++) {
	
	scanf("%lld %d", &x, &p);

	int arr[31] = {0};
			
			for (i=30; i>=0; i--) {
			if(x == 0) break;
			if (x%2 == 0) {
				arr[i] = 0;
				
			}
			else arr[i] = 1;
			x = x/2;
			
		}
	
	printf ("%d\n", arr[30-p]);
}
	
		
	return 0;
}



